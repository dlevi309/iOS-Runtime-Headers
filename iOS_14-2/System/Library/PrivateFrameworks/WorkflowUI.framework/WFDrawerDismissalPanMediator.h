/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)handleDisplayLink:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(id)initWithPanGesture:(id)arg1 dragTracker:(id)arg2 ;
@end

