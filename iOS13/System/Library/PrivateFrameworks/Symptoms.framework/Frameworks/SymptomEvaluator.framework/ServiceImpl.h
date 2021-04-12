/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithQueue:(id)arg1 ;
-(void)shutdown;
-(void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)setOption:(id)arg1 inScopes:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getOption:(id)arg1 inScopes:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)resetDataFor:(id)arg1 nameKind:(id)arg2 inScopes:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)subscribeToNOIsFor:(id)arg1 orPredicate:(id)arg2 options:(id)arg3 ;
-(void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)unsubscribeToNOIs:(id)arg1 ;
-(void)identifierForUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)trainModelAndScore:(BOOL)arg1 lastScoreDate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performPersistentStoreHealthCheckWithReply:(/*^block*/id)arg1 ;
-(void)setUsageOption:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)resetUsageFor:(id)arg1 nameKind:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getNetworkBitmapsWithNames:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3 Reply:(/*^block*/id)arg4 ;
-(void)getExpertSystemsStatus:(/*^block*/id)arg1 ;
-(void)startRNFTestWithOptions:(id)arg1 scenarioName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)abortRNFTestWithReply:(/*^block*/id)arg1 ;
-(void)waitForOSLogErrorSymptomWithReply:(/*^block*/id)arg1 ;
-(void)assertFactString:(id)arg1 module:(id)arg2 asSymptom:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)postAWDEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)clientTransactionsRelease;
-(BOOL)assertEntitlement:(id)arg1 entitlement:(id)arg2 orWaiveOnIntent:(id)arg3 ;
-(void)_serviceReadyCheckPoint;
-(BOOL)_serviceReady;
-(void)_serviceReadyCheckPointRelease;
-(BOOL)_checkRateLimitForConnection:(id)arg1 ;
@end

