using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;


public class custom_ui : MonoBehaviour {

    // Use this for initialization
    void Start()
    {
        List<string> btnsName = new List<string>();
        btnsName.Add("btn1");

        foreach (string btnName in btnsName)
        {
            GameObject btnObj = GameObject.Find(btnName);
            Button btn = btnObj.GetComponent<Button>();
            Debug.Log(btn.name);
            btn.onClick.AddListener(delegate () {
                this.OnClick(btnObj);
            });
        }
    }

    public void OnClick(GameObject sender)
    {
        switch (sender.name)
        {
            case "btn1":
                Debug.Log("BtnPlay");
                sender.SetActive(false);
                break;
            case "BtnShop":
                Debug.Log("BtnShop");
                break;
            case "BtnLeaderboards":
                Debug.Log("BtnLeaderboards");
                break;
            default:
                Debug.Log("none");
                break;
        }
    }

    // Update is called once per frame
    void Update()
    {

    }

}
