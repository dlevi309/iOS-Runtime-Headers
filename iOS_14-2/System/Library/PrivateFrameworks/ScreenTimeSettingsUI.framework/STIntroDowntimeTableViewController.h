/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(STDeviceBedtime *)bedtime;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_datePickerChanged:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_stIntroDowntimeTableViewControllerCommonInit;
-(long long)datePickerVisibility;
-(long long)_tableRowForStartLabelRow;
-(NSDateFormatter *)downtimeFormatter;
-(long long)_tableRowForEndLabelRow;
-(long long)_tableRowForDatePicker;
-(void)setDatePickerVisibility:(long long)arg1 ;
@end

