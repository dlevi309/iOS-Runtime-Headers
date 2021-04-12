/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STPINListViewController.h>
#import <libobjc.A.dylib/STAllowanceDetailListControllerDelegate.h>

@protocol STRootViewModelCoordinator;
@class NSObject, PSSpecifier, NSArray, NSDictionary, NSString;

@interface STAllowanceListController : STPINListViewController <STAllowanceDetailListControllerDelegate> {

	BOOL _shouldShowConfirmDeletionAlert;
	NSObject*<STRootViewModelCoordinator> _coordinator;
	PSSpecifier* _informativeTextGroupSpecifier;
	NSArray* _allowanceSpecifiers;
	PSSpecifier* _enableAllAllowancesSpecifier;
	NSDictionary* _allowanceSpecifiersByBundleIdentifier;

}

@property (retain) PSSpecifier * informativeTextGroupSpecifier;                              //@synthesize informativeTextGroupSpecifier=_informativeTextGroupSpecifier - In the implementation block
@property (copy) NSArray * allowanceSpecifiers;                                              //@synthesize allowanceSpecifiers=_allowanceSpecifiers - In the implementation block
@property (retain) PSSpecifier * enableAllAllowancesSpecifier;                               //@synthesize enableAllAllowancesSpecifier=_enableAllAllowancesSpecifier - In the implementation block
@property (assign) BOOL shouldShowConfirmDeletionAlert;                                      //@synthesize shouldShowConfirmDeletionAlert=_shouldShowConfirmDeletionAlert - In the implementation block
@property (copy) NSDictionary * allowanceSpecifiersByBundleIdentifier;                       //@synthesize allowanceSpecifiersByBundleIdentifier=_allowanceSpecifiersByBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<STRootViewModelCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)setCoordinator:(NSObject*<STRootViewModelCoordinator>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)dealloc;
-(NSObject*<STRootViewModelCoordinator>)coordinator;
-(void)confirmDeletion:(id)arg1 ;
-(void)allowanceDetailController:(id)arg1 didSaveAllowance:(id)arg2 ;
-(void)deleteAllowance:(id)arg1 ;
-(void)allowanceDetailController:(id)arg1 didDeleteAllowance:(id)arg2 ;
-(void)_allowancesDidChange;
-(void)_hasWatchOSDevicesDidChange:(BOOL)arg1 coordinator:(id)arg2 ;
-(void)_devicesDidChange:(id)arg1 coordinator:(id)arg2 ;
-(NSArray *)allowanceSpecifiers;
-(void)_adjustCellHeightForAllowanceSpecifier:(id)arg1 ;
-(id)_informativeTextWithDevices:(id)arg1 hasWatchOSDevices:(BOOL)arg2 ;
-(void)_reloadInformativeTextGroupSpecifierIfNeeded:(id)arg1 ;
-(PSSpecifier *)informativeTextGroupSpecifier;
-(void)setInformativeTextGroupSpecifier:(PSSpecifier *)arg1 ;
-(void)addAllowance:(id)arg1 ;
-(void)showStoreDemoAlert;
-(void)_setAllAllowancesEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_allAllowancesEnabled:(id)arg1 ;
-(void)setEnableAllAllowancesSpecifier:(PSSpecifier *)arg1 ;
-(id)_specifierForAllowance:(id)arg1 ;
-(void)setAllowanceSpecifiers:(NSArray *)arg1 ;
-(NSDictionary *)allowanceSpecifiersByBundleIdentifier;
-(void)setAllowanceSpecifiersByBundleIdentifier:(NSDictionary *)arg1 ;
-(void)_didFetchAppInfo:(id)arg1 ;
-(PSSpecifier *)enableAllAllowancesSpecifier;
-(void)_showAllowanceDetailController:(id)arg1 ;
-(id)_subtitleTextForAllowance:(id)arg1 ;
-(BOOL)shouldShowConfirmDeletionAlert;
-(void)setShouldShowConfirmDeletionAlert:(BOOL)arg1 ;
-(void)_showConfirmDeletionView:(id)arg1 ;
@end
