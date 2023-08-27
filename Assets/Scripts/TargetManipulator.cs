using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum RotationDirection { Left = -1, Right = 1, None = 0};
public enum ScaleDirection { Up = 1, Down = -1, None = 0 };
public enum MoveDirection { Left = -1, Right = 1, None = 0 };
public class TargetManipulator : MonoBehaviour
{
    public float angularSpeed;
    public float sizeScaler;
    public RotationDirection rotationDir = RotationDirection.None;
    public ScaleDirection scaleDir = ScaleDirection.None;
    public MoveDirection moveDir = MoveDirection.None;
    public GameObject targetObject;


    private Vector3 originalPos;
    void Start()
    {
        rotationDir = RotationDirection.None;
        scaleDir = ScaleDirection.None;
        moveDir = MoveDirection.None;
        originalPos = targetObject.transform.position;
    }

    void FixedUpdate()
    {
        RotateTarget();
        ScaleTarget();
        MoveTarget();
    }

    #region ### Public Methods ###

    public void RotateRight(bool _input)
    {
        if (_input == true) rotationDir = RotationDirection.Right;
        else rotationDir = RotationDirection.None;
    }

    public void RotateLeft(bool _input)
    {
        if (_input == true) rotationDir = RotationDirection.Left;
        else rotationDir = RotationDirection.None;
    }
    

    public void ScaleUp(bool _input)
    {
        if (_input == true) scaleDir = ScaleDirection.Up;
        else scaleDir = ScaleDirection.None;
    }

    public void ScaleDown(bool _input)
    {
        if (_input == true) scaleDir = ScaleDirection.Down;
        else scaleDir = ScaleDirection.None;
    }

    public void ResetPosition()
    {
        targetObject.transform.position = originalPos;
    }

    public void MoveRight(bool _input)
    {
        if (_input == true) moveDir = MoveDirection.Right;
        else moveDir = MoveDirection.None;
    }

    public void MoveLeft(bool _input)
    {
        if (_input == true) moveDir = MoveDirection.Left;
        else moveDir = MoveDirection.None;
    }
    #endregion

    #region ### Private Methods ###

    void RotateTarget()
    {
        targetObject.transform.Rotate(Vector3.up * angularSpeed * (int)rotationDir * Time.deltaTime);
    }

    void ScaleTarget()
    {
        Vector3 originalScale = targetObject.transform.localScale;

        float scaleChange = sizeScaler * (int)scaleDir * Time.deltaTime;
        Vector3 newScale = originalScale + new Vector3(scaleChange, scaleChange, scaleChange);
        targetObject.transform.localScale = newScale;
    }

    void MoveTarget()
    {
        targetObject.transform.position += Vector3.right  * (int)moveDir * Time.deltaTime;
    }
    #endregion
}
