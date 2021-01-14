/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <Preferences/PSListController.h>

@interface MCUIMISDenylistSettingsDetailController : PSListController {

	BOOL _reenabled;

}

@property (assign) BOOL reenabled;              //@synthesize reenabled=_reenabled - In the implementation block
-(id)specifiers;
-(id)init;
-(BOOL)overridden;
-(void)setOverride:(id)arg1 ;
-(void)dealloc;
-(void)_reloadAsync;
-(void)_askForReenableConfirmation;
-(id)_reenableButtonSpecifier;
-(BOOL)reenabled;
-(void)setReenabled:(BOOL)arg1 ;
@end

