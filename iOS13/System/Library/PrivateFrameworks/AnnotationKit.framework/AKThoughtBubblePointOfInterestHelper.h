/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKEightPointRectangularPointOfInterestHelper.h>

@interface AKThoughtBubblePointOfInterestHelper : AKEightPointRectangularPointOfInterestHelper
+(void)_concretePointsOfInterest:(id*)arg1 withVisualStyle:(id*)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4 ;
+(unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3 ;
+(CGPoint)_concreteValidatePoint:(CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4 ;
+(double)minOutset;
+(double)maxOutset;
+(CGPoint)_constrainPointyPointToOutset:(CGPoint)arg1 forAnnotation:(id)arg2 outsetIsMin:(BOOL)arg3 ;
@end

