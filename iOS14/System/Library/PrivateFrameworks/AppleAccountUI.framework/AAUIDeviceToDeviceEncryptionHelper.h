/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


@protocol AAUIDeviceToDeviceEncryptionHelperDelegate;
@class UIViewController, AKAppleIDAuthenticationController;

@interface AAUIDeviceToDeviceEncryptionHelper : NSObject {

	UIViewController* _presentingViewController;
	id<AAUIDeviceToDeviceEncryptionHelperDelegate> _delegate;
	AKAppleIDAuthenticationController* _authController;

}

@property (nonatomic,retain) AKAppleIDAuthenticationController * authController;                          //@synthesize authController=_authController - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentingViewController;                        //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<AAUIDeviceToDeviceEncryptionHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AAUIDeviceToDeviceEncryptionHelperDelegate>)delegate;
-(id)initWithPresentingViewController:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(void)setDelegate:(id<AAUIDeviceToDeviceEncryptionHelperDelegate>)arg1 ;
-(void)performDeviceToDeviceEncryptionStateRepairForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)_hasPasscode;
-(id)_encryptionErrorFromError:(id)arg1 ;
-(BOOL)_isHSA2AvailableForAuthenticationContext:(id)arg1 ;
-(void)_validateCDPStateForAuthResults:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(AKAppleIDAuthenticationController *)authController;
-(void)_askPermissionToContinueFlowForEligibleAccountForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_authenticateContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_presentCDPUpgradeSpinnerViewControllerForAuthContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_validatePasscodeWithCompletion:(/*^block*/id)arg1 ;
-(void)setAuthController:(AKAppleIDAuthenticationController *)arg1 ;
@end

