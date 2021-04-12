/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ExtendedServiceInterface.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class FlowAnalyticsEngine, NetworkAnalyticsEngine, NOIAnalyticsEngine, NSObject, NSMutableDictionary, NSString;

@interface ServiceImpl : NSObject <NSXPCListenerDelegate, ExtendedServiceInterface> {

	FlowAnalyticsEngine* f_engine;
	NetworkAnalyticsEngine* n_engine;
	NOIAnalyticsEngine* noi_engine;
	NSObject*<OS_dispatch_semaphore> svc_sema;
	NSObject*<OS_dispatch_queue> queue;
	NSMutableDictionary* lastAllowedRequests;
	id featureReadyObserver;
	BOOL _isHelper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(void)unsubscribeToNOIs:(id)arg1 ;
-(BOOL)assertEntitlement:(id)arg1 entitlement:(unsigned long long)arg2 orWaiveOnIntent:(id)arg3 ;
-(void)shutdown;
-(void)assertFactString:(id)arg1 module:(id)arg2 asSymptom:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)abortRNFTestWithReply:(/*^block*/id)arg1 ;
-(void)startRNFTestWithOptions:(id)arg1 scenarioName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_serviceReadyCheckPointRelease;
-(void)resetUsageFor:(id)arg1 nameKind:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)_checkRateLimitForConnection:(id)arg1 ;
-(void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 reply:(/*^block*/id)arg5 ;
-(BOOL)_serviceReady;
-(void)setOption:(id)arg1 inScopes:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performPersistentStoreHealthCheckWithReply:(/*^block*/id)arg1 ;
-(void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 reply:(/*^block*/id)arg5 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)performAppExperiencePeriodicTasksWithReply:(/*^block*/id)arg1 ;
-(void)getNetworkBitmapsWithNames:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3 Reply:(/*^block*/id)arg4 ;
-(void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)waitForOSLogErrorSymptomWithReply:(/*^block*/id)arg1 ;
-(void)identifierForUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)subscribeToNOIsFor:(id)arg1 orPredicate:(id)arg2 options:(id)arg3 ;
-(void)clientTransactionsRelease;
-(void)performAppPeriodicTasksWithReply:(/*^block*/id)arg1 ;
-(void)trainModelAndScore:(BOOL)arg1 lastScoreDate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)postAWDEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getExpertSystemsStatus:(/*^block*/id)arg1 ;
-(void)_cacheEntitlementValuesForConnection:(id)arg1 ;
-(void)resetDataFor:(id)arg1 nameKind:(id)arg2 inScopes:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_serviceReadyCheckPoint;
-(void)getOption:(id)arg1 inScopes:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)setUsageOption:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

