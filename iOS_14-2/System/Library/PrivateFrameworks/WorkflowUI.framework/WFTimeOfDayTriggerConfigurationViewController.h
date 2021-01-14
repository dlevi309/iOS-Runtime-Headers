/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFTriggerConfigurationViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFTimeOffsetPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/WFTimeTriggerDayOfWeekCellDelegate.h>

@protocol _CDUserContext;
@class NSArray, UITableView, NSString;

@interface WFTimeOfDayTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFTimeOffsetPickerViewControllerDelegate, WFTimeTriggerDayOfWeekCellDelegate> {

	BOOL _showingPicker;
	id<_CDUserContext> _userContext;
	NSArray* _sections;
	UITableView* _tableView;
	unsigned long long _timeOfDayInterval;

}

@property (nonatomic,readonly) UITableView * tableView;                         //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSArray * sections;                              //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL showingPicker;                                //@synthesize showingPicker=_showingPicker - In the implementation block
@property (assign,nonatomic) unsigned long long timeOfDayInterval;              //@synthesize timeOfDayInterval=_timeOfDayInterval - In the implementation block
@property (nonatomic,readonly) id<_CDUserContext> userContext;                  //@synthesize userContext=_userContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_CDUserContext>)userContext;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)dismissKeyboard;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSArray *)sections;
-(void)dayOfWeekPickerCell:(id)arg1 didChangeSelectedRecurrences:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)setTimeOfDayInterval:(unsigned long long)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(unsigned long long)timeOfDayInterval;
-(id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3 ;
-(id)infoForSection:(long long)arg1 ;
-(void)timeOffsetPickerViewController:(id)arg1 didSelectOffset:(unsigned long long)arg2 ;
-(void)timeOffsetPickerViewControllerDidCancel:(id)arg1 ;
-(BOOL)showingPicker;
-(id)titleForIndexPath:(id)arg1 ;
-(void)presentOffsetPickerViewControllerForEvent:(unsigned long long)arg1 ;
-(void)updateTriggerTimeFromDate:(id)arg1 ;
-(void)updateTriggerCalendarDayFromDate:(id)arg1 ;
-(void)timePickerUpdated:(id)arg1 ;
-(void)updateCalendarDayIfNeeded;
-(void)updateCalendarFooterText;
-(id)calendarFooterText;
-(id)allDaysOfWeek;
-(id)currentDayOfMonth;
-(id)dateComponentsFromTriggerDays;
-(id)currentSunriseTime;
-(id)currentSunsetTime;
-(void)setShowingPicker:(BOOL)arg1 ;
@end

