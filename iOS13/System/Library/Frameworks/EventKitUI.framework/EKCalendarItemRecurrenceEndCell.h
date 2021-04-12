/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIButton, UIDatePicker, NSDate;

@interface EKCalendarItemRecurrenceEndCell : UITableViewCell {

	UIButton* _neverButton;
	UIDatePicker* _datePicker;

}

@property (nonatomic,readonly) UIButton * neverButton;                 //@synthesize neverButton=_neverButton - In the implementation block
@property (nonatomic,readonly) UIDatePicker * datePicker;              //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,retain) NSDate * date; 
-(id)init;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)layoutSubviews;
-(UIDatePicker *)datePicker;
-(UIButton *)neverButton;
@end

