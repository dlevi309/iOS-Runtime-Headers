/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKPolygonAnnotationRenderer : AKAnnotationRenderer
+(CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1 ;
+(CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1 ;
+(CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(CGRect)arg2 optionalText:(id)arg3 ;
+(CGRect)_concreteRectangleForAnnotation:(id)arg1 withTextBounds:(CGRect)arg2 ;
+(CGPathRef)_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(CGRect)arg2 ;
+(void)_concreteRenderAnnotation:(id)arg1 intoContext:(CGContextRef)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4 ;
+(BOOL)_concretePointIsOnBorder:(CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3 ;
+(BOOL)_concretePointIsOnInside:(CGPoint)arg1 ofAnnotation:(id)arg2 ;
+(CGPathRef)_newPathForAnnotation:(id)arg1 ;
@end

