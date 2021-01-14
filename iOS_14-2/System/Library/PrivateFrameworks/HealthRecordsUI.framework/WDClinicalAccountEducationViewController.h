/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setupConstraints;
-(void)setSections:(NSArray *)arg1 ;
-(UIView *)footerView;
-(HKClinicalAccount *)account;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(UIButton *)nextButton;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(UITableView *)tableView;
-(void)updateNextButton;
-(void)setNextButton:(UIButton *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(NSArray *)sections;
-(void)setPromptForDataCollection:(BOOL)arg1 ;
-(BOOL)promptForDataCollection;
-(void)fetchShouldPromptForDataCollection;
-(void)_navigationAction:(id)arg1 ;
-(void)_computeSections;
-(id)initWithProfile:(id)arg1 account:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_setupSubviews;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(HRProfile *)profile;
-(void)viewDidLoad;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
@end

