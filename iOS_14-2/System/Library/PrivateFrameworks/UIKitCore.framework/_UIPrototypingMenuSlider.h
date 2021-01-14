/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UISlider.h>

@class UIView, UIImageView, UILabel;

@interface _UIPrototypingMenuSlider : UISlider {

	BOOL _didBringKnobToFront;
	double _stepSize;
	UIView* _knobView;
	UIImageView* _knobBGView;
	UILabel* _currentValueLabel;

}

@property (nonatomic,retain) UIView * knobView;                        //@synthesize knobView=_knobView - In the implementation block
@property (nonatomic,retain) UIImageView * knobBGView;                 //@synthesize knobBGView=_knobBGView - In the implementation block
@property (nonatomic,retain) UILabel * currentValueLabel;              //@synthesize currentValueLabel=_currentValueLabel - In the implementation block
@property (assign,nonatomic) double stepSize;                          //@synthesize stepSize=_stepSize - In the implementation block
@property (nonatomic,readonly) CGPoint knobCenter; 
-(void)decrement;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(double)stepSize;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(UIView *)knobView;
-(void)setKnobView:(UIView *)arg1 ;
-(CGPoint)knobCenter;
-(UIImageView *)knobBGView;
-(UIEdgeInsets)_thumbHitEdgeInsets;
-(void)setStepSize:(double)arg1 ;
-(void)increment;
-(void)setKnobBGView:(UIImageView *)arg1 ;
-(UILabel *)currentValueLabel;
-(void)_setKnobViewProminent:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setCurrentValueLabel:(UILabel *)arg1 ;
@end

