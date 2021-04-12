/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol HKStatisticsCollectionQueryClientInterface <HKQueryClientInterface>
@required
-(void)client_deliverStatisticsBatch:(id)arg1 resetStatistics:(BOOL)arg2 isFinal:(BOOL)arg3 anchor:(id)arg4 query:(id)arg5;
-(void)client_deliverUpdatedStatistics:(id)arg1 anchor:(id)arg2 query:(id)arg3;

@end

