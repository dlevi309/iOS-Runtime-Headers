/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>
#import <libobjc.A.dylib/HKSimpleDataEntryItemToolbarDelegate.h>

@protocol WDBuddyControllerUserInfoDelegate;
@class WDProfile, HKHealthStore, WDUserDefaults, _HKMedicalIDData, HKTitledContactBuddyHeaderView, WDBuddyFlowContinueFooterView, NSArray, WDBuddyFlowUserInfo, NSString;

@interface WDBuddyFlowUserInfoViewController : HKTableViewController <UITableViewDataSource, UITableViewDelegate, WDUserActivityResponder, HKSimpleDataEntryItemToolbarDelegate> {

	WDProfile* _profile;
	HKHealthStore* _healthStore;
	WDUserDefaults* _userDefaults;
	_HKMedicalIDData* _medicalIDData;
	HKTitledContactBuddyHeaderView* _headerView;
	WDBuddyFlowContinueFooterView* _footerView;
	id<WDBuddyControllerUserInfoDelegate> _delegate;
	NSArray* _dataEntryItems;
	WDBuddyFlowUserInfo* _userInfo;

}

@property (nonatomic,retain) NSArray * dataEntryItems;                                           //@synthesize dataEntryItems=_dataEntryItems - In the implementation block
@property (nonatomic,retain) WDBuddyFlowUserInfo * userInfo;                                     //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic,__weak) id<WDBuddyControllerUserInfoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(WDBuddyFlowUserInfo *)userInfo;
-(id)initWithCoder:(id)arg1 ;
-(id<WDBuddyControllerUserInfoDelegate>)delegate;
-(void)setDelegate:(id<WDBuddyControllerUserInfoDelegate>)arg1 ;
-(void)setUserInfo:(WDBuddyFlowUserInfo *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_localeDidChange:(id)arg1 ;
-(void)_loadData;
-(void)_updateForCurrentSizeCategory;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(void)_setupObservers;
-(void)_saveData;
-(id)_createTableHeaderView;
-(id)_createTableFooterView;
-(void)_configureHeaderView:(id)arg1 ;
-(void)continueButtonTapped:(id)arg1 ;
-(void)focusItemAtIndex:(long long)arg1 ;
-(NSArray *)dataEntryItems;
-(void)dataEntryItemDonePressed:(id)arg1 ;
-(void)dataEntryItemPrevPressed:(id)arg1 ;
-(void)dataEntryItemNextPressed:(id)arg1 ;
-(void)setDataEntryItems:(NSArray *)arg1 ;
@end

