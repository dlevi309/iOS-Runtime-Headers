/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <libobjc.A.dylib/PPNamedEntityClientProtocol.h>

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPNamedEntityReadOnlyClient : NSObject <PPNamedEntityClientProtocol> {

	PPXPCClientHelper* _clientHelper;
	PPXPCClientPipelinedBatchQueryManager* _queryManager;

}
+(id)sharedInstance;
-(id)mapItemForPlaceName:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)namedEntityRecordBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxy;
-(BOOL)rankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
-(void)_unblockPendingQueries;
-(void)namedEntityBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)namedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
@end

