/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UITableViewController.h>

@class STDeviceBedtime, NSDateFormatter;

@interface STIntroDowntimeTableViewController : UITableViewController {

	STDeviceBedtime* _bedtime;
	long long _datePickerVisibility;
	NSDateFormatter* _downtimeFormatter;

}

@property (assign) long long datePickerVisibility;                     //@synthesize datePickerVisibility=_datePickerVisibility - In the implementation block
@property (readonly) NSDateFormatter * downtimeFormatter;              //@synthesize downtimeFormatter=_downtimeFormatter - In the implementation block
@property (readonly) STDeviceBedtime * bedtime;                        //@synthesize bedtime=_bedtime - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_datePickerChanged:(id)arg1 ;
-(STDeviceBedtime *)bedtime;
-(void)_stIntroDowntimeTableViewControllerCommonInit;
-(long long)datePickerVisibility;
-(long long)_tableRowForStartLabelRow;
-(NSDateFormatter *)downtimeFormatter;
-(long long)_tableRowForEndLabelRow;
-(long long)_tableRowForDatePicker;
-(void)setDatePickerVisibility:(long long)arg1 ;
@end

