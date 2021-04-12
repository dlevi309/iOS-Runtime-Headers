/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <Preferences/PSListController.h>

@interface MCUIMISDenylistSettingsDetailController : PSListController {

	BOOL _reenabled;

}

@property (assign) BOOL reenabled;              //@synthesize reenabled=_reenabled - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)overridden;
-(void)setOverride:(id)arg1 ;
-(id)specifiers;
-(void)_reloadAsync;
-(void)_askForReenableConfirmation;
-(id)_reenableButtonSpecifier;
-(BOOL)reenabled;
-(void)setReenabled:(BOOL)arg1 ;
@end

