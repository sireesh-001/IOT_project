const char MAIN_page1[] PROGMEM = R"=====(
<!DOCTYPE html>
<html lang=en>
<head>
<meta charset=UTF-8>
<meta http-equiv=X-UA-Compatible content="IE=edge">
<meta name=viewport content="width=device-width, initial-scale=1.0">
<title>Home</title>
<script>function startTime(){var b=new Date();var e=b.getHours();var a=b.getMinutes();var d=b.getSeconds();a=checkTime(a);d=checkTime(d);document.getElementById("txt").innerHTML=e+":"+a;var c=setTimeout(startTime,500)}function checkTime(a){if(a<10){a="0"+a}return a}</script>
<style>*{box-sizing:border-box}body{font-size:14px}.welcome{width:100%;height:905px;background:rgba(101,189,192,1);opacity:1;position:absolute;top:0;left:0;border-top-right-radius:60px;border-bottom-left-radius:60px;border-bottom-right-radius:60px;overflow:hidden}.welcomeright{width:100%;height:905px;background:rgba(255,255,255,1);opacity:1;position:absolute;top:0;left:107px;border-top-left-radius:60px;border-top-right-radius:60px;border-bottom-left-radius:60px;border-bottom-right-radius:60px;box-shadow:-5px 4px 54px rgba(0,0,0,0.07000000029802322);overflow:hidden}.welcomeleft{width:82px;height:692px;background-repeat:no-repeat;background-position:center center;background-size:cover;opacity:1;position:absolute;top:36px;left:15px;overflow:hidden}.symbol{width:69px;height:69px;opacity:1;position:absolute;top:0;left:7px;overflow:hidden}.symbol1{width:69px;height:69px;opacity:1;position:absolute;top:0;left:0;border-radius:50%}.symbol2{width:44px;height:24px;background-repeat:no-repeat;background-position:center center;background-size:cover;opacity:1;position:absolute;top:22px;left:12px;overflow:hidden}.verticalbox{width:82px;height:505px;background-repeat:no-repeat;background-position:center center;background-size:cover;opacity:1;position:absolute;top:186px;left:0;overflow:hidden}.Room{width:32px;height:35px;background-repeat:no-repeat;background-position:center center;background-size:cover;opacity:1;position:absolute;top:0;left:24px;overflow:hidden}.Room1{width:24px;height:27px;opacity:1;position:absolute;top:4px;left:4px}.Room2{width:7px;height:8px;opacity:1;position:absolute;top:23px;left:13px}.Room3{width:32px;height:35px;opacity:1;position:absolute;top:0;left:0}.Security{width:31px;height:39px;opacity:1;position:absolute;top:112px;left:25px}.First1{width:56px;color:rgba(255,245,245,0.6499999761581421);position:absolute;top:52px;left:13px;font-family:Lack;font-weight:Regular;font-size:15px;opacity:1;text-align:left}.First2{width:72px;color:rgba(255,245,245,0.6499999761581421);position:absolute;top:167px;left:7px;font-family:Lack;font-weight:Regular;font-size:15px;opacity:1;text-align:left}.First3{width:82px;color:rgba(255,245,245,0.6499999761581421);position:absolute;top:279px;left:0;font-family:Lack;font-weight:Regular;font-size:15px;opacity:1;text-align:left}.First4{width:76px;color:rgba(255,245,245,0.6499999761581421);position:absolute;top:380px;left:px;font-family:Lack;font-weight:Regular;font-size:15px;opacity:1;text-align:left}.First5{width:54px;color:rgba(255,245,245,0.6499999761581421);position:absolute;top:487px;left:13px;font-family:Lack;font-weight:Regular;font-size:15px;opacity:1;text-align:left}.Statistics{width:36px;height:36px;opacity:1;position:absolute;top:227px;left:23px}.Members{width:34px;height:25px;opacity:1;position:absolute;top:339px;left:25px}.Billing{width:17px;height:31px;opacity:1;position:absolute;top:440px;left:32px}.infobox{width:366px;height:46px;background-repeat:no-repeat;background-position:center center;background-size:cover;opacity:1;position:absolute;top:36px;left:819px;overflow:hidden}.Settings{width:137px;height:46px;background-repeat:no-repeat;background-position:center center;background-size:cover;opacity:1;position:absolute;top:0;left:229px;overflow:hidden}.Bell{width:45px;height:46px;background-repeat:no-repeat;background-position:center center;background-size:cover;opacity:1;position:absolute;top:0;left:92px;overflow:hidden}.icon1{width:45px;height:46px;opacity:1;position:absolute;top:0;left:0}.icon2{width:15px;height:15px;opacity:1;position:absolute;top:10px;left:15px}.icon3{width:30px;height:30px;opacity:1;position:absolute;top:9px;left:0}.icon4{width:26px;height:31px;opacity:1;position:absolute;top:9px;left:48px}.Message{width:464px;color:rgba(29,35,67,1);position:absolute;top:105px;left:280px;font-family:Lack;font-size:48px;font-style:normal;font-weight:400;line-height:58px;letter-spacing:.09em;text-align:left}.Dailyupdate{position:absolute;width:268px;height:144px;left:172px;top:193px;background:#fff;box-shadow:0 4px 35px rgba(0,0,0,0.14);border-radius:30px}.Time{width:268px;height:144px;position:absolute;top:2px;left:0}.Timebox{width:268px;height:144px;background-repeat:no-repeat;background-position:center center;background-size:cover;position:absolute;top:0;left:0}.T1{width:268px;height:144px;position:absolute;background:#fff;box-shadow:0 4px 35px rgba(0,0,0,0.14);border-radius:30px}.T2{width:214px;color:rgba(29,35,67,0.75);position:absolute;top:49px;left:27px;font-family:Lack;font-size:51px;font-style:normal;font-weight:400;line-height:61px;letter-spacing:.035em;text-align:left}.T3{width:79px;color:rgba(28,34,67,0.6299999952316284);position:absolute;top:13px;left:27px;font-family:Lack;font-weight:Regular;font-size:15px;opacity:1;text-align:left}.Temperature{position:absolute;width:319px;height:146px;left:300px;top:0;background:#fff;box-shadow:0 4px 35px rgba(0,0,0,0.14);border-radius:30px}.OT1{width:319px;height:146px;opacity:1;position:absolute;top:0;left:0;border-top-left-radius:30px;border-top-right-radius:30px;border-bottom-left-radius:30px;border-bottom-right-radius:30px;box-shadow:0 4px 35px rgba(0,0,0,0.14000000059604645);overflow:hidden}.OT2{width:286px;color:rgba(28,34,67,0.6299999952316284);position:absolute;top:16px;left:22px;font-family:Lack;font-weight:Regular;font-size:15px;opacity:1;text-align:left}.OT3{width:215px;color:rgba(29,35,67,0.75);position:absolute;top:58px;left:22px;font-family:Lack;font-weight:Regular;font-size:40px;opacity:1;text-align:left}.Members{position:absolute;width:212px;height:146px;left:650px;top:0;background:#fff;box-shadow:0 4px 35px rgba(0,0,0,0.14);border-radius:30px}.M1{width:212px;height:146px;opacity:1;position:absolute;top:0;left:0}.M2{width:212px;height:146px;opacity:1;position:absolute;top:0;left:0;border-top-left-radius:30px;border-top-right-radius:30px;border-bottom-left-radius:30px;border-bottom-right-radius:30px;box-shadow:0 4px 35px rgba(0,0,0,0.14000000059604645);overflow:hidden}.M3{width:163px;color:rgba(28,34,67,0.6299999952316284);position:absolute;top:16px;left:22px;font-family:Lack;font-weight:Regular;font-size:15px;opacity:1;text-align:left}.Names{width:128px;height:82px;opacity:1;position:absolute;top:54px;left:22px}.N1{width:55px;color:rgba(28,34,67,0.6299999952316284);position:absolute;top:56px;left:3px;font-family:Lack;font-weight:Regular;font-size:11px;opacity:1;text-align:left}.N2{width:55px;color:rgba(28,34,67,0.6299999952316284);position:absolute;top:56px;left:73px;font-family:Lack;font-weight:Regular;font-size:11px;opacity:1;text-align:left}.N1info{width:45px;height:46px;opacity:1;position:absolute;top:0;left:0}.N1info1{width:45px;height:46px;opacity:1;position:absolute;top:0;left:0}.N1info2{width:15px;height:15px;opacity:1;position:absolute;top:10px;left:15px}.N2info{width:45px;height:46px;opacity:1;position:absolute;top:0;left:66px;overflow:hidden}.N2info1{width:45px;height:46px;position:absolute;top:0;left:0}.vN2info2{width:15px;height:15px;position:absolute;top:10px;left:15px}.Cloud{width:68px;height:65px;opacity:1;position:absolute;top:231px;left:700px}.Control{width:130px;color:rgba(29,35,67,0.75);position:absolute;top:367px;left:175px;font-family:Lack;font-weight:Regular;font-size:24px;opacity:1;text-align:left}.Light{width:282px;height:331px;background-size:cover;opacity:1;position:absolute;top:427px;left:265px;position:absolute;background:#fff;box-shadow:0 4px 36px rgba(0,0,0,0.18);border-radius:30px}.L1{width:282px;height:331px;opacity:1;position:absolute;top:0;left:0;border-top-left-radius:30px;border-top-right-radius:30px;border-bottom-left-radius:30px;border-bottom-right-radius:30px;box-shadow:0 4px 36px rgba(0,0,0,0.18000000715255737);overflow:hidden}.L2{width:164px;color:rgba(28,34,67,0.6299999952316284);position:absolute;top:15px;left:27px;font-family:Lack;font-weight:Regular;font-size:18px;opacity:1;text-align:left}.Lightcontrolcircle{width:194px;height:205px;background-size:cover;opacity:1;position:absolute;top:73px;left:44px}.LC1{width:25px;color:rgba(28,34,67,0.6299999952316284);position:absolute;top:179px;left:27px;font-family:Lack;font-weight:Regular;font-size:18px;opacity:1;text-align:left}.LC2{width:37px;color:rgba(28,34,67,0.6299999952316284);position:absolute;top:179px;left:157px;font-family:Lack;font-weight:Regular;font-size:18px;opacity:1;text-align:left}.LC3{width:187px;height:187px;opacity:1;position:absolute;top:2px;left:4px;border-radius:50%;box-shadow:0 4px 35px rgba(0,0,0,0.17000000178813934)}.LC4{width:83px;color:rgba(29,35,67,1);position:absolute;top:77px;left:65px;font-family:Lack;font-weight:Regular;font-size:40px;opacity:1;text-align:left}.LC5{width:143px;height:72px;opacity:1;position:absolute;top:71px;left:0;border:16px solid linear-gradient(rgba(101,189,192,1),rgba(101,189,192,0.009999999776482582));transform:rotate(-30deg)}.Airconditioning{width:282px;height:331px;position:absolute;top:427px;left:479px;background:#fff;box-shadow:0 4px 36px rgba(0,0,0,0.18);border-radius:30px}.AC1{width:282px;height:331px;opacity:1;position:absolute;top:0;left:0;border-top-left-radius:30px;border-top-right-radius:30px;border-bottom-left-radius:30px;border-bottom-right-radius:30px;box-shadow:0 4px 36px rgba(0,0,0,0.18000000715255737);overflow:hidden}.AC2{width:177px;color:rgba(28,34,67,0.6299999952316284);position:absolute;top:15px;left:27px;font-family:Lack;font-weight:Regular;font-size:18px;opacity:1;text-align:left}.img65{position:absolute;width:143px;height:72px;left:216px;top:571.5px;transform:rotate(-30deg)}.img99{position:absolute;height:65px;left:10px;top:30px;border-radius:55px}.AC3{width:194px;height:203px;background-repeat:no-repeat;background-position:center center;background-size:cover;opacity:1;position:absolute;top:75px;left:44px}.AC4{width:25px;color:rgba(28,34,67,0.6299999952316284);position:absolute;top:177px;left:27px;font-family:Lack;font-weight:Regular;font-size:18px;opacity:1;text-align:left}.AC5{width:37px;color:rgba(28,34,67,0.6299999952316284);position:absolute;top:177px;left:157px;font-family:Lack;font-weight:Regular;font-size:18px;opacity:1;text-align:left}.AC6{width:187px;height:187px;opacity:1;position:absolute;top:0;left:4px;border-radius:50%;box-shadow:0 4px 35px rgba(0,0,0,0.17000000178813934)}.AC7{width:84px;color:rgba(29,35,67,1);position:absolute;top:70px;left:59px;font-family:Lack;font-weight:Regular;font-size:40px;opacity:1;text-align:left}.AC8{width:71px;height:72px;opacity:1;position:absolute;top:69px;left:0;border:16px solid linear-gradient(rgba(29,35,67,1),rgba(28,34,67,0.029999999329447746));transform:rotate(-30deg)}.Temp{width:204px;height:331px;position:absolute;top:427px;left:650px}.tempbox{width:184px;height:331px;opacity:1;position:absolute;top:0;left:0;border-top-left-radius:30px;border-top-right-radius:30px;border-bottom-left-radius:30px;border-bottom-right-radius:30px;box-shadow:0 4px 36px rgba(0,0,0,0.18000000715255737)}.temp1{width:85px;height:239px;position:absolute;top:57px;left:50px}.temp2{width:85px;height:239px;position:absolute;top:0;left:0}.tempup{width:85px;height:239px;opacity:1;position:absolute;top:0;left:0;border-top-left-radius:25px;border-top-right-radius:25px;border-bottom-left-radius:25px;border-bottom-right-radius:25px;box-shadow:0 -6px 60px rgba(0.11372549086809158,0.13725490868091583,0.26274511218070984,0.14000000059604645)}.tempdown{width:85px;height:145px;background:#ee777f;border-radius:25px;position:absolute;top:94px;left:0}.Temp3{width:10px;height:40px;background:#ee777f;position:absolute;top:30px;left:32px}.Temp4{width:177px;color:rgba(28,34,67,0.6299999952316284);position:absolute;top:15px;left:27px;font-family:Lack;font-weight:Regular;font-size:18px;text-align:left}.Temp5{width:55px;color:rgba(255,255,255,1);position:absolute;top:639px;left:715px;font-family:Lack;font-size:20px;font-style:normal;font-weight:400;line-height:24px;letter-spacing:.03em;text-align:left}.Shortcuts{width:140px;height:287px;background-repeat:no-repeat;background-position:center center;background-size:cover;opacity:1;position:absolute;top:427px;left:1015px;overflow:hidden}.S1{width:92px;color:rgba(28,34,67,0.6299999952316284);position:absolute;top:0;left:24px;font-family:Lack;font-size:15px;font-style:normal;font-weight:400;line-height:18px;letter-spacing:.09em;text-align:left}.top{width:140px;height:74px;background-repeat:no-repeat;background-position:center center;background-size:cover;opacity:1;position:absolute;top:37px;left:0;overflow:hidden}.top1{width:140px;height:74px;background:rgba(238,119,127,1);opacity:1;position:absolute;top:0;left:0;border-top-left-radius:18px;border-top-right-radius:18px;border-bottom-left-radius:18px;border-bottom-right-radius:18px;overflow:hidden}.top2{width:47px;color:rgba(255,255,255,1);position:absolute;top:28px;left:69px;font-family:Lack;font-weight:Regular;font-size:15px;opacity:1;text-align:left}.top3{width:32px;height:23px;opacity:1;position:absolute;top:25px;left:21px}.middle{width:140px;height:74px;background-repeat:no-repeat;background-position:center center;background-size:cover;opacity:1;position:absolute;top:125px;left:0;overflow:hidden}.middle1{width:140px;height:74px;background:rgba(101,189,192,1);opacity:1;position:absolute;top:0;left:0;border-top-left-radius:18px;border-top-right-radius:18px;border-bottom-left-radius:18px;border-bottom-right-radius:18px;overflow:hidden}.middle2{width:47px;color:rgba(255,255,255,1);position:absolute;top:28px;left:69px;font-family:Lack;font-weight:Regular;font-size:15px;opacity:1;text-align:left}.middle3{width:25px;height:26px;opacity:1;position:absolute;top:24px;left:21px}.bottom{width:140px;height:74px;background:url("../images/v22_34.png");background-repeat:no-repeat;background-position:center center;background-size:cover;opacity:1;position:absolute;top:213px;left:0;overflow:hidden}.bottom0{width:140px;height:74px;background:url("../images/v22_26.png");background-repeat:no-repeat;background-position:center center;background-size:cover;opacity:1;position:absolute;top:0;left:0;overflow:hidden}.bottom1{width:140px;height:74px;background:rgba(29,35,67,1);opacity:1;position:absolute;top:0;left:0;border-top-left-radius:18px;border-top-right-radius:18px;border-bottom-left-radius:18px;border-bottom-right-radius:18px;overflow:hidden}.bottom2{width:69px;color:rgba(255,255,255,1);position:absolute;top:29px;left:58px;font-family:Lack;font-weight:Regular;font-size:14px;opacity:1;text-align:left}.bottom3{width:22px;height:22px;opacity:1;position:absolute;top:26px;left:21px}.img99{position:absolute;height:65px;left:18px;top:60px;border-radius:55px}.img100{position:absolute;width:32px;height:35.56px;left:20px;top:190.78px}.img101{position:absolute;left:20.84%;right:94.42%;top:300px}.img102{position:absolute;left:20.56%;right:94.19%;top:420px;bottom:46.3%}.int1{position:absolute;width:175px;height:34px;left:1150px;top:36px;border:2px solid #c2c2c2;box-sizing:border-box;border-radius:30px}.img1{position:absolute;left:1350px;top:36px}.img2{position:absolute;left:1400px;top:36px}.img3{position:absolute;width:46px;height:46px;left:1450px;top:25px}.img103{left:1000px;right:300px;top:100px;bottom:500px}.img104{position:absolute;width:46px;height:46px;left:60px;top:0}.img105{position:absolute;left:16.38%;right:16.1%;top:35.03%;bottom:43.43%}.img106{position:absolute;left:16.38%;right:16.65%;top:35.65%;bottom:33.48%}.img107{position:absolute;left:16.38%;right:16.89%;top:35.59%;bottom:23.98%}.img108{position:absolute;left:40.5%;right:29.77%;top:28.13%;bottom:38.45%}.img109{position:absolute;left:-12px;top:-10px}.img110{position:absolute;left:60px;top:100px}.img111{position:absolute;left:60.99%;right:39.67%;top:25.52%;bottom:67.29%}</style>
</head>
<body onload=startTime()>
<div class=welcome>
<div class=welcomeright></div>
<img src="https://drive.google.com/uc?export=view&id=1w_gbpeGoePPIPBp-nS_HG4t50W8YMaxT" class=img99>
<div class=welcomeleft>
<a href=/k.html><img src="https://drive.google.com/uc?export=view&id=17ed_RibGCLOH8cfXMXNX-uiVBwEhbFHs" class=img100></a>
<img src="https://drive.google.com/uc?export=view&id=1zUw-Shvu9cVOQ7eWr6zMMn9fmW4eng2-" class=img101>
<img src="https://drive.google.com/uc?export=view&id=1bKC_E-jqTtW0XMEhXAWDPXYs7K9COBd1" class=img102>
<div class=symbol>
<div class=symbol1></div>
<div class=symbol2></div>
</div>
<div class=verticalbox>
<div class=Room>
<div class=Room1></div>
<div class=Room2></div>
<div class=Room3></div>
</div>
<div class=Security></div>
<a href=/k.html><span class=First1>Rooms</span></a>
<a href=/motion><span class=First2>Security</span></a>
<span class=First3>Statistics</span>
<div class=Statistics></div>
<div class=Members></div>
<div class=Billing></div>
</div>
</div>
<div class=infobox>
<div class=Settings>
<div class=Bell>
<div class=icon1></div>
<div class=icon2></div>
</div>
<div class=icon3></div>
<div class=icon4></div>
</div>
<div class=SearchBox>
<div class=Search2></div>
</div>
</div>
<div class=search3></div>
<span class=Message>Welcome, Sireesh!</span>
<div class=Dailyupdate>
<div class=Time>
<div class=Timebox>
<div class=T1></div>
<span class=T2 id=txt></span>
</div>
<span class=T3>Time</span>
</div>
<div class=Temperature>
<div class=OT1></div>
<img src="https://drive.google.com/uc?export=view&id=1h4o-JZxV-I18ee5Uxqr_vls8TBWMxOQB" class=img111>
<span class=OT2>Outdoor Temperature</span>
<span class=OT3>+21.3 C</span>
</div>
<div class=Members>
<div class=M1>
<div class=M2></div>
<span class=M3>Members At Home:</span>
</div>
<div class=Names>
<span class=N1>Abhinav</span>
<span class=N2>Sireesh</span>
<div class=N1info>
<img src="https://drive.google.com/uc?export=view&id=1kEYY9ZHIB3ZetLcYTjz_KSOdT_eiTw2D" class=img103>
<img src="https://drive.google.com/uc?export=view&id=1I2RYD2pdMN6fc3WUx6_GJ8qNopvC1wuV" class=img104>
<div class=N1info1></div>
<div class=N1info2></div>
</div>
<div class=N2info>
<div class=N2info1></div>
<div class=N2info2></div>
</div>
</div>
</div>
</div>
</div>
<div class=Cloud></div>
<span class=Control>Controls:</span>
<div class=Light>
<div class=L1></div>
<span class=L2>Light Intensity</span>
<div class=Lightcontrolcircle>
<img src="https://drive.google.com/uc?export=view&id=1ZqdFTZGeEHAULQID0J5cte6v14FAYus1" class=img109>
<span class=LC1>0</span>
<span class=LC2>100</span>
<div class=LC3></div>
<span class=LC4 id=ld1></span>
<div class=LC5></div>
</div>
</div>
<div class=Temp>
<div class=tempbox></div>
<div class=temp1>
<div class=temp2>
<div class=tempup></div>
<div class=tempdown></div>
</div>
<div class=temp3></div>
</div>
<img src="https://drive.google.com/uc?export=view&id=1WoOHE9GFH5iE_vTHlElmOol3BkCN_47i" class=img108>
<span class=Temp4>Temperature</span>
</div>
<span class=Temp5>+23 C</span>
<div class=Shortcuts>
<span class=S1>Shortcuts</span>
<a href=/on><div class=top>
<div class=top1></div>
<img src="https://drive.google.com/uc?export=view&id=1VY3UJarML9H5og0DVF-Cym4-Du8jQsa9" class=img105>
<span class=top2>WI-FI</span>
<div class=top3></div>
</div></a>
<a href=/on><div class=middle>
<div class=middle1></div>
<img src="https://drive.google.com/uc?export=view&id=107wszhq0B6R07E15hAFFYANVdn1NljNF" class=img106>
<span class=middle2>Music</span>
<div class=middle3></div>
</div></a>
<a href=/on><div class=bottom>
<div class=bottom0>
<div class=bottom1></div>
<img src="
                        https://drive.google.com/uc?export=view&id=1gflX17s9t7_gnHGiOhti6_-lD8PXyCV8" class=img107>
<span class=bottom2>Intercom</span>
</div>
<div class=bottom3></div>
</div></a>
</div>
</div>
<input class=int1 type=text placeholder=search></input>
<img class=img1 src="https://drive.google.com/uc?export=view&id=1S5vOPcnO5BSRfrSpYFbTOs8zxR5e3y3d">
<img class=img2 src="https://drive.google.com/uc?export=view&id=1r24MM74fYP9PTPf80l4UWTZE8Vh6FG1j">
<img class=img3 src="https://drive.google.com/uc?export=view&id=1Z666QBg8gy2BHNh-OEQx6M79HlYDxT5c">
<script>var Avalues=[];var dateStamp=[];setInterval(function(){getData()},3000);function getData(){var a=new XMLHttpRequest();a.onreadystatechange=function(){if(this.readyState==4&&this.status==200){var c=new Date();var b=this.responseText;var e=JSON.parse(b);Avalues.push(e.Activity);var d=document.getElementById("ld1");d.innerHTML=e.Activity}};a.open("GET","read_data1",true);a.send()};</script>
</body>
</html>
)=====";
                        
