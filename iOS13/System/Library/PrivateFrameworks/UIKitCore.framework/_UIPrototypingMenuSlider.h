/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)increment;
-(double)stepSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(UIEdgeInsets)_thumbHitEdgeInsets;
-(void)setStepSize:(double)arg1 ;
-(CGPoint)knobCenter;
-(UIView *)knobView;
-(UIImageView *)knobBGView;
-(UILabel *)currentValueLabel;
-(void)_setKnobViewProminent:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setKnobView:(UIView *)arg1 ;
-(void)setKnobBGView:(UIImageView *)arg1 ;
-(void)setCurrentValueLabel:(UILabel *)arg1 ;
@end

