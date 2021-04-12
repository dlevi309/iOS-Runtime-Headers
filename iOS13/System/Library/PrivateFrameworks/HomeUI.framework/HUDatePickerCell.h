/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol HUDatePickerCellDelegate;
@class UIDatePicker, NSDateComponents;

@interface HUDatePickerCell : UITableViewCell {

	id<HUDatePickerCellDelegate> _delegate;
	UIDatePicker* _datePicker;

}

@property (nonatomic,retain) UIDatePicker * datePicker;                                 //@synthesize datePicker=_datePicker - In the implementation block
@property (assign,nonatomic,__weak) id<HUDatePickerCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDateComponents * timeComponents; 
-(id<HUDatePickerCellDelegate>)delegate;
-(void)setDelegate:(id<HUDatePickerCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(UIDatePicker *)datePicker;
-(void)_valueChanged:(id)arg1 ;
-(void)setTimeComponents:(NSDateComponents *)arg1 ;
-(NSDateComponents *)timeComponents;
@end

