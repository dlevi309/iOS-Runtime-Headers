/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTPersistenceMirroringMetricsDelegate.h>
#import <libobjc.A.dylib/RTPersistenceMirroringRequestDelegate.h>
#import <libobjc.A.dylib/RTPersistenceMirroringDelegate.h>
#import <libobjc.A.dylib/RTPurgable.h>
#import <libobjc.A.dylib/RTDiagnosticProvider.h>

@protocol RTPersistenceMirroringMetricsDelegate, OS_os_transaction, OS_dispatch_queue;
@class RTDefaultsManager, RTTimerManager, RTAccountManager, RTReachabilityManager, RTPersistenceManager, RTPowerAssertion, NSObject, NSMutableDictionary, NSMutableArray, RTPersistenceMirroringRequest, RTXPCActivityManager, RTPlatform, RTPersistenceCloudDeletionEnforcer, RTPersistenceExpirationEnforcer, RTInvocationDispatcher, NSString;

@interface RTPersistenceMirroringManager : NSObject <RTPersistenceMirroringMetricsDelegate, RTPersistenceMirroringRequestDelegate, RTPersistenceMirroringDelegate, RTPurgable, RTDiagnosticProvider> {

	RTDefaultsManager* _defaultsManager;
	RTTimerManager* _timerManager;
	RTAccountManager* _accountManager;
	RTReachabilityManager* _reachabilityManager;
	long long _cloudSyncAuthorizationState;
	unsigned long long _currentReachability;
	BOOL _syncDisabledForPerProcessMemoryLimit;
	BOOL _exportingAvailable;
	id<RTPersistenceMirroringMetricsDelegate> _metricsDelegate;
	RTPersistenceManager* _persistenceManager;
	RTPowerAssertion* _powerAssertion;
	NSObject*<OS_os_transaction> _setupTransaction;
	NSMutableDictionary* _mirroringPolicies;
	NSMutableDictionary* _retryTimers;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _pendingMirroringRequests;
	RTPersistenceMirroringRequest* _activeMirroringRequest;
	RTXPCActivityManager* _xpcActivityManager;
	RTPlatform* _platform;
	RTPersistenceCloudDeletionEnforcer* _persistenceCloudDeletionEnforcer;
	RTPersistenceExpirationEnforcer* _persistenceExpirationEnforcer;
	RTInvocationDispatcher* _dispatcher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<RTPersistenceMirroringMetricsDelegate> metricsDelegate;                                    //@synthesize metricsDelegate=_metricsDelegate - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;                                          //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) RTPowerAssertion * powerAssertion;                                                  //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> setupTransaction;                                      //@synthesize setupTransaction=_setupTransaction - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mirroringPolicies;                                            //@synthesize mirroringPolicies=_mirroringPolicies - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * retryTimers;                                                  //@synthesize retryTimers=_retryTimers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingMirroringRequests;                                          //@synthesize pendingMirroringRequests=_pendingMirroringRequests - In the implementation block
@property (nonatomic,retain) RTPersistenceMirroringRequest * activeMirroringRequest;                             //@synthesize activeMirroringRequest=_activeMirroringRequest - In the implementation block
@property (nonatomic,retain) RTXPCActivityManager * xpcActivityManager;                                          //@synthesize xpcActivityManager=_xpcActivityManager - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                                              //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) RTPersistenceCloudDeletionEnforcer * persistenceCloudDeletionEnforcer;              //@synthesize persistenceCloudDeletionEnforcer=_persistenceCloudDeletionEnforcer - In the implementation block
@property (nonatomic,retain) RTPersistenceExpirationEnforcer * persistenceExpirationEnforcer;                    //@synthesize persistenceExpirationEnforcer=_persistenceExpirationEnforcer - In the implementation block
@property (nonatomic,retain) RTInvocationDispatcher * dispatcher;                                                //@synthesize dispatcher=_dispatcher - In the implementation block
@property (assign,nonatomic) BOOL exportingAvailable;                                                            //@synthesize exportingAvailable=_exportingAvailable - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(RTPlatform *)platform;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(void)shutdown;
-(RTInvocationDispatcher *)dispatcher;
-(void)setDispatcher:(RTInvocationDispatcher *)arg1 ;
-(RTPowerAssertion *)powerAssertion;
-(void)setPowerAssertion:(RTPowerAssertion *)arg1 ;
-(void)setRetryTimers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)retryTimers;
-(void)setMetricsDelegate:(id<RTPersistenceMirroringMetricsDelegate>)arg1 ;
-(id<RTPersistenceMirroringMetricsDelegate>)metricsDelegate;
-(id)initWithAccountManager:(id)arg1 defaultsManager:(id)arg2 persistenceManager:(id)arg3 platform:(id)arg4 reachabilityManager:(id)arg5 xpcActivityManager:(id)arg6 ;
-(RTPersistenceManager *)persistenceManager;
-(RTXPCActivityManager *)xpcActivityManager;
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendDiagnosticsToURL:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setXpcActivityManager:(RTXPCActivityManager *)arg1 ;
-(BOOL)mirroringRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)mirroringRequestDidSucceed:(id)arg1 ;
-(void)mirroringRequestDidBegin:(id)arg1 ;
-(id)initWithAccountManager:(id)arg1 defaultsManager:(id)arg2 mirroringPolicies:(id)arg3 persistenceCloudDeletionEnforcer:(id)arg4 persistenceExpirationEnforcer:(id)arg5 persistenceManager:(id)arg6 platform:(id)arg7 reachabilityManager:(id)arg8 timerManager:(id)arg9 xpcActivityManager:(id)arg10 ;
-(BOOL)disableMirroringForPerProcessMemoryLimitViolation:(id)arg1 platform:(id)arg2 ;
-(void)onMirroringDelegateInitialization:(id)arg1 ;
-(void)persistenceAvailabilityDidChange:(id)arg1 ;
-(void)onCloudSyncAuthorizationChange:(id)arg1 ;
-(void)onReachabilityChange:(id)arg1 ;
-(void)registerForXPCActivities;
-(void)performPeriodicSyncWithHandler:(/*^block*/id)arg1 ;
-(void)_performPeriodicExportWithHandler:(/*^block*/id)arg1 ;
-(void)unregisterForXPCActivities;
-(void)setMirroringAttemptMapValue:(BOOL)arg1 buildVersion:(id)arg2 ;
-(void)_performPeriodicImportWithHandler:(/*^block*/id)arg1 ;
-(BOOL)_dataAvailableToMirror;
-(void)_performMirroringRequestWithType:(long long)arg1 affectedStore:(id)arg2 qualityOfService:(long long)arg3 managedObjectContext:(id)arg4 handler:(/*^block*/id)arg5 ;
-(id)optionsForQualityOfService:(long long)arg1 ;
-(void)_enqueueMirroringRequest:(id)arg1 context:(id)arg2 ;
-(void)_scheduleRetryAttemptForRequest:(id)arg1 referenceDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_startMirroringRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)_authorizedToMirror;
-(long long)_mirroringDelegateState;
-(void)_prepareRequestForRetryAttempt:(id)arg1 retryInterval:(double)arg2 ;
-(void)mirroringManager:(id)arg1 mirroringRequest:(id)arg2 didFailWithError:(id)arg3 ;
-(void)_finalizeMirroringRequest:(id)arg1 ;
-(void)mirroringManager:(id)arg1 mirroringRequestDidSucceed:(id)arg2 ;
-(void)_dequeueNextMirroringRequest;
-(void)_persistenceAvailabilityDidChange:(id)arg1 ;
-(void)_updateExportingAvailability:(unsigned long long)arg1 ;
-(BOOL)exportMirroringIsAvailableWithExpirationEnforcer:(id)arg1 expirationDate:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(void)_onCloudSyncAuthorizationChange:(id)arg1 ;
-(void)_onReachabilityChange:(id)arg1 ;
-(BOOL)_generateDiagnosticFilesAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_fetchDatabaseChangesForDatabase:(id)arg1 outputURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)_fetchZoneChangesForDatabase:(id)arg1 outputURL:(id)arg2 error:(id*)arg3 ;
-(void)_onMirroringDelegateInitialization:(id)arg1 ;
-(void)_updateMirroringDelegateState;
-(void)performMirroringRequestWithType:(long long)arg1 affectedStore:(id)arg2 qualityOfService:(long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)performMirroringRequestWithType:(long long)arg1 affectedStore:(id)arg2 qualityOfService:(long long)arg3 managedObjectContext:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(NSObject*<OS_os_transaction>)setupTransaction;
-(void)setSetupTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(NSMutableDictionary *)mirroringPolicies;
-(void)setMirroringPolicies:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)pendingMirroringRequests;
-(void)setPendingMirroringRequests:(NSMutableArray *)arg1 ;
-(RTPersistenceMirroringRequest *)activeMirroringRequest;
-(void)setActiveMirroringRequest:(RTPersistenceMirroringRequest *)arg1 ;
-(RTPersistenceCloudDeletionEnforcer *)persistenceCloudDeletionEnforcer;
-(void)setPersistenceCloudDeletionEnforcer:(RTPersistenceCloudDeletionEnforcer *)arg1 ;
-(RTPersistenceExpirationEnforcer *)persistenceExpirationEnforcer;
-(void)setPersistenceExpirationEnforcer:(RTPersistenceExpirationEnforcer *)arg1 ;
-(BOOL)exportingAvailable;
-(void)setExportingAvailable:(BOOL)arg1 ;
-(void)collectMetricsFromMirroringRequest:(id)arg1 error:(id)arg2 ;
-(id)persistenceOperationMetricWithMirroringRequest:(id)arg1 lastMirroringTransactionDate:(id)arg2 recordsChanged:(unsigned long long)arg3 error:(id)arg4 ;
@end

