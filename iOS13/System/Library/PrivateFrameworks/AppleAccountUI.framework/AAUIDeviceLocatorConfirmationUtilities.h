/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


@interface AAUIDeviceLocatorConfirmationUtilities : NSObject
+(void)checkIfWatchHasAppleIDAccount:(/*^block*/id)arg1 ;
+(void)showDisableAlertForAccount:(id)arg1 presentingViewController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
+(void)showDisableAlertForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 presentingViewController:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)_performFMIPAuthenticationForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 presentingViewController:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)_handleFMIPAuthenticationResponse:(id)arg1 withError:(id)arg2 forAccount:(id)arg3 message:(id)arg4 confirmationButtonTitle:(id)arg5 presentingViewController:(id)arg6 completion:(/*^block*/id)arg7 ;
+(id)_titleForError:(id)arg1 account:(id)arg2 ;
+(id)_messageForError:(id)arg1 account:(id)arg2 ;
+(void)showEnableAlertWithCompletion:(/*^block*/id)arg1 ;
+(void)showDisableAlertForAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)showDisableAlertForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

