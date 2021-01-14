/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/PPConnectionsServerProtocol.h>

@protocol PPConnectionsClientProtocol;
@class PPXPCServerPipelinedBatchQueryManager, NSString;

@interface PPConnectionsServerRequestHandler : NSObject <PPConnectionsServerProtocol> {

	id<PPConnectionsClientProtocol> _clientProxy;
	PPXPCServerPipelinedBatchQueryManager* _queryManager;
	NSString* _clientProcessName;

}

@property (nonatomic,copy) NSString * clientProcessName;              //@synthesize clientProcessName=_clientProcessName - In the implementation block
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)clientProcessName;
-(void)unblockPendingQueries;
-(void)setClientProcessName:(NSString *)arg1 ;
-(void)setRemoteObjectProxy:(id)arg1 ;
-(void)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 client:(id)arg5 queryId:(unsigned long long)arg6 ;
-(void)recentLocationDonationsSinceDate:(id)arg1 client:(id)arg2 queryId:(unsigned long long)arg3 ;
@end

