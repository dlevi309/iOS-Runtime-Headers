/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <libobjc.A.dylib/PPContactClientProtocol.h>

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPContactClient : NSObject <PPContactClientProtocol> {

	PPXPCClientHelper* _clientHelper;
	PPXPCClientPipelinedBatchQueryManager* _queryManager;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)contactNameRecordChangesForClient:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)contactHandlesForTopics:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
-(void)rankedContactsBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(id)_remoteObjectProxy;
-(void)contactHandlesForTopicsBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)contactHandlesForSource:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
-(void)_unblockPendingQueries;
-(void)contactNameRecordChangesBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)rankedContactsWithQuery:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
-(void)contactNameRecordChangesForClient:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)contactNameRecordsForClient:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
-(void)contactHandlesForSourceBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)contactNameRecordBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
@end

