/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/HealthExperienceUI-Structs.h>
#import <HealthUI/HKTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/HKSimpleDataEntryItemToolbarDelegate.h>

@protocol ProfileBuddyViewControllerDelegate;
@class HKTitledContactBuddyHeaderView, WDBuddyFlowContinueFooterView, WDBuddyFlowUserInfo, NSArray, NSString;

@interface ProfileBuddyViewController : HKTableViewController <UITableViewDataSource, UITableViewDelegate, HKSimpleDataEntryItemToolbarDelegate> {

	HKTitledContactBuddyHeaderView* _headerView;
	WDBuddyFlowContinueFooterView* _footerView;
	WDBuddyFlowUserInfo* _userInfo;
	BOOL _hasSetUpHeaderAndFooterViews;
	id<ProfileBuddyViewControllerDelegate> _delegate;
	NSArray* _dataEntryItems;

}

@property (nonatomic,retain) NSArray * dataEntryItems;                                            //@synthesize dataEntryItems=_dataEntryItems - In the implementation block
@property (assign,nonatomic,__weak) id<ProfileBuddyViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WDBuddyFlowUserInfo * buddyFlowUserInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(id<ProfileBuddyViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setDelegate:(id<ProfileBuddyViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)_updateForCurrentSizeCategory;
-(void)_localeDidChange:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBuddyFlowUserInfo:(id)arg1 ;
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
-(WDBuddyFlowUserInfo *)buddyFlowUserInfo;
-(void)_setupObservers;
-(void)setDataEntryItems:(NSArray *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

