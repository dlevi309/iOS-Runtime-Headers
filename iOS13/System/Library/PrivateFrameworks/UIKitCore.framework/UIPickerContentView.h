/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView;

@interface UIPickerContentView : UIView {

	UILabel* _titleLabel;
	UIImageView* _checkView;
	SCD_Struct_UI31 _pickerContentViewFlags;

}

@property (assign,getter=isChecked,nonatomic) BOOL checked; 
@property (nonatomic,readonly) UILabel * titleLabel; 
+(double)_checkmarkOffset;
-(BOOL)_isSelectable;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(double)labelWidthForBounds:(CGRect)arg1 ;
-(id)checkedColor;
-(BOOL)isChecked;
@end

