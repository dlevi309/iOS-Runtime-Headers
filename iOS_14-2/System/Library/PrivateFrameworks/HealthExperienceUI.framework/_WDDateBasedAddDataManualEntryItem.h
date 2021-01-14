/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
*/

#import <HealthExperienceUI/WDAddDataManualEntryItem.h>

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
-(void)setTitle:(id)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(void)setValue:(id)arg1 ;
-(void)setDatePickerMode:(long long)arg1 ;
-(id)generateValue;
-(long long)datePickerMode;
-(id)tableViewCells;
-(id)initWithMaximumDate:(id)arg1 highlightWhenEditing:(BOOL)arg2 ;
-(void)_datePickerDidChange:(id)arg1 ;
-(void)_saveDisambiguatedDate:(id)arg1 ;
-(void)_generateValue:(/*^block*/id)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)beginEditing;
@end

