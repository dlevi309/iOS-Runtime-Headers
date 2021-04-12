/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDAddDataManualEntryItem.h>

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
-(void)beginEditing;
-(void)setValue:(id)arg1 ;
-(id)generateValue;
-(id)initWithMaximumDate:(id)arg1 ;
-(id)tableViewCells;
-(void)_datePickerDidChange:(id)arg1 ;
-(void)_saveDisambiguatedDate:(id)arg1 ;
-(void)_generateValue:(/*^block*/id)arg1 ;
-(void)_setupTableViewCells;
-(void)_timePickerDidChange:(id)arg1 ;
-(void)_updateCellLabels;
@end

