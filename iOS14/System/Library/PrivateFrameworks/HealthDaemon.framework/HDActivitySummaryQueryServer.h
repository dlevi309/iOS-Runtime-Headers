/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>

@class HDSQLitePredicate, HDActivitySummaryQueryHelper;

@interface HDActivitySummaryQueryServer : HDQueryServer {

	BOOL _deliversUpdates;
	long long _lastProcessedAnchor;
	HDSQLitePredicate* _filterPredicate;
	HDActivitySummaryQueryHelper* _queryHelper;
	BOOL _hasSentInitialResults;

}
+(id)requiredEntitlements;
+(Class)queryClass;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(void)_queue_stop;
-(void)_setUpInitialQueryHelper;
-(void)_queue_deliverErrorToClient:(id)arg1 ;
-(void)_queue_deliverActivitySummariesToClient:(id)arg1 isFinalBatch:(BOOL)arg2 clearPendingBatches:(BOOL)arg3 ;
-(void)_queue_deliverResultsWithActivitySummaries:(id)arg1 isFinalBatch:(BOOL)arg2 clearPendingBatches:(BOOL)arg3 error:(id)arg4 ;
@end

