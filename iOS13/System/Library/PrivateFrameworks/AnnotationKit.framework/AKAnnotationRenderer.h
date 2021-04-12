/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKAnnotationRenderer : NSObject
+(CGSize)draggingBoundsInsetsForAnnotation:(id)arg1 ;
+(CGRect)textBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(CGRect)arg2 optionalText:(id)arg3 ;
+(BOOL)pointIsOnInside:(CGPoint)arg1 ofAnnotation:(id)arg2 ;
+(void)_transformContextToModelCoordinates:(CGContextRef)arg1 forAnnotation:(id)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4 ;
+(CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1 ;
+(CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1 ;
+(CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(CGRect)arg2 optionalText:(id)arg3 ;
+(CGRect)_concreteRectangleForAnnotation:(id)arg1 withTextBounds:(CGRect)arg2 ;
+(CGPathRef)_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(CGRect)arg2 ;
+(void)_concreteRenderAnnotation:(id)arg1 intoContext:(CGContextRef)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4 ;
+(BOOL)_concretePointIsOnBorder:(CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3 ;
+(BOOL)_concretePointIsOnInside:(CGPoint)arg1 ofAnnotation:(id)arg2 ;
+(CGPathRef)newTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(CGRect)arg2 ;
+(CGRect)rectangleForAnnotation:(id)arg1 withTextBounds:(CGRect)arg2 ;
+(void)renderAnnotation:(id)arg1 intoContext:(CGContextRef)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4 ;
+(BOOL)annotationShouldAvoidRedrawDuringLiveResize:(id)arg1 ;
+(CGRect)drawingBoundsOfAnnotation:(id)arg1 ;
+(BOOL)pointIsOnBorder:(CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3 ;
+(Class)_rendererClassForAnnotation:(id)arg1 ;
+(void)_testRenderAnnotation:(id)arg1 intoContext:(CGContextRef)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4 ;
@end

