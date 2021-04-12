/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKCropAnnotationRenderer : AKAnnotationRenderer
+(CGPathRef)cropHandle:(long long)arg1 forAnnotation:(id)arg2 withPageController:(id)arg3 ;
+(CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1 ;
+(CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1 ;
+(void)_concreteRenderAnnotation:(id)arg1 intoContext:(CGContextRef)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4 ;
+(BOOL)_concretePointIsOnBorder:(CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3 ;
+(BOOL)_concretePointIsOnInside:(CGPoint)arg1 ofAnnotation:(id)arg2 ;
+(void)_pixelAlignedBaseRect:(CGRect*)arg1 interiorRect:(CGRect*)arg2 scaleFactor:(double*)arg3 forAnnotation:(id)arg4 withPageController:(id)arg5 ;
+(CGPathRef)_newClipMaskEOPathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)_newRectanglePathForAnnotation:(id)arg1 withPageController:(id)arg2 outLineWidth:(double*)arg3 ;
+(CGPathRef)newLeftEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newRightEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newBottomEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newTopEdgePathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newTopLeftCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newTopRightCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newBottomLeftCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
+(CGPathRef)newBottomRightCornerPathForAnnotation:(id)arg1 withPageController:(id)arg2 ;
@end

