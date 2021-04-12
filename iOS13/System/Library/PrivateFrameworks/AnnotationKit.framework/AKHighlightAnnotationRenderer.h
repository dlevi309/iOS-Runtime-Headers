/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKHighlightAnnotationRenderer : AKAnnotationRenderer
+(CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1 ;
+(CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1 ;
+(void)_concreteRenderAnnotation:(id)arg1 intoContext:(CGContextRef)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4 ;
+(BOOL)_concretePointIsOnBorder:(CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3 ;
+(BOOL)_concretePointIsOnInside:(CGPoint)arg1 ofAnnotation:(id)arg2 ;
+(void)_enumerateQuadPathsOfAnnotation:(id)arg1 applyStyle:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
+(CGRect)_rectForQuad:(AKQuadrilateral)arg1 rotationAngle:(double*)arg2 ;
+(double)_highlightOutsetFactor;
@end

