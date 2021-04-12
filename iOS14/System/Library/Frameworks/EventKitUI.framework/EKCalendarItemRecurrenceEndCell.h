/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDate:(NSDate *)arg1 ;
-(UIDatePicker *)datePicker;
-(void)layoutSubviews;
-(UIButton *)neverButton;
-(void)viewDidMoveToSuperview;
-(NSDate *)date;
@end

