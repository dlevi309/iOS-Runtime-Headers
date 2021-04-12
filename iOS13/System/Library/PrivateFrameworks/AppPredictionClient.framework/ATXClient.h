/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, ATXCacheReader;

@interface ATXClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;
	unsigned long long _consumerType;
	ATXCacheReader* _cacheReader;

}

@property (nonatomic,readonly) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)clientForConsumerType:(unsigned long long)arg1 cachePath:(const char*)arg2 ;
+(id)clientForConsumerType:(unsigned long long)arg1 ;
+(id)clientForConsumerType:(unsigned long long)arg1 cacheBasePath:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(void)sortAppsByLaunches:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithConsumerType:(unsigned long long)arg1 cacheBasePath:(id)arg2 ;
-(id)_getConnection;
-(id)_asyncProxy;
-(id)_syncProxy;
-(id)_simulatorResponse;
-(id)appPredictionsForConsumerSubType:(unsigned char)arg1 limit:(int)arg2 ;
-(id)_predicateForBlacklist:(id)arg1 ;
-(id)appPredictionsForConsumerSubType:(unsigned char)arg1 blackList:(id)arg2 limit:(int)arg3 runningDiagnostics:(BOOL)arg4 ;
-(void)logUserFeedback:(id)arg1 aprResponse:(id)arg2 consumerSubType:(unsigned char)arg3 engagementType:(unsigned long long)arg4 bundleIdentifier:(id)arg5 bundleIdsShown:(id)arg6 ;
-(BOOL)forceCacheUpdateForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 candidateIntentTypeIdentifiers:(id)arg4 ;
-(id)getAppPredictorAssetMappingDescription;
@end

