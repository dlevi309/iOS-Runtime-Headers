/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

