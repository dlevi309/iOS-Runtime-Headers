/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUISettingsGroupController.h>

@class NSString, NSMapTable;

@interface SKUISignInSettingsGroupController : SKUISettingsGroupController {

	NSString* _accountName;
	BOOL _authenticating;
	NSMapTable* _keyMapping;
	NSString* _password;
	BOOL _valid;

}
-(void)_resignFirstResponder;
-(BOOL)isAuthenticating;
-(id)valueForSettingDescription:(id)arg1 ;
-(void)returnInSettingDescription:(id)arg1 ;
-(void)setValue:(id)arg1 forSettingDescription:(id)arg2 ;
-(id)_keyForSettingDescription:(id)arg1 ;
-(void)_becomeFirstResponderWithKey:(id)arg1 ;
-(void)_attemptSignInWithAccountName:(id)arg1 password:(id)arg2 ;
-(void)_updateValidation;
-(void)_updateFieldsAuthenticating:(BOOL)arg1 ;
-(void)_signInSuccess:(id)arg1 ;
-(void)_signInFailed:(id)arg1 error:(id)arg2 ;
-(id)_settingDescriptionForKey:(id)arg1 ;
-(id)_submitSettingDescription;
-(void)submitSettingDescription:(id)arg1 ;
@end

