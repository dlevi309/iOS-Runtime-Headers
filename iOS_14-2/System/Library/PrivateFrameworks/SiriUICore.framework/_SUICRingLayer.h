/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@class UIColor;

@interface _SUICRingLayer : CAShapeLayer {

	double _customLineWidth;

}

@property (nonatomic,copy) UIColor * ringColor; 
@property (assign,nonatomic) double customLineWidth;              //@synthesize customLineWidth=_customLineWidth - In the implementation block
-(id)init;
-(UIColor *)ringColor;
-(void)setRingColor:(UIColor *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCustomLineWidth:(double)arg1 ;
-(double)customLineWidth;
@end

