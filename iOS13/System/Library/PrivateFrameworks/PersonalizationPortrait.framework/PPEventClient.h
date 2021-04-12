/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <libobjc.A.dylib/PPEventClientProtocol.h>

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPEventClient : NSObject <PPEventClientProtocol> {

	PPXPCClientHelper* _clientHelper;
	PPXPCClientPipelinedBatchQueryManager* _queryManager;

}
+(id)sharedInstance;
-(id)init;
-(id)_remoteObjectProxy;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)eventNameRecordBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)eventNameRecordChangesBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)eventHighlightsBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)interactionSummaryMetricsBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)_unblockPendingQueries;
-(BOOL)eventNameRecordsForClient:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
-(BOOL)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 error:(id*)arg3 handleBatch:(/*^block*/id)arg4 ;
-(BOOL)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 error:(id*)arg4 handleBatch:(/*^block*/id)arg5 ;
-(void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(BOOL)interactionSummaryMetricsWithError:(id*)arg1 handleBatch:(/*^block*/id)arg2 ;
-(BOOL)sendRTCLogsWithError:(id*)arg1 ;
@end

