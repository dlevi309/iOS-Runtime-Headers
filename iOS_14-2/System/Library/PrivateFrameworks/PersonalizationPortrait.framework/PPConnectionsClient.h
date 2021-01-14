/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <libobjc.A.dylib/PPConnectionsClientProtocol.h>

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPConnectionsClient : NSObject <PPConnectionsClientProtocol> {

	PPXPCClientHelper* _clientHelper;
	PPXPCClientPipelinedBatchQueryManager* _queryManager;

}
+(id)sharedInstance;
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recentLocationsBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)recentLocationDonationsSinceDate:(id)arg1 client:(id)arg2 error:(id*)arg3 handleBatch:(/*^block*/id)arg4 ;
-(id)_remoteObjectProxy;
-(BOOL)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 client:(id)arg5 error:(id*)arg6 handleBatch:(/*^block*/id)arg7 ;
-(void)_unblockPendingQueries;
@end

