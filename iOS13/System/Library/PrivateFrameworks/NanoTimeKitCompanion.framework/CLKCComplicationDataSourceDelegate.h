/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol CLKCComplicationDataSourceDelegate <NSObject>
@required
-(void)invalidateSwitcherTemplate;
-(void)invalidateEntries;
-(void)invalidateEntriesWithTritiumUpdatePriority:(long long)arg1;
-(void)appendEntries:(id)arg1 withTritiumUpdatePriority:(long long)arg2;
-(void)setTimelineStartDate:(id)arg1;
-(void)setTimelineEndDate:(id)arg1;
-(void)appendEntries:(id)arg1;
-(double)minimumIntervalBetweenTimelineEntries;

@end

