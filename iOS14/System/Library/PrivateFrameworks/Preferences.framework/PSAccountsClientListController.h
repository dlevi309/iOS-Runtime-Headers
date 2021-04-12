/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifierForID:(id)arg1 ;
-(void)updateAccountSpecifier;
-(id)requestedAccountDataclass;
-(id)_visibleAccountTypeIDs;
-(BOOL)_isAccountModificationDisabledByRestrictions;
-(void)setSpecifiers:(id)arg1 ;
-(void)dealloc;
@end

