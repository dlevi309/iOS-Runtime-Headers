/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKRectangularAnnotationEventHandler.h>

@interface AKInkAnnotationEventHandler : AKRectangularAnnotationEventHandler
+(BOOL)allowsDraggingOfAnnotation:(id)arg1 ;
-(CGSize)naturalSizeForAnnotation;
-(BOOL)handleDownEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(BOOL)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(BOOL)alwaysLockAspectRatio;
@end

