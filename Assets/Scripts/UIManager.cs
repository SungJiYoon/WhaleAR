using NRKernal;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : MonoBehaviour
{
    public GameObject menuPanel;
    bool menuActive = false;

    void Start()
    {
        menuPanel.SetActive(menuActive);

        //NRInput.AddClickListener(ControllerHandEnum.Right, ControllerButton.APP, () =>
        //{
        //    menuActive = !menuActive;
        //    menuPanel.SetActive(menuActive);
        //});
    }


    private void Update()
    {
        if (NRInput.GetButtonDown(ControllerButton.APP))
        {
            menuActive = !menuActive;
            menuPanel.SetActive(menuActive);
        }

    }

    //void OnDisable()
    //{
    //    NRInput.RemoveClickListener(ControllerHandEnum.Right, ControllerButton.APP, () =>
    //    {
    //        menuPanel.SetActive(false);
    //    });
    //}
}
