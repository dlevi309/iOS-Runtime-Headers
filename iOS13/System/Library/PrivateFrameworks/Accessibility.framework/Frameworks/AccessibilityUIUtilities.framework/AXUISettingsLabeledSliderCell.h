/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
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
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)initialValue;
-(void)setLeftView:(UIView *)arg1 ;
-(UIView *)rightView;
-(UIView *)leftView;
-(void)setRightView:(UIView *)arg1 ;
-(double)minimumValue;
-(double)maximumValue;
-(id)slider;
-(void)setLabelText:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setSegmented:(BOOL)arg1 ;
-(UILabel *)rightLabel;
-(void)handleSliderBeingDragged:(id)arg1 ;
-(void)handleSliderDidFinishDrag:(id)arg1 ;
-(void)setSliderView:(UISlider *)arg1 ;
-(void)setRightLabel:(UILabel *)arg1 ;
-(void)_updateRightLabelFont;
-(id)labelTextColor;
-(UISlider *)sliderView;
-(BOOL)segmented;
@end

