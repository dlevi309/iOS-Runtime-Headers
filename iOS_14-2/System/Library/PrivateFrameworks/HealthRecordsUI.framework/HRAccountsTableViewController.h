/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAccounts:(NSArray *)arg1 ;
-(NSArray *)accounts;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id<HRRecordViewControllerFactory>)factory;
-(HRProfile *)profile;
-(void)viewDidLoad;
-(HRContentStatusView *)loadingView;
-(void)setLoadingView:(HRContentStatusView *)arg1 ;
-(void)setFactory:(id<HRRecordViewControllerFactory>)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)_hideLoadingIndicator;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_reloadAccounts;
-(void)_showLoadingIndicator;
@end

