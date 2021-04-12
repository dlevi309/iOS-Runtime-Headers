/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFDrawerDragTracking;
@class UIPanGestureRecognizer, CADisplayLink;

@interface WFDrawerDismissalPanMediator : NSObject {

	UIPanGestureRecognizer* _gestureRecognizer;
	id<WFDrawerDragTracking> _dragTracker;
	CADisplayLink* _displayLink;
	double _translation;
	double _previousVelocity;
	double _peakVelocity;

}
-(void)dealloc;
-(void)invalidate;
-(void)handleDisplayLink:(id)arg1 ;
-(id)initWithPanGesture:(id)arg1 dragTracker:(id)arg2 ;
@end

