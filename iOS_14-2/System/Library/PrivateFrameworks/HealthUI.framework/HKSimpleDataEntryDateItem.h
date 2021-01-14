/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)cell;
-(void)localeDidChange:(id)arg1 ;
-(void)beginEditing;
-(void)updateCellDisplay;
-(id)formattedKeyAndValue;
-(void)_setTextForInputTextField:(id)arg1 ;
-(id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 date:(id)arg3 defaultDate:(id)arg4 dateRange:(id)arg5 exportFormatter:(id)arg6 ;
-(void)datePickerValueChanged:(id)arg1 ;
@end

