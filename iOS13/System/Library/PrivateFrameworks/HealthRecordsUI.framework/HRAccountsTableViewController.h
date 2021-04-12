/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol HRRecordViewControllerFactory;
@class HRProfile, NSArray, HRContentStatusView;

@interface HRAccountsTableViewController : UITableViewController {

	HRProfile* _profile;
	id<HRRecordViewControllerFactory> _factory;
	NSArray* _accounts;
	HRContentStatusView* _loadingView;

}

@property (nonatomic,readonly) HRProfile * profile;                                  //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) id<HRRecordViewControllerFactory> factory;              //@synthesize factory=_factory - In the implementation block
@property (nonatomic,retain) NSArray * accounts;                                     //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,retain) HRContentStatusView * loadingView;                      //@synthesize loadingView=_loadingView - In the implementation block
-(id)init;
-(HRProfile *)profile;
-(NSArray *)accounts;
-(id<HRRecordViewControllerFactory>)factory;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setFactory:(id<HRRecordViewControllerFactory>)arg1 ;
-(void)setAccounts:(NSArray *)arg1 ;
-(void)_hideLoadingIndicator;
-(void)setLoadingView:(HRContentStatusView *)arg1 ;
-(HRContentStatusView *)loadingView;
-(void)_reloadAccounts;
-(void)_showLoadingIndicator;
@end

