using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeAnimation : MonoBehaviour
{
    int animNumber;
    public Animator anim_ref;
    public GameObject whaleModel;
    public List<string> animNames = new List<string>();
    public List<AnimationClip> clips = new List<AnimationClip>();

    void Start()
    {
        //PrintAnimations(whaleModel);
    }

    public void PlayNextAnimation()
    {
        if (animNumber < clips.Count)
        {
            anim_ref.Play(clips[animNumber].name);
            animNumber++;
        }
    }

    public void PlayPreviousAnimation()
    {
        if(clips.Count > animNumber-1)
        {
            animNumber--;
            anim_ref.Play(clips[animNumber].name);
        }
    }


    void PrintAnimations(GameObject character)
    {
        Animation anim = character.GetComponent<Animation>();
        foreach (AnimationState state in anim)
        {
            animNames.Add(state.name);
            Debug.Log("Here is animation State!!");
        }
    }
}
