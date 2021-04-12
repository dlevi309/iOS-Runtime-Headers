/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKThoughtBubbleAnnotationRenderer : AKAnnotationRenderer
+(CGPathRef)_newCloudPathScaledToModelSpaceForAnnotation:(id)arg1 ;
+(CGPathRef)_newLargestBubblePathScaledToModelSpaceForAnnotation:(id)arg1 ;
+(CGPathRef)_newSmallestBubblePathScaledToModelSpaceForAnnotation:(id)arg1 ;
+(void)_fillAndStrokePath:(CGPathRef)arg1 forAnnotation:(id)arg2 inContext:(CGContextRef)arg3 ;
+(CGPoint)_unitCloudCenter;
+(double)_unitCloudRadius;
+(CGPoint)_unitAnnotationPointyPointForAnnotation:(id)arg1 ;
+(CGPoint)_templatePointyPointToCircleIntersect;
+(CGPathRef)_newSmallBubblePathForAnnotation:(id)arg1 atCenter:(CGPoint)arg2 withSize:(CGSize)arg3 ;
+(double)_templateToUnitPointyPointScaleForAnnotation:(id)arg1 ;
+(CGPathRef)_newPathTransformedFromUnitToModelSpace:(CGPathRef)arg1 forAnnotation:(id)arg2 ;
+(CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1 ;
+(CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1 ;
+(CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(CGRect)arg2 optionalText:(id)arg3 ;
+(CGRect)_concreteRectangleForAnnotation:(id)arg1 withTextBounds:(CGRect)arg2 ;
+(CGPathRef)_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(CGRect)arg2 ;
+(void)_concreteRenderAnnotation:(id)arg1 intoContext:(CGContextRef)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4 ;
+(BOOL)_concretePointIsOnBorder:(CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3 ;
+(BOOL)_concretePointIsOnInside:(CGPoint)arg1 ofAnnotation:(id)arg2 ;
@end

