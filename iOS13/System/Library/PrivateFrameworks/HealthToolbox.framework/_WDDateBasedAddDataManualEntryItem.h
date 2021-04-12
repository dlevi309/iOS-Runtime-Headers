/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDAddDataManualEntryItem.h>

@class UIDatePicker, WDManualDataEntryTableViewCell, NSDate, NSDateFormatter;

@interface _WDDateBasedAddDataManualEntryItem : WDAddDataManualEntryItem {

	UIDatePicker* _datePicker;
	WDManualDataEntryTableViewCell* _tableViewCell;
	NSDate* _maximumDate;
	NSDate* _chosenDate;
	BOOL _highlightWhenEditing;
	NSDateFormatter* _dateFormatter;
	long long _datePickerMode;

}

@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (assign,nonatomic) long long datePickerMode;                     //@synthesize datePickerMode=_datePickerMode - In the implementation block
-(void)beginEditing;
-(void)setValue:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)setDatePickerMode:(long long)arg1 ;
-(long long)datePickerMode;
-(id)generateValue;
-(id)initWithMaximumDate:(id)arg1 highlightWhenEditing:(BOOL)arg2 ;
-(id)tableViewCells;
-(void)_datePickerDidChange:(id)arg1 ;
-(void)_saveDisambiguatedDate:(id)arg1 ;
-(void)_generateValue:(/*^block*/id)arg1 ;
@end

