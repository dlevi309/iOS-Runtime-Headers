/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(CGPathRef)clipPath;
-(void)setClipPath:(CGPathRef)arg1 ;
-(CGPathRef)borderPath;
-(void)setBorderPath:(CGPathRef)arg1 ;
@end

