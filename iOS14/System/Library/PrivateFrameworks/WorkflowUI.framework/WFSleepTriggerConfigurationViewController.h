/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFTriggerConfigurationViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFHealthFeatureObserver.h>

@class UITableView, NSArray, WFHealthFeatureAvailability, NSString;

@interface WFSleepTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFHealthFeatureObserver> {

	UITableView* _tableView;
	NSArray* _sections;
	WFHealthFeatureAvailability* _healthFeatureAvailability;

}

@property (nonatomic,readonly) UITableView * tableView;                                              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSArray * sections;                                                   //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) WFHealthFeatureAvailability * healthFeatureAvailability;              //@synthesize healthFeatureAvailability=_healthFeatureAvailability - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)updateUI;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)healthFeatureAvailability:(id)arg1 sleepOnboardingStatusDidChange:(unsigned long long)arg2 ;
-(id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3 ;
-(id)infoForSection:(long long)arg1 ;
-(WFHealthFeatureAvailability *)healthFeatureAvailability;
-(void)updateNextButtonEnabledState;
-(void)setupParameterSectionCell:(id)arg1 atRow:(long long)arg2 ;
-(id)footerLinkViewForTableView:(id)arg1 ;
@end

