/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenterUI.framework/BatteryCenterUI
*/

#import <BatteryCenterUI/BatteryCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface BCUIRingCapShadow : UIView {

	UIImageView* _shadowCapImageView;
	double _lineWidth;
	double _arcFraction;
	CGRect _ringBounds;

}

@property (nonatomic,readonly) CGRect ringBounds;              //@synthesize ringBounds=_ringBounds - In the implementation block
@property (nonatomic,readonly) double lineWidth;               //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double arcFraction;               //@synthesize arcFraction=_arcFraction - In the implementation block
+(id)ringCapShadowForRingWithBounds:(CGRect)arg1 lineWidth:(double)arg2 ;
+(id)_ringCapShadowImageWithRingBounds:(CGRect)arg1 lineWidth:(double)arg2 scale:(double)arg3 ;
-(double)lineWidth;
-(void)layoutSubviews;
-(void)setArcFraction:(double)arg1 ;
-(CGRect)ringBounds;
-(id)_initWithRingBounds:(CGRect)arg1 lineWidth:(double)arg2 ;
-(CGRect)_shadowCapFrame;
-(double)arcFraction;
@end

