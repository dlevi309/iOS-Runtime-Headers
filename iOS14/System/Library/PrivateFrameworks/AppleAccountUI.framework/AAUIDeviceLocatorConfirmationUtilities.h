/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


@interface AAUIDeviceLocatorConfirmationUtilities : NSObject
+(void)checkIfWatchHasAppleIDAccount:(/*^block*/id)arg1 ;
+(void)showDisableAlertForAccount:(id)arg1 presentingViewController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
+(void)showDisableAlertForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 presentingViewController:(id)arg4 completion:(/*^block*/id)arg5 ;
+(void)showDisableAlertForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)_performFMIPAuthenticationForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_handleFMIPAuthenticationResponse:(id)arg1 withError:(id)arg2 forContext:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)_titleForError:(id)arg1 account:(id)arg2 ;
+(id)_messageForError:(id)arg1 account:(id)arg2 ;
+(void)showEnableAlertWithCompletion:(/*^block*/id)arg1 ;
+(void)showDisableAlertForAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)showDisableAlertForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

