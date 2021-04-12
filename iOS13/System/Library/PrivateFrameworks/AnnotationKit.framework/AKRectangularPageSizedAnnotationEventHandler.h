/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKRectangularAnnotationEventHandler.h>

@interface AKRectangularPageSizedAnnotationEventHandler : AKRectangularAnnotationEventHandler
-(void)getInitialDraggedPoint:(CGPoint*)arg1 otherPoint:(CGPoint*)arg2 center:(CGPoint*)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5 ;
-(void)updateModelWithCurrentPoint:(CGPoint)arg1 ;
-(CGRect)_validateAnnotationRectForResize:(CGRect)arg1 ;
-(CGRect)_validateAnnotationRectForDrag:(CGRect)arg1 ;
@end

