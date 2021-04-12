/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSAccountsClientListController : PSListController {

	BOOL _noAccountsSetUp;
	BOOL _showExtraVC;
	PSSpecifier* _accountSpecifier;
	id _acObserver;
	int accountUpdateThrottle;

}
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifierForID:(id)arg1 ;
-(void)setSpecifiers:(id)arg1 ;
-(void)updateAccountSpecifier;
-(id)requestedAccountDataclass;
-(id)_visibleAccountTypeIDs;
-(BOOL)_isAccountModificationDisabledByRestrictions;
@end

