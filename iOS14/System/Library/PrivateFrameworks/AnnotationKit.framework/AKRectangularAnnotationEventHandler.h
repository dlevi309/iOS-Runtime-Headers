/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotationEventHandler.h>

@interface AKRectangularAnnotationEventHandler : AKAnnotationEventHandler {

	CGPoint _lastMungedPositionInModel;

}

@property (assign) CGPoint lastMungedPositionInModel;              //@synthesize lastMungedPositionInModel=_lastMungedPositionInModel - In the implementation block
-(void)getInitialDraggedPoint:(CGPoint*)arg1 otherPoint:(CGPoint*)arg2 center:(CGPoint*)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5 ;
-(void)updateModelWithCurrentPoint:(CGPoint)arg1 options:(unsigned long long)arg2 ;
-(void)setupDraggingConstraints;
-(void)setLastMungedPositionInModel:(CGPoint)arg1 ;
-(void)_updateModelFlippednessWithCurrentPoint:(CGPoint)arg1 ;
-(CGRect)_rectForModifiedRotatedRect:(CGRect)arg1 withOriginal:(CGRect)arg2 andRotation:(double)arg3 ;
-(CGPoint)lastMungedPositionInModel;
@end

