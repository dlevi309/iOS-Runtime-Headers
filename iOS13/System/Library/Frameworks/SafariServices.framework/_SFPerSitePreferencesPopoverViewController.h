/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/SFSwitchTableViewCellDelegate.h>

@class NSString, _SFPerSitePreferencesVendor, NSMutableDictionary, NSArray, UIBarButtonItem, NSIndexPath;

@interface _SFPerSitePreferencesPopoverViewController : UITableViewController <SFSwitchTableViewCellDelegate> {

	NSString* _domain;
	_SFPerSitePreferencesVendor* _perSitePreferencesVendor;
	BOOL _shouldShowSecurePagePreferences;
	NSMutableDictionary* _preferenceToValueCache;
	NSArray* _preferencesBySections;
	UIBarButtonItem* _doneButton;
	NSIndexPath* _expandedRowIndexPath;
	long long _numberOfValuesInExpandedPreference;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_done:(id)arg1 ;
-(void)switchTableViewCell:(id)arg1 didChangeSwitchState:(BOOL)arg2 ;
-(void)_initializePreferences;
-(id)_generalPageSection;
-(id)_securePageSection;
-(id)_indexPathForView:(id)arg1 ;
-(id)_preferenceRowIndexPathForCellAtIndexPath:(id)arg1 ;
-(id)_preferenceAtIndexPath:(id)arg1 ;
-(void)_setPreferenceValue:(id)arg1 forPreference:(id)arg2 ;
-(void)_didRetrieveValue:(id)arg1 forPreference:(id)arg2 ;
-(id)initWithDomain:(id)arg1 shouldShowSecurePreferences:(BOOL)arg2 perSitePreferencesVendor:(id)arg3 ;
-(void)reloadPreferences;
-(void)_setPreferenceValueIndex:(long long)arg1 forView:(id)arg2 ;
@end

