/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIColor;

@interface _SLSheetMaskLayer : CALayer {

	double _clipCornerRadius;
	UIColor* _clipBackgroundColor;

}

@property (assign,nonatomic) double clipCornerRadius;                    //@synthesize clipCornerRadius=_clipCornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * clipBackgroundColor;              //@synthesize clipBackgroundColor=_clipBackgroundColor - In the implementation block
-(void)drawInContext:(CGContextRef)arg1 ;
-(double)clipCornerRadius;
-(UIColor *)clipBackgroundColor;
-(void)setClipCornerRadius:(double)arg1 ;
-(void)setClipBackgroundColor:(UIColor *)arg1 ;
@end

