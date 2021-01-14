/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@class _UIDragSnappingFeedbackGenerator;

@interface WFDragFeedbackGenerator : NSObject {

	long long _activeDragSessions;
	_UIDragSnappingFeedbackGenerator* _feedbackGenerator;

}

@property (assign,nonatomic) long long activeDragSessions;                                             //@synthesize activeDragSessions=_activeDragSessions - In the implementation block
@property (assign,nonatomic,__weak) _UIDragSnappingFeedbackGenerator * feedbackGenerator;              //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
-(void)dropTargetUpdated;
-(id)initWithCollectionView:(id)arg1 ;
-(void)setFeedbackGenerator:(_UIDragSnappingFeedbackGenerator *)arg1 ;
-(void)draggedObjectLanded;
-(void)userInteractionCancelled;
-(void)positionUpdated;
-(_UIDragSnappingFeedbackGenerator *)feedbackGenerator;
-(void)draggingStarted;
-(void)userInteractionEnded;
-(void)userInteractionStarted;
-(void)performFeedbackWithDelay:(double)arg1 insideBlock:(/*^block*/id)arg2 ;
-(void)draggedObjectLifted;
-(void)objectSnapped;
-(void)draggingCancelled;
-(void)draggingItemDropped;
-(void)draggingPositionUpdated;
-(void)draggingItemSnapped;
-(long long)activeDragSessions;
-(void)setActiveDragSessions:(long long)arg1 ;
@end

