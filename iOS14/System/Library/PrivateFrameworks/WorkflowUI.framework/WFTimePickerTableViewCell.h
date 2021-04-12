/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIDatePicker;

@interface WFTimePickerTableViewCell : UITableViewCell {

	UIDatePicker* _datePicker;

}

@property (nonatomic,readonly) UIDatePicker * datePicker;              //@synthesize datePicker=_datePicker - In the implementation block
-(void)prepareForReuse;
-(UIDatePicker *)datePicker;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

