/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeGroupBasedVisualization.h>

@interface CHStrokeGroupBaselineLegacyVisualization : CHStrokeGroupBasedVisualization
-(void)drawVisualizationInRect:(CGRect)arg1 context:(CGContextRef)arg2 viewBounds:(CGRect)arg3 ;
-(CGRect)dirtyRectForStrokeGroup:(id)arg1 ;
-(long long)layeringPriority;
-(CGRect)_labelBoundsForAnchorPoint:(CGPoint)arg1 ;
-(CGPathRef)_newBaselinePathForStrokeGroup:(id)arg1 outFirstPoint:(CGPoint*)arg2 strokeProvider:(id)arg3 ;
-(void)_getOrientedBounds:(CGRect*)arg1 length:(double*)arg2 forStroke:(id)arg3 atWritingDirectionIndex:(long long)arg4 inGroup:(id)arg5 ;
-(CGAffineTransform)_orientationTransformForStrokeBounds:(CGRect)arg1 atWritingDirectionIndex:(long long)arg2 inGroup:(id)arg3 ;
@end

