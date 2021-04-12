/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthUI/HKViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class HRProfile, NSArray, UIButton, UITableView, UIView, NSString;

@interface WDImprovementDataCollectionOptInViewController : HKViewController <UITableViewDataSource, UITableViewDelegate> {

	HRProfile* _profile;
	NSArray* _sections;
	UIButton* _allowButton;
	UIButton* _doNotAllowButton;
	UITableView* _tableView;
	UIView* _footerView;

}

@property (nonatomic,retain) NSArray * sections;                       //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) UIButton * allowButton;                   //@synthesize allowButton=_allowButton - In the implementation block
@property (nonatomic,retain) UIButton * doNotAllowButton;              //@synthesize doNotAllowButton=_doNotAllowButton - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                      //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) HRProfile * profile;                      //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HRProfile *)profile;
-(void)setProfile:(HRProfile *)arg1 ;
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
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)_setupSubviews;
-(void)_setupConstraints;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)_computeSections;
-(void)allowButtonTapped:(id)arg1 ;
-(void)setAllowButton:(UIButton *)arg1 ;
-(UIButton *)allowButton;
-(void)doNotAllowButtonTapped:(id)arg1 ;
-(void)setDoNotAllowButton:(UIButton *)arg1 ;
-(UIButton *)doNotAllowButton;
-(void)aboutPrivacyButtonTapped:(id)arg1 ;
-(void)_setOptInStatus:(long long)arg1 ;
@end

