/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFTriggerConfigurationViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/WFLocationPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/WFTimeRangePickerViewControllerDelegate.h>

@class UITableView, NSArray, NSDateFormatter, NSString;

@interface WFLocationTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFLocationPickerViewControllerDelegate, WFTimeRangePickerViewControllerDelegate> {

	BOOL _isLocationBasedAlertsEnabled;
	BOOL _isArrive;
	UITableView* _tableView;
	NSArray* _sections;
	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,retain) UITableView * tableView;                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSArray * sections;                           //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL isLocationBasedAlertsEnabled;              //@synthesize isLocationBasedAlertsEnabled=_isLocationBasedAlertsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isArrive;                                //@synthesize isArrive=_isArrive - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                //@synthesize dateFormatter=_dateFormatter - In the implementation block
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
-(NSDateFormatter *)dateFormatter;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)checkLocationAuthorization;
-(void)locationPicker:(id)arg1 didFinishWithValue:(id)arg2 ;
-(void)locationPickerDidCancel:(id)arg1 ;
-(id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3 ;
-(id)infoForSection:(long long)arg1 ;
-(void)timeRangePickerViewController:(id)arg1 didPickStartTime:(id)arg2 endTime:(id)arg3 ;
-(void)timeRangePickerViewControllerDidCancel:(id)arg1 ;
-(id)textForSummaryFooterView;
-(void)presentNavigationControllerWithRootViewController:(id)arg1 ;
-(BOOL)isLocationBasedAlertsEnabled;
-(void)setIsLocationBasedAlertsEnabled:(BOOL)arg1 ;
-(BOOL)isArrive;
@end

