/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _hasSetUpHeaderAndFooterViews;
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
-(void)setUserInfo:(WDBuddyFlowUserInfo *)arg1 ;
-(WDBuddyFlowUserInfo *)userInfo;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<WDBuddyControllerUserInfoDelegate>)delegate;
-(id)initWithProfile:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setDelegate:(id<WDBuddyControllerUserInfoDelegate>)arg1 ;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(void)viewDidLoad;
-(void)_updateForCurrentSizeCategory;
-(void)_localeDidChange:(id)arg1 ;
-(void)_loadData;
-(id)initWithCoder:(id)arg1 ;
-(id)_createTableHeaderView;
-(void)setUpHeaderAndFooterViewsIfNeeded;
-(id)_createTableFooterView;
-(void)_configureHeaderView:(id)arg1 ;
-(void)continueButtonTapped:(id)arg1 ;
-(void)focusItemAtIndex:(long long)arg1 ;
-(NSArray *)dataEntryItems;
-(void)dataEntryItemDonePressed:(id)arg1 ;
-(void)dataEntryItemPrevPressed:(id)arg1 ;
-(void)dataEntryItemNextPressed:(id)arg1 ;
-(void)_setupObservers;
-(void)setDataEntryItems:(NSArray *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_saveData;
@end

