/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isAuthenticating;
-(void)submitSettingDescription:(id)arg1 ;
@end

