/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@protocol ACC2SVAuthenticationUIControllerDelegate <NSObject>
@optional
-(id)uiControllerMyAppleConnectURL:(id)arg1;
-(void)uiControllerUserNeedsToAddTrustedDevices:(id)arg1;
-(id)uiControllerTitle:(id)arg1;
-(id)uiControllerRealm:(id)arg1;
-(id)uiControllerSelectedDevice:(id)arg1;
-(int)uiControllerRequestSenderProcessID:(id)arg1;

@required
-(void)uiControllerRefreshDeviceList:(id)arg1;
-(void)uiController:(id)arg1 resendVerificationCodeWithCompletion:(/*^block*/id)arg2;
-(void)uiControllerUserIsUnableToReceiveVerificationCode:(id)arg1;
-(void)uiController:(id)arg1 getImageWithURL:(id)arg2 completion:(/*^block*/id)arg3;
-(void)uiControllerCancelGettingImages:(id)arg1;
-(void)uiControllerHideViewAnimated:(id)arg1;
-(void)uiControllerSetup:(id)arg1;

@end

