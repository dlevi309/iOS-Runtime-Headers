/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKRectangularAnnotationEventHandler.h>

@interface AKRectangularPageSizedAnnotationEventHandler : AKRectangularAnnotationEventHandler
-(void)getInitialDraggedPoint:(CGPoint*)arg1 otherPoint:(CGPoint*)arg2 center:(CGPoint*)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5 ;
-(void)updateModelWithCurrentPoint:(CGPoint)arg1 options:(unsigned long long)arg2 ;
-(CGRect)_validateAnnotationRectForResize:(CGRect)arg1 ;
-(CGRect)_validateAnnotationRectForDrag:(CGRect)arg1 ;
@end

