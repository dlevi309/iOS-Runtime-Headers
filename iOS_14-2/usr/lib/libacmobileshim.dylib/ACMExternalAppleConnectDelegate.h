/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@protocol ACMExternalAppleConnectDelegate <NSObject>
@optional
-(void)appleConnectWillShowSignInDialog:(id)arg1;
-(void)appleConnectDidShowSignInDialog:(id)arg1;
-(void)appleConnectWillHideSignInDialog:(id)arg1;
-(void)appleConnectDidHideSignInDialog:(id)arg1;
-(void)appleConnectSignInDialogWillBecomeEnabled:(id)arg1;
-(void)appleConnectSignInDialogDidBecomeEnabled:(id)arg1;
-(void)appleConnectSignInDialogWillBecomeDisabled:(id)arg1;
-(void)appleConnectSignInDialogDidBecomeDisabled:(id)arg1;
-(BOOL)appleConnectCanHideSignInDialog:(id)arg1;
-(BOOL)appleConnectSignInAnimated:(id)arg1;
-(id)appleConnectStandardBackgroundColor:(id)arg1;
-(id)appleConnectStandardLogoImage:(id)arg1;
-(id)appleConnectStandardAccountNameFieldPlaceholder:(id)arg1;
-(unsigned long long)appleConnectSignInDialogContentStyle:(id)arg1;
-(BOOL)appleConnectUseCustomAppearance:(id)arg1;
-(CGPoint*)appleConnectWidgetPosition:(id)arg1;
-(id)appleConnectAccountLabel:(id)arg1;
-(id)appleConnectSignInButton:(id)arg1;
-(id)appleConnectCancelButton:(id)arg1;
-(long long)appleConnectPasswordFieldsReturnKeyType:(id)arg1;
-(BOOL)appleConnectShouldAuthenticateOnUserInput:(id)arg1;

@required
-(void)appleConnect:(id)arg1 authenticationDidEndWithResponse:(id)arg2;
-(id)appleConnectParentViewController:(id)arg1;

@end

