/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

@interface STManageContactsGroupSpecifierProvider : STRootGroupSpecifierProvider {

	PSSpecifier* _manageContactsRequestSpecifier;

}

@property (retain) PSSpecifier * manageContactsRequestSpecifier;              //@synthesize manageContactsRequestSpecifier=_manageContactsRequestSpecifier - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)setCoordinator:(id)arg1 ;
-(void)_communicationLimitsDidChange:(id)arg1 ;
-(PSSpecifier *)manageContactsRequestSpecifier;
-(void)_showManageContactsRequestAlert:(id)arg1 ;
-(void)setManageContactsRequestSpecifier:(PSSpecifier *)arg1 ;
-(void)_updateContactManagementState:(long long)arg1 ;
@end

