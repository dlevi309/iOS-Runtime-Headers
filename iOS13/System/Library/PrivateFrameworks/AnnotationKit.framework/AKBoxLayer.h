/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@interface AKBoxLayer : CAShapeLayer {

	double _borderWidthScale;
	double _boxCornerRadius;
	double _nominalBorderWidth;

}

@property (assign) double boxCornerRadius;                         //@synthesize boxCornerRadius=_boxCornerRadius - In the implementation block
@property (assign) double nominalBorderWidth;                      //@synthesize nominalBorderWidth=_nominalBorderWidth - In the implementation block
@property (assign,nonatomic) double borderWidthScale; 
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithBorderWidth:(double)arg1 cornerRadius:(double)arg2 ;
-(void)setBorderWidthScale:(double)arg1 ;
-(void)_updateBoxPath;
-(double)nominalBorderWidth;
-(double)borderWidthScale;
-(double)boxCornerRadius;
-(void)setBoxCornerRadius:(double)arg1 ;
-(void)setNominalBorderWidth:(double)arg1 ;
@end

