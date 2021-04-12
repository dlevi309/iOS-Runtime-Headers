/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFDragFeedbackGenerator.h>

@class NSDate;

@interface WFActionDragFeedbackGenerator : WFDragFeedbackGenerator {

	BOOL _initializedReorderSound;
	unsigned _reorderSound;
	NSDate* _lastDragStartDate;

}

@property (nonatomic,retain) NSDate * lastDragStartDate;                //@synthesize lastDragStartDate=_lastDragStartDate - In the implementation block
@property (assign,nonatomic) BOOL initializedReorderSound;              //@synthesize initializedReorderSound=_initializedReorderSound - In the implementation block
@property (assign,nonatomic) unsigned reorderSound;                     //@synthesize reorderSound=_reorderSound - In the implementation block
-(void)dealloc;
-(void)draggingStarted;
-(void)draggingItemSnapped;
-(void)draggingInsertedActions:(id)arg1 intoWorkflow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)draggingRemovedActions:(id)arg1 ;
-(void)draggingMovedActions:(id)arg1 fromIndexes:(id)arg2 toIndexes:(id)arg3 inWorkflow:(id)arg4 ;
-(void)draggingActionsEnteredDeletionZone:(id)arg1 ;
-(unsigned)reorderSound;
-(void)playReorderSound;
-(NSDate *)lastDragStartDate;
-(void)setLastDragStartDate:(NSDate *)arg1 ;
-(BOOL)initializedReorderSound;
-(void)setInitializedReorderSound:(BOOL)arg1 ;
-(void)setReorderSound:(unsigned)arg1 ;
@end

