/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	 sourceListDataSource;

}
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)closeButtonTapped;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)sourceListDataSourceDidUpdate:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)healthRecordsStore:(id)arg1 accountDidChange:(id)arg2 changeType:(long long)arg3 ;
-(void)tapToRadar:(id)arg1 ;
-(id)initWithUsingInsetStyling:(BOOL)arg1 ;
@end

