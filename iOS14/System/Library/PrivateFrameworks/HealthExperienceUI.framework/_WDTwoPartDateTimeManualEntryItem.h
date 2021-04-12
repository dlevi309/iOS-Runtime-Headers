/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/WDAddDataManualEntryItem.h>

@class UIDatePicker, WDManualDataEntryTableViewCell, NSDateFormatter, NSDate;

@interface _WDTwoPartDateTimeManualEntryItem : WDAddDataManualEntryItem {

	UIDatePicker* _datePicker;
	UIDatePicker* _timePicker;
	WDManualDataEntryTableViewCell* _dateTableViewCell;
	WDManualDataEntryTableViewCell* _timeTableViewCell;
	NSDateFormatter* _dateFormatter;
	NSDateFormatter* _timeFormatter;
	NSDate* _maximumDate;
	NSDate* _chosenDate;

}
-(void)setValue:(id)arg1 ;
-(id)generateValue;
-(id)tableViewCells;
-(id)initWithMaximumDate:(id)arg1 ;
-(void)_datePickerDidChange:(id)arg1 ;
-(void)_saveDisambiguatedDate:(id)arg1 ;
-(void)_generateValue:(/*^block*/id)arg1 ;
-(void)_setupTableViewCells;
-(void)_timePickerDidChange:(id)arg1 ;
-(void)_updateCellLabels;
-(void)beginEditing;
@end

