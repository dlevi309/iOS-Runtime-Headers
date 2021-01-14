/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotationEventHandler.h>

@interface AKArrowAnnotationEventHandler : AKAnnotationEventHandler
-(void)getInitialDraggedPoint:(CGPoint*)arg1 otherPoint:(CGPoint*)arg2 center:(CGPoint*)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5 ;
-(void)updateModelWithCurrentPoint:(CGPoint)arg1 options:(unsigned long long)arg2 ;
-(CGPoint)_updatedMidPointForAnnotation:(id)arg1 withNewStartPt:(CGPoint)arg2 andNewEndPt:(CGPoint)arg3 ;
-(void)setupDraggingConstraints;
@end

