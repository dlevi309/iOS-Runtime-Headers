/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDPathPainter <NSObject>
@optional
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 forImage:(CGImageRef)arg3 swatchRect:(CGRect)arg4 wantsStroke:(BOOL)arg5;

@required
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2;

@end

