/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class _UIDragSnappingFeedbackGenerator;

@interface WFDragFeedbackGenerator : NSObject {

	long long _activeDragSessions;
	_UIDragSnappingFeedbackGenerator* _feedbackGenerator;

}

@property (assign,nonatomic) long long activeDragSessions;                                             //@synthesize activeDragSessions=_activeDragSessions - In the implementation block
@property (assign,nonatomic,__weak) _UIDragSnappingFeedbackGenerator * feedbackGenerator;              //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
-(void)userInteractionStarted;
-(void)userInteractionEnded;
-(void)setFeedbackGenerator:(_UIDragSnappingFeedbackGenerator *)arg1 ;
-(_UIDragSnappingFeedbackGenerator *)feedbackGenerator;
-(id)initWithCollectionView:(id)arg1 ;
-(void)objectSnapped;
-(void)performFeedbackWithDelay:(double)arg1 insideBlock:(/*^block*/id)arg2 ;
-(void)draggedObjectLifted;
-(void)positionUpdated;
-(void)userInteractionCancelled;
-(void)draggedObjectLanded;
-(void)dropTargetUpdated;
-(void)draggingStarted;
-(void)draggingPositionUpdated;
-(void)draggingItemSnapped;
-(void)draggingCancelled;
-(void)draggingItemDropped;
-(long long)activeDragSessions;
-(void)setActiveDragSessions:(long long)arg1 ;
@end

