/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <HealthUI/HKViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class HRProfile, HKClinicalAccount, NSArray, UIButton, UITableView, UIView, NSString;

@interface WDClinicalAccountEducationViewController : HKViewController <UITableViewDataSource, UITableViewDelegate> {

	BOOL _promptForDataCollection;
	/*^block*/id _completionBlock;
	HRProfile* _profile;
	HKClinicalAccount* _account;
	NSArray* _sections;
	UIButton* _nextButton;
	UITableView* _tableView;
	UIView* _footerView;

}

@property (nonatomic,readonly) HRProfile * profile;                           //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) HKClinicalAccount * account;              //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL promptForDataCollection;                    //@synthesize promptForDataCollection=_promptForDataCollection - In the implementation block
@property (nonatomic,retain) NSArray * sections;                              //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) UIButton * nextButton;                           //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                         //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                             //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,copy) id completionBlock;                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(HKClinicalAccount *)account;
-(HRProfile *)profile;
-(void)loadView;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setSections:(NSArray *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(UIButton *)nextButton;
-(void)setNextButton:(UIButton *)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)updateNextButton;
-(void)_setupSubviews;
-(void)_setupConstraints;
-(void)setPromptForDataCollection:(BOOL)arg1 ;
-(BOOL)promptForDataCollection;
-(void)fetchShouldPromptForDataCollection;
-(void)_navigationAction:(id)arg1 ;
-(void)_computeSections;
-(id)initWithProfile:(id)arg1 account:(id)arg2 ;
@end

