/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTimeSettingsUI.framework/SchoolTimeSettingsUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol SCLTimePickerTableViewCellDelegate;
@class NSDateFormatter, NSDateIntervalFormatter, UIDatePicker, NSDateInterval, NSCalendar, NSDate;

@interface SCLTimePickerTableViewCell : UITableViewCell {

	unsigned long long _constraintMode;
	NSDateFormatter* _dateFormatter;
	NSDateIntervalFormatter* _intervalFormatter;
	UIDatePicker* _datePicker;
	NSDateInterval* _constraintInterval;
	id<SCLTimePickerTableViewCellDelegate> _delegate;

}

@property (readonly) UIDatePicker * datePicker;                                                   //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,copy) NSDateInterval * constraintInterval;                                   //@synthesize constraintInterval=_constraintInterval - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar; 
@property (nonatomic,copy) NSDate * selectedDate; 
@property (assign,nonatomic,__weak) id<SCLTimePickerTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setCalendar:(NSCalendar *)arg1 ;
-(id<SCLTimePickerTableViewCellDelegate>)delegate;
-(NSCalendar *)calendar;
-(NSDate *)selectedDate;
-(void)setDelegate:(id<SCLTimePickerTableViewCellDelegate>)arg1 ;
-(UIDatePicker *)datePicker;
-(void)setSelectedDate:(NSDate *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSDateInterval *)constraintInterval;
-(void)setConstraintInterval:(NSDateInterval *)arg1 ;
-(void)datePickerDidChangeDate:(id)arg1 ;
-(void)_updateConstraintModeWithInterval:(id)arg1 selectedDate:(id)arg2 ;
@end

