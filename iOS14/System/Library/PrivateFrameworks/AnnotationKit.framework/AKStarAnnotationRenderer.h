/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKPolygonAnnotationRenderer.h>

@interface AKStarAnnotationRenderer : AKPolygonAnnotationRenderer
+(CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1 ;
+(CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(CGRect)arg2 optionalText:(id)arg3 ;
+(CGRect)_concreteRectangleForAnnotation:(id)arg1 withTextBounds:(CGRect)arg2 ;
+(void)_concreteRenderAnnotation:(id)arg1 intoContext:(CGContextRef)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4 ;
+(BOOL)_concretePointIsOnBorder:(CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3 ;
+(BOOL)_concretePointIsOnInside:(CGPoint)arg1 ofAnnotation:(id)arg2 ;
+(id)innerStarPoints:(id)arg1 ;
+(double)innerRadiusFactorForPoint:(CGPoint)arg1 inAnnotation:(id)arg2 onPageController:(id)arg3 ;
+(CGPathRef)_newPathForAnnotation:(id)arg1 ;
+(double)defaultInnerRadiusForStar:(id)arg1 ;
+(id)_innerStarPoints:(id)arg1 withInnerRadiusFactor:(double)arg2 ;
+(id)starPoints:(id)arg1 ;
+(double)_segLengthOfStarWithPoints:(id)arg1 ;
@end

