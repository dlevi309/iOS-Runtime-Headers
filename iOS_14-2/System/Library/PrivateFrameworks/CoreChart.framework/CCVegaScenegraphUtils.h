/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/


#import <CoreChart/CoreChart-Structs.h>
@interface CCVegaScenegraphUtils : NSObject
+(CGPathRef)newPathForRectangleMark:(id)arg1 offset:(double)arg2 ;
+(void)updateShapeLayer:(id)arg1 withMark:(id)arg2 delegate:(id)arg3 ;
+(id)createOrUpdateLayer:(id)arg1 path:(CGPathRef)arg2 gradient:(id)arg3 mode:(int)arg4 lineWidth:(double)arg5 delegate:(id)arg6 ;
+(void)updateShapeLayerFill:(id)arg1 withMark:(id)arg2 delegate:(id)arg3 ;
+(void)updateShapeLayerStroke:(id)arg1 withMark:(id)arg2 delegate:(id)arg3 ;
+(void)applyGradient:(id)arg1 toLayer:(id)arg2 delegate:(id)arg3 ;
+(id)createOrUpdateGradientLayer:(id)arg1 existingLayer:(id)arg2 delegate:(id)arg3 ;
+(id)createOrUpdateLayer:(id)arg1 path:(CGPathRef)arg2 withMark:(id)arg3 delegate:(id)arg4 ;
@end

