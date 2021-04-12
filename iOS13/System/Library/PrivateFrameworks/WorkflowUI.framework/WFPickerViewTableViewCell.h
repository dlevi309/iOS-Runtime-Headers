/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIPickerView;

@interface WFPickerViewTableViewCell : UITableViewCell {

	UIPickerView* _pickerView;

}

@property (nonatomic,readonly) UIPickerView * pickerView;                                                   //@synthesize pickerView=_pickerView - In the implementation block
@property (assign,nonatomic,__weak) id<UIPickerViewDelegate><UIPickerViewDataSource> delegate; 
-(id<UIPickerViewDelegate><UIPickerViewDataSource>)delegate;
-(void)setDelegate:(id<UIPickerViewDelegate><UIPickerViewDataSource>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIPickerView *)pickerView;
@end

