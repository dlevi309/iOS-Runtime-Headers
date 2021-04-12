/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <QuartzCore/CALayer.h>

@interface UIPDFHighlightLayer : CALayer {

	CGPathRef _clipPath;
	CGPathRef _borderPath;
	CGPoint offset;

}

@property (assign,nonatomic) CGPathRef clipPath; 
@property (assign,nonatomic) CGPathRef borderPath; 
@property (assign,nonatomic) CGPoint offset; 
-(CGPoint)offset;
-(void)setOffset:(CGPoint)arg1 ;
-(void)dealloc;
-(CGPathRef)clipPath;
-(void)setClipPath:(CGPathRef)arg1 ;
-(CGPathRef)borderPath;
-(void)setBorderPath:(CGPathRef)arg1 ;
@end

