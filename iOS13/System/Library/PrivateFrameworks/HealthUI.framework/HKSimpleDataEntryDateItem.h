/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKSimpleDataEntryItem.h>

@class HKSimpleDataEntryPlainTextCell, NSString, NSDate, HKValueRange, UIDatePicker, NSDateFormatter;

@interface HKSimpleDataEntryDateItem : HKSimpleDataEntryItem {

	HKSimpleDataEntryPlainTextCell* _cell;
	NSString* _title;
	NSString* _registrantModelKey;
	NSDate* _date;
	NSDate* _defaultDate;
	HKValueRange* _dateRange;
	UIDatePicker* _datePicker;
	NSDateFormatter* _exportFormatter;

}
+(id)_dateFormatter;
+(id)gregorianGMTCalendar;
-(void)beginEditing;
-(id)cell;
-(void)localeDidChange:(id)arg1 ;
-(void)datePickerValueChanged:(id)arg1 ;
-(id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 date:(id)arg3 defaultDate:(id)arg4 dateRange:(id)arg5 exportFormatter:(id)arg6 ;
-(id)formattedKeyAndValue;
-(void)updateCellDisplay;
-(void)_setTextForInputTextField:(id)arg1 ;
@end

