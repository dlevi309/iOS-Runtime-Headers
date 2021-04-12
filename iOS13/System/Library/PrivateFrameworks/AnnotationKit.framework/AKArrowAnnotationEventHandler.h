/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotationEventHandler.h>

@interface AKArrowAnnotationEventHandler : AKAnnotationEventHandler
-(void)getInitialDraggedPoint:(CGPoint*)arg1 otherPoint:(CGPoint*)arg2 center:(CGPoint*)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5 ;
-(void)updateModelWithCurrentPoint:(CGPoint)arg1 ;
-(CGPoint)_updatedMidPointForAnnotation:(id)arg1 withNewStartPt:(CGPoint)arg2 andNewEndPt:(CGPoint)arg3 ;
-(void)setupDraggingConstraints;
@end

