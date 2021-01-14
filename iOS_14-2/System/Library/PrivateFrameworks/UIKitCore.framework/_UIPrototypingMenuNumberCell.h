/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIPrototypingMenuCell.h>

@class UIStackView, UILabel, _UIPrototypingMenuSlider, UITapGestureRecognizer;

@interface _UIPrototypingMenuNumberCell : _UIPrototypingMenuCell {

	double _min;
	double _max;
	double _current;
	UIStackView* _floatValueStackView;
	UILabel* _minLabel;
	UILabel* _maxLabel;
	_UIPrototypingMenuSlider* _slider;
	UITapGestureRecognizer* _tapRecognizer;

}

@property (nonatomic,retain) UIStackView * floatValueStackView;                   //@synthesize floatValueStackView=_floatValueStackView - In the implementation block
@property (nonatomic,retain) UILabel * minLabel;                                  //@synthesize minLabel=_minLabel - In the implementation block
@property (nonatomic,retain) UILabel * maxLabel;                                  //@synthesize maxLabel=_maxLabel - In the implementation block
@property (nonatomic,retain) _UIPrototypingMenuSlider * slider;                   //@synthesize slider=_slider - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;              //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (assign,nonatomic) double min;                                          //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) double max;                                          //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) double current;                                      //@synthesize current=_current - In the implementation block
-(_UIPrototypingMenuSlider *)slider;
-(void)setMin:(double)arg1 ;
-(double)min;
-(UILabel *)minLabel;
-(UILabel *)maxLabel;
-(double)current;
-(void)setSlider:(_UIPrototypingMenuSlider *)arg1 ;
-(double)max;
-(void)setMax:(double)arg1 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(void)setCurrent:(double)arg1 ;
-(void)_prototypingSettingDidChange;
-(void)_sliderDidChangeValue:(id)arg1 ;
-(void)_tapRecognizerDidRecognizer:(id)arg1 ;
-(UIStackView *)floatValueStackView;
-(void)setFloatValueStackView:(UIStackView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setMinLabel:(UILabel *)arg1 ;
-(void)setMaxLabel:(UILabel *)arg1 ;
@end

