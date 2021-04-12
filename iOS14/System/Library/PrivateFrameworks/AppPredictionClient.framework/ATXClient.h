/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)clientForConsumerType:(unsigned long long)arg1 ;
+(id)clientForConsumerType:(unsigned long long)arg1 cachePath:(const char*)arg2 ;
+(id)clientForConsumerType:(unsigned long long)arg1 cacheBasePath:(id)arg2 ;
-(NSXPCConnection *)xpcConnection;
-(id)init;
-(id)_asyncProxy;
-(id)appPredictionsForConsumerSubType:(unsigned char)arg1 blackList:(id)arg2 limit:(int)arg3 runningDiagnostics:(BOOL)arg4 ;
-(void)logUserFeedback:(id)arg1 consumerSubType:(unsigned char)arg2 engagementType:(unsigned long long)arg3 bundleIdentifier:(id)arg4 bundleIdsShown:(id)arg5 explicitlyRejectedIds:(id)arg6 ;
-(id)atxResponseFromBlendingAppPredictionCacheForConsumerSubType:(unsigned char)arg1 filterPredicate:(id)arg2 limit:(int)arg3 ;
-(id)appPredictionsForConsumerSubType:(unsigned char)arg1 limit:(int)arg2 ;
-(id)_minuteZeroResponse;
-(void)sortAppsByLaunches:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_predicateForBlacklist:(id)arg1 ;
-(id)_syncProxy;
-(id)initWithConsumerType:(unsigned long long)arg1 cacheBasePath:(id)arg2 ;
-(id)getAppPredictorAssetMappingDescription;
-(BOOL)forceCacheUpdateForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 candidateIntentTypeIdentifiers:(id)arg4 ;
-(id)_getConnection;
-(void)dealloc;
-(id)_simulatorResponse;
@end

