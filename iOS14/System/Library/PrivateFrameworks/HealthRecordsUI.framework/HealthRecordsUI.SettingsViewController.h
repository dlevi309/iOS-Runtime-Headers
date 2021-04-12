/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKHealthRecordsStoreAccountStateChangeListener.h>
#import <libobjc.A.dylib/HKSourceListDataSourceObserver.h>

@interface HealthRecordsUI.SettingsViewController : HKTableViewController <HKHealthRecordsStoreAccountStateChangeListener, HKSourceListDataSourceObserver> {

	 accounts;
	 appSourceModels;
	 researchStudySourceModels;
	 sourceLoadingToken;
	 accountLoadingToken;
	 factory;
	 profile;
	 sourceListDataSource;

}
-(void)sourceListDataSourceDidUpdate:(id)arg1 ;
-(void)closeButtonTapped;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)healthRecordsStore:(id)arg1 accountDidChange:(id)arg2 changeType:(long long)arg3 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tapToRadar:(id)arg1 ;
-(id)initWithUsingInsetStyling:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

