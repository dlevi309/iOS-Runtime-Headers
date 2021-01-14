/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <libobjc.A.dylib/PPLocationClientProtocol.h>

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPLocationReadOnlyClient : NSObject <PPLocationClientProtocol> {

	PPXPCClientHelper* _clientHelper;
	PPXPCClientPipelinedBatchQueryManager* _queryManager;

}
+(id)sharedInstance;
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)locationRecordsWithQuery:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxy;
-(void)locationBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)rankedLocationsWithQuery:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
-(void)locationRecordBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)_unblockPendingQueries;
@end

