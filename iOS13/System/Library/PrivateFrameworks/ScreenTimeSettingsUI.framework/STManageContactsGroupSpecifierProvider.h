/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

@interface STManageContactsGroupSpecifierProvider : STRootGroupSpecifierProvider {

	PSSpecifier* _manageContactsRequestSpecifier;

}

@property (retain) PSSpecifier * manageContactsRequestSpecifier;              //@synthesize manageContactsRequestSpecifier=_manageContactsRequestSpecifier - In the implementation block
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCoordinator:(id)arg1 ;
-(void)_communicationLimitsDidChange:(id)arg1 ;
-(PSSpecifier *)manageContactsRequestSpecifier;
-(void)_showManageContactsRequestAlert:(id)arg1 ;
-(void)setManageContactsRequestSpecifier:(PSSpecifier *)arg1 ;
-(void)_updateContactManagementState:(long long)arg1 ;
@end

