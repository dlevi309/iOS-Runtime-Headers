/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFTriggerConfigurationViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFTimeOffsetPickerViewControllerDelegate.h>

@class UITableView, NSArray, NSString;

@interface WFTimeOfDayTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFTimeOffsetPickerViewControllerDelegate> {

	BOOL _showingPicker;
	UITableView* _tableView;
	NSArray* _sections;

}

@property (nonatomic,readonly) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSArray * sections;                   //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL showingPicker;                     //@synthesize showingPicker=_showingPicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3 ;
-(id)infoForSection:(long long)arg1 ;
-(void)timeOffsetPickerViewController:(id)arg1 didSelectOffset:(unsigned long long)arg2 ;
-(void)timeOffsetPickerViewControllerDidCancel:(id)arg1 ;
-(BOOL)showingPicker;
-(id)titleForIndexPath:(id)arg1 ;
-(void)presentOffsetPickerViewControllerForEvent:(unsigned long long)arg1 ;
-(void)updateTriggerTimeFromDate:(id)arg1 ;
-(void)timePickerUpdated:(id)arg1 ;
-(void)setShowingPicker:(BOOL)arg1 ;
@end

