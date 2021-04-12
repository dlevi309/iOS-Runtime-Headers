/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDSearchableIndexSchedulableDelegate <NSObject>
@optional
-(void)didCancelDataSourceUpdateRequestForSearchableIndexSchedulable:(id)arg1;

@required
-(BOOL)hasAvailableIndexingBudgetForSearchableIndexSchedulable:(id)arg1;
-(double)budgetedTimeRemainingForSearchableIndexSchedulable:(id)arg1;
-(long long)budgetedItemCountRemainingForSearchableIndexSchedulable:(id)arg1;
-(void)searchableIndexSchedulable:(id)arg1 didGenerateImportantPowerEventWithIdentifier:(id)arg2 eventData:(id)arg3;
-(void)indexingDidSuspendForSearchableIndexSchedulable:(id)arg1;
-(void)indexingDidResumeForSearchableIndexSchedulable:(id)arg1;
-(void)didFinishIndexingBacklogForSearchableIndexSchedulable:(id)arg1;
-(void)searchableIndexSchedulable:(id)arg1 didIndexForTime:(double)arg2;
-(void)searchableIndexSchedulable:(id)arg1 didIndexItemCount:(long long)arg2;
-(void)searchableIndexSchedulable:(id)arg1 didGeneratePowerEventWithIdentifier:(id)arg2 eventData:(id)arg3;

@end

