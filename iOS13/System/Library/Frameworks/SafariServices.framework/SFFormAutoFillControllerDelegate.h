/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
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

