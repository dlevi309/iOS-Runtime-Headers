/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDSmartStroke.h>

@interface TSDCalligraphyStroke : TSDSmartStroke
+(id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3 ;
+(Class)mutableClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)scale;
-(double)angle;
-(void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContextRef)arg5 useFastDrawing:(BOOL)arg6 ;
-(BOOL)chisel;
-(id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6 ;
-(void)applyToContext:(CGContextRef)arg1 insideStroke:(BOOL)arg2 ;
-(void)paintPath:(CGPathRef)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(CGContextRef)arg3 useFastDrawing:(BOOL)arg4 ;
-(BOOL)canApplyToCAShapeLayer;
-(BOOL)drawsOutsideStrokeBounds;
-(CGRect)boundsForPath:(id)arg1 ;
-(CGRect)boundsForLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(CGAffineTransform)arg5 ;
-(BOOL)prefersToApplyToCAShapeLayerDuringManipulation;
-(BOOL)drawsInOneStep;
-(id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 cap:(int)arg4 join:(int)arg5 pattern:(id)arg6 miterLimit:(double)arg7 ;
-(CGAffineTransform)transformInContext:(CGContextRef)arg1 ;
@end

