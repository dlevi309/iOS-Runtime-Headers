/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSDLayoutManipulatingTracker
@optional
-(void)willBeginDynamicOperationForReps:(id)arg1;
-(void)didChangeCurrentlyTransformingReps;
-(void)didEndDynamicOperationForReps:(id)arg1;
-(id)selectionBehaviorForReps:(id)arg1;

@required
-(BOOL)supportsAlignmentGuides;
-(BOOL)operationShouldBeDynamic;
-(void)commitChangesForReps:(id)arg1;
-(void)changeDynamicLayoutsForReps:(id)arg1;
-(BOOL)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;

@end

