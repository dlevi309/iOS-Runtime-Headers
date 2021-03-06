/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier, PSListController;

@interface STPasscodeGroupSpecifierProvider : STRootGroupSpecifierProvider {

	PSSpecifier* _togglePasscodeSpecifier;
	PSListController* _listController;

}

@property (nonatomic,retain) PSSpecifier * togglePasscodeSpecifier;              //@synthesize togglePasscodeSpecifier=_togglePasscodeSpecifier - In the implementation block
@property (__weak,readonly) PSListController * listController;                   //@synthesize listController=_listController - In the implementation block
+(id)providerWithCoordinator:(id)arg1 listController:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isHidden;
-(id)init;
-(void)setCoordinator:(id)arg1 ;
-(PSListController *)listController;
-(void)setTogglePasscodeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)togglePasscodeSpecifier;
-(void)reloadTogglePasscodeSpecifier;
-(void)changeOrRemovePasscode:(id)arg1 ;
-(void)_promptForRecoveryAppleIDWithPINController:(id)arg1 passcode:(id)arg2 ;
-(id)_authenticationContextWithReasonKey:(id)arg1 presentingViewController:(id)arg2 ;
-(id)_removePasscodeActionWithPINOptionsTitle:(id)arg1 pinOptionsHandler:(/*^block*/id)arg2 pinValidationHandler:(/*^block*/id)arg3 ;
-(void)_setManagedPasscode;
-(void)_removeManagedPasscode;
@end

