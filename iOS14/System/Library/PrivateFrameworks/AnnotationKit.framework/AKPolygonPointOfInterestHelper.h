/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKEightPointRectangularPointOfInterestHelper.h>

@interface AKPolygonPointOfInterestHelper : AKEightPointRectangularPointOfInterestHelper
+(void)_concretePointsOfInterest:(id*)arg1 withVisualStyle:(id*)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4 ;
+(unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3 ;
+(unsigned long long)maxPolygonPoints;
+(unsigned long long)minPolygonPoints;
+(CGPoint)_concreteValidatePoint:(CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4 ;
+(double)pointsControlPointDistanceFactor;
+(unsigned long long)numberOfPolygonPointsForControlPoint:(CGPoint)arg1 inAnnotation:(id)arg2 onPageController:(id)arg3 ;
+(CGPoint)_pointForPointsControlOfPolygonWithNumberOfPoints:(unsigned long long)arg1 inAnnotation:(id)arg2 onPageController:(id)arg3 ;
+(double)_degreesBetweenPointsForPointsControl;
+(double)_degreesForPointsControlGivenPolygonWithNumberOfPoints:(unsigned long long)arg1 ;
@end

