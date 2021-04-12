/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

