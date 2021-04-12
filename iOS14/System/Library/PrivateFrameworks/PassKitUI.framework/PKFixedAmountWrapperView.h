/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIView.h>

@class UITableView, UIPickerView;

@interface PKFixedAmountWrapperView : UIView {

	UITableView* _tableView;
	UIPickerView* _pickerView;

}

@property (nonatomic,retain) UITableView * tableView;                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIPickerView * pickerView;              //@synthesize pickerView=_pickerView - In the implementation block
-(UITableView *)tableView;
-(void)setPickerView:(UIPickerView *)arg1 ;
-(void)layoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(UIPickerView *)pickerView;
@end

