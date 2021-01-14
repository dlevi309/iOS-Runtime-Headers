/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)_gradientLayer;
-(UIView *)containerView;
-(void)setFrame:(CGRect)arg1 ;
-(void)setReflectionAlpha:(double)arg1 ;
-(void)setReflectionFraction:(double)arg1 ;
-(double)reflectionAlpha;
-(void)_updateGradientColors;
-(double)reflectionFraction;
@end

