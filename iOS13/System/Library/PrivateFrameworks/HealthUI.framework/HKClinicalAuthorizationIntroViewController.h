/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/HKHealthPrivacyServicePromptController.h>

@protocol HKHealthPrivacyServicePromptControllerDelegate;
@class HKClinicalAuthorizationSequenceContext, UITableView, HKClinicalAuthorizationHeaderView, NSString;

@interface HKClinicalAuthorizationIntroViewController : HKViewController <UITableViewDataSource, UITableViewDelegate, HKHealthPrivacyServicePromptController> {

	id<HKHealthPrivacyServicePromptControllerDelegate> _delegate;
	HKClinicalAuthorizationSequenceContext* _context;
	UITableView* _tableView;
	HKClinicalAuthorizationHeaderView* _headerView;

}

@property (nonatomic,readonly) UITableView * tableView;                                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) HKClinicalAuthorizationHeaderView * headerView;                                //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic,__weak) id<HKHealthPrivacyServicePromptControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HKClinicalAuthorizationSequenceContext * context;                              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<HKHealthPrivacyServicePromptControllerDelegate>)delegate;
-(void)setDelegate:(id<HKHealthPrivacyServicePromptControllerDelegate>)arg1 ;
-(HKClinicalAuthorizationSequenceContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UITableView *)tableView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(HKClinicalAuthorizationHeaderView *)headerView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_updateForCurrentContentSizeCategory;
-(void)_finishWithError:(id)arg1 ;
-(void)_cancelButtonPressed:(id)arg1 ;
-(void)_configureNavigationItem;
-(void)_nextButtonPressed:(id)arg1 ;
-(void)_configureTableView;
-(id)_createFooterView;
-(void)_configureHeaderViewWithSource:(id)arg1 ;
-(BOOL)_indexPathIsValidRow:(id)arg1 ;
-(long long)_rowFromIndexPath:(id)arg1 ;
-(id)_cellForDetailsAtIndexPath:(id)arg1 ;
-(id)_cellForViewHealthRecordsAtIndexPath:(id)arg1 ;
-(void)_viewHealthRecordsCellTapped:(id)arg1 ;
@end

