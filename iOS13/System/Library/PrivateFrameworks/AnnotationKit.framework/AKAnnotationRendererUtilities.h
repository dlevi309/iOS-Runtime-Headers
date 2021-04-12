/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKAnnotationRendererUtilities : NSObject
+(CGRect)outsetRectForShadow:(CGRect)arg1 onAnnotation:(id)arg2 ;
+(void)setStandardLineStateInContext:(CGContextRef)arg1 forLineWidth:(double)arg2 ;
+(void)setStandardLineDashInContext:(CGContextRef)arg1 forLineWidth:(double)arg2 ;
+(void)beginShadowInContext:(CGContextRef)arg1 forAnnotation:(id)arg2 ;
+(void)endShadowInContext:(CGContextRef)arg1 ;
+(CGPathRef)newStandardStrokedBorderPathWithPath:(CGPathRef)arg1 withStrokeWidth:(double)arg2 ;
+(CGPoint)_shadowDirectionForAnnotation:(id)arg1 ;
@end

