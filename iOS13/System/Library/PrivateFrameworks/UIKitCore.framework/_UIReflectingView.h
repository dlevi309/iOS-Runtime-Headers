/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _UIReflectingView : UIView {

	UIView* _containerView;
	UIView* _gradientView;
	double _reflectionAlpha;

}

@property (nonatomic,retain,readonly) UIView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) double reflectionFraction; 
@property (assign,nonatomic) double reflectionAlpha; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)containerView;
-(void)layoutSubviews;
-(id)_gradientLayer;
-(void)setReflectionAlpha:(double)arg1 ;
-(void)setReflectionFraction:(double)arg1 ;
-(double)reflectionAlpha;
-(void)_updateGradientColors;
-(double)reflectionFraction;
@end

