/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@protocol ACC2SVAuthenticationUIControllerProtocol <NSObject>
@property (assign,nonatomic) id<ACC2SVAuthenticationUIControllerDelegate> delegate; 
@optional
-(void)resetRecoveryCodeViewController;
-(void)showSetupPromptWithCompletion:(/*^block*/id)arg1;
-(void)enterRecoveryKeyWithCompletion:(/*^block*/id)arg1;
-(void)serverCommunicationWillStart;
-(void)serverCommunicationDidEnd;
-(void)handleFailoverWithCompletion:(/*^block*/id)arg1;

@required
-(id<ACC2SVAuthenticationUIControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)hideUIAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;
-(void)enterVerificationCodeWithLength:(unsigned long long)arg1 forDevice:(id)arg2 completion:(/*^block*/id)arg3;
-(void)chooseTrustedDeviceWithDeviceList:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resetTrustedDevicesViewControllerWithDeviceList:(id)arg1;
-(void)resetCodeVerificationViewController;
-(void)showAlertWithError:(id)arg1 completion:(/*^block*/id)arg2;

@end

