/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@protocol WBSCloudKitThrottlerDataStore;
@class NSMutableArray, NSArray;

@interface WBSCloudKitThrottler : NSObject {

	NSMutableArray* _pastOperationsWithinMonitoredPeriod;
	NSArray* _throttlingDistribution;
	double _numberOfSecondsToMonitor;
	unsigned long long _maximumNumberOfOperationWithinMonitoredPeriod;
	id<WBSCloudKitThrottlerDataStore> _dataStore;

}

@property (assign,nonatomic,__weak) id<WBSCloudKitThrottlerDataStore> dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
+(id)_distributionBucketsFromConfiguration:(id)arg1 ;
+(BOOL)policyStringRepresentsValidPolicy:(id)arg1 ;
-(id)init;
-(id)description;
-(id<WBSCloudKitThrottlerDataStore>)dataStore;
-(void)setDataStore:(id<WBSCloudKitThrottlerDataStore>)arg1 ;
-(id)initWithPolicyString:(id)arg1 ;
-(void)setPolicyString:(id)arg1 ;
-(void)_loadRecordOfPastOperations;
-(void)_pruneExpiredOrInvalidOperations;
-(id)dateOfNextPermittedOperationWithPriority:(long long)arg1 ;
-(id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
-(void)_addOperationAtDate:(id)arg1 ;
-(void)_saveRecordOfPastOperations;
-(double)_currentMinimumTimeIntervalBetweenOperations;
-(BOOL)_loadDistributionConfiguration:(id)arg1 ;
-(double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
-(double)_minimumTimeBetweenOperationsForOperations:(id)arg1 ;
-(double)_timeIntervalUntilOperationShouldBePruned:(id)arg1 ;
-(BOOL)permitsOperationWithPriority:(long long)arg1 ;
-(void)operationWithPriority:(long long)arg1 didCompleteWithResult:(long long)arg2 ;
-(BOOL)_throttlerIsActive;
-(void)reloadRecordOfPastOperations;
-(double)_test_numberOfSecondsToMonitor;
-(unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
@end

