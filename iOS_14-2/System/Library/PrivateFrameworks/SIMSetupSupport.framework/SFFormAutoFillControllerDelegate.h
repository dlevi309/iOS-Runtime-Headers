/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/


@protocol SFFormAutoFillControllerDelegate <NSObject>
@optional
-(BOOL)formAutoFillControllerShouldShowIconsInPasswordPicker:(id)arg1;
-(void)formAutoFillControllerGetAuthenticationForAutoFill:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)formAutoFillControllerShouldDisableStreamlinedLogin:(id)arg1;
-(void)formAutoFillControllerUserChoseToUseGeneratedPassword:(id)arg1;
-(BOOL)formAutoFillControllerDidUserDeclineAutomaticStrongPasswordForCurrentDomain:(id)arg1;
-(void)formAutoFillControllerDidFocusSensitiveFormField:(id)arg1;

@required
-(id)formAutoFillControllerURLForFormAutoFill:(id)arg1;
-(BOOL)formAutoFillControllerCanPrefillForm:(id)arg1;

@end

