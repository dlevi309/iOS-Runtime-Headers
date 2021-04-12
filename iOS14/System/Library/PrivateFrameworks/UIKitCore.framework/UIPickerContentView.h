/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView;

@interface UIPickerContentView : UIView {

	UILabel* _titleLabel;
	UIImageView* _checkView;
	SCD_Struct_UI36 _pickerContentViewFlags;

}

@property (assign,getter=isChecked,nonatomic) BOOL checked; 
@property (nonatomic,readonly) UILabel * titleLabel; 
+(double)_checkmarkOffset;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(double)labelWidthForBounds:(CGRect)arg1 ;
-(BOOL)isHighlighted;
-(id)checkedColor;
-(BOOL)_isSelectable;
-(void)setHighlighted:(BOOL)arg1 ;
@end

