/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewCell.h>

@class UITapGestureRecognizer, UIPickerTableView;

@interface UIPickerTableViewCell : UITableViewCell {

	UITapGestureRecognizer* _tap;
	UIPickerTableView* pickerTable;

}

@property (assign,nonatomic) UIPickerTableView * pickerTable; 
+(id)_centerCellFont;
+(id)_nonCenterCellFont;
-(void)_tapAction:(id)arg1 ;
-(void)_setIsCenterCell:(BOOL)arg1 shouldModifyAlphaOfView:(BOOL)arg2 ;
-(void)setPickerTable:(UIPickerTableView *)arg1 ;
-(UIPickerTableView *)pickerTable;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

