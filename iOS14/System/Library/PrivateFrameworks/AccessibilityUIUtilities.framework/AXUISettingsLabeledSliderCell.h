/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <Preferences/PSTableCell.h>

@class UIView, UISlider, UILabel;

@interface AXUISettingsLabeledSliderCell : PSTableCell {

	BOOL _segmented;
	UIView* _leftView;
	UISlider* _sliderView;
	UIView* _rightView;
	UILabel* _rightLabel;

}

@property (nonatomic,retain) UIView * leftView;                  //@synthesize leftView=_leftView - In the implementation block
@property (nonatomic,retain) UISlider * sliderView;              //@synthesize sliderView=_sliderView - In the implementation block
@property (nonatomic,retain) UIView * rightView;                 //@synthesize rightView=_rightView - In the implementation block
@property (nonatomic,retain) UILabel * rightLabel;               //@synthesize rightLabel=_rightLabel - In the implementation block
@property (assign,nonatomic) BOOL segmented;                     //@synthesize segmented=_segmented - In the implementation block
-(id)accessibilityLabel;
-(double)maximumValue;
-(id)slider;
-(void)setSliderView:(UISlider *)arg1 ;
-(double)initialValue;
-(BOOL)isAccessibilityElement;
-(UIView *)leftView;
-(id)labelTextColor;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)rightView;
-(unsigned long long)accessibilityTraits;
-(UISlider *)sliderView;
-(id)accessibilityValue;
-(BOOL)segmented;
-(void)setLeftView:(UIView *)arg1 ;
-(void)setLabelText:(id)arg1 ;
-(void)setRightLabel:(UILabel *)arg1 ;
-(void)_updateRightLabelFont;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)handleSliderBeingDragged:(id)arg1 ;
-(void)handleSliderDidFinishDrag:(id)arg1 ;
-(void)setRightView:(UIView *)arg1 ;
-(double)minimumValue;
-(void)setSegmented:(BOOL)arg1 ;
-(UILabel *)rightLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

