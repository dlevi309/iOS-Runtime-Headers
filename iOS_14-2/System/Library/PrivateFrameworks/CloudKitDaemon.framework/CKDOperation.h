/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/CKDURLRequestMetricsDelegate.h>
#import <libobjc.A.dylib/CKDURLRequestAuthRetryDelegate.h>
#import <libobjc.A.dylib/CKThrottlingCriteria.h>
#import <libobjc.A.dylib/CKDFlowControllable.h>

@protocol OS_os_activity, CKOperationCallbacks, OS_dispatch_queue, OS_dispatch_group, NSObject;
@class NSString, NSObject, CKDURLRequest, NSDate, CKDClientContext, CKDClientProxy, NSError, CKDOperationMetrics, CKOperationInfo, NSMutableArray, UMUserSyncTask, CKOperationMetrics, CKOperationMMCSRequestOptions, NSMutableDictionary, NSNumber;

@interface CKDOperation : NSOperation <CKDURLRequestMetricsDelegate, CKDURLRequestAuthRetryDelegate, CKThrottlingCriteria, CKDFlowControllable> {

	unsigned long long _state;
	NSObject*<OS_os_activity> _osActivity;
	BOOL _isFinished;
	BOOL _isExecuting;
	BOOL _useEncryption;
	BOOL _useClearAssetEncryption;
	BOOL _isLongLivedCallbackRelayOperation;
	BOOL _shouldPipelineFetchAllChangesRequests;
	BOOL _didAttemptDugongKeyRoll;
	Ai _pcsWaitCount;
	CKDURLRequest* _request;
	id<CKOperationCallbacks> _clientOperationCallbackProxy;
	NSDate* _startDate;
	CKDOperation* _parentOperation;
	CKDClientContext* _context;
	CKDClientProxy* _proxy;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSError* _error;
	CKDOperationMetrics* _cloudKitMetrics;
	CKDOperationMetrics* _MMCSMetrics;
	NSDate* _metricExecuteStartDate;
	/*^block*/id _requestCompletedBlock;
	CKOperationInfo* _operationInfo;
	NSObject*<OS_dispatch_group> _stateTransitionGroup;
	NSMutableArray* _requestUUIDs;
	NSMutableArray* _childOperations;
	NSMutableArray* _finishedChildOperationIDs;
	id<NSObject> _powerAssertion;
	NSObject*<OS_dispatch_group> _childOperationsGroup;
	UMUserSyncTask* _userSyncTask;
	NSString* _clientSuppliedDeviceIdentifier;

}

@property (nonatomic,retain) NSMutableArray * requestUUIDs;                                              //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (assign,nonatomic,__weak) CKDOperation * parentOperation;                                      //@synthesize parentOperation=_parentOperation - In the implementation block
@property (nonatomic,retain) NSMutableArray * childOperations;                                           //@synthesize childOperations=_childOperations - In the implementation block
@property (nonatomic,retain) NSMutableArray * finishedChildOperationIDs;                                 //@synthesize finishedChildOperationIDs=_finishedChildOperationIDs - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) id<NSObject> powerAssertion;                                                //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> childOperationsGroup;                          //@synthesize childOperationsGroup=_childOperationsGroup - In the implementation block
@property (nonatomic,retain) UMUserSyncTask * userSyncTask;                                              //@synthesize userSyncTask=_userSyncTask - In the implementation block
@property (nonatomic,retain) NSString * clientSuppliedDeviceIdentifier;                                  //@synthesize clientSuppliedDeviceIdentifier=_clientSuppliedDeviceIdentifier - In the implementation block
@property (nonatomic,retain) CKOperationInfo * operationInfo;                                            //@synthesize operationInfo=_operationInfo - In the implementation block
@property (assign,nonatomic) Ai pcsWaitCount;                                                            //@synthesize pcsWaitCount=_pcsWaitCount - In the implementation block
@property (assign,nonatomic) BOOL didAttemptDugongKeyRoll;                                               //@synthesize didAttemptDugongKeyRoll=_didAttemptDugongKeyRoll - In the implementation block
@property (nonatomic,readonly) BOOL resolvedAutomaticallyRetryNetworkFailures; 
@property (nonatomic,readonly) unsigned long long resolvedDiscretionaryNetworkBehavior; 
@property (nonatomic,readonly) unsigned long long duetPreClearedMode; 
@property (nonatomic,readonly) unsigned long long discretionaryWhenBackgroundedState; 
@property (nonatomic,readonly) unsigned long long systemScheduler; 
@property (nonatomic,__weak,readonly) CKDOperation * topmostParentOperation; 
@property (nonatomic,retain) id<CKOperationCallbacks> clientOperationCallbackProxy;                      //@synthesize clientOperationCallbackProxy=_clientOperationCallbackProxy - In the implementation block
@property (nonatomic,retain) CKDClientContext * context;                                                 //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) CKDClientProxy * proxy;                                              //@synthesize proxy=_proxy - In the implementation block
@property (assign,nonatomic) BOOL useEncryption;                                                         //@synthesize useEncryption=_useEncryption - In the implementation block
@property (assign,nonatomic) BOOL useClearAssetEncryption;                                               //@synthesize useClearAssetEncryption=_useClearAssetEncryption - In the implementation block
@property (nonatomic,readonly) BOOL isLongLivedCallbackRelayOperation;                                   //@synthesize isLongLivedCallbackRelayOperation=_isLongLivedCallbackRelayOperation - In the implementation block
@property (nonatomic,readonly) BOOL shouldCheckAppVersion; 
@property (nonatomic,readonly) BOOL usesBackgroundSession; 
@property (nonatomic,readonly) BOOL expectDelayBeforeRequestBegins; 
@property (nonatomic,readonly) BOOL allowsPowerNapScheduling; 
@property (assign,nonatomic) BOOL shouldPipelineFetchAllChangesRequests;                                 //@synthesize shouldPipelineFetchAllChangesRequests=_shouldPipelineFetchAllChangesRequests - In the implementation block
@property (nonatomic,readonly) unsigned QOSClass; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                                 //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                                                           //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                                                            //@synthesize isFinished=_isFinished - In the implementation block
@property (retain) NSError * error;                                                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) CKDURLRequest * request;                                                    //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) CKOperationMetrics * operationMetrics; 
@property (nonatomic,retain) CKDOperationMetrics * cloudKitMetrics;                                      //@synthesize cloudKitMetrics=_cloudKitMetrics - In the implementation block
@property (nonatomic,retain) CKDOperationMetrics * MMCSMetrics;                                          //@synthesize MMCSMetrics=_MMCSMetrics - In the implementation block
@property (nonatomic,retain) NSDate * metricExecuteStartDate;                                            //@synthesize metricExecuteStartDate=_metricExecuteStartDate - In the implementation block
@property (nonatomic,copy) id requestCompletedBlock;                                                     //@synthesize requestCompletedBlock=_requestCompletedBlock - In the implementation block
@property (nonatomic,readonly) NSString * operationID; 
@property (nonatomic,readonly) BOOL isLongLived; 
@property (nonatomic,readonly) NSString * deviceIdentifier; 
@property (nonatomic,readonly) CKOperationMMCSRequestOptions * MMCSRequestOptions; 
@property (nonatomic,readonly) NSMutableDictionary * unitTestOverrides; 
@property (nonatomic,readonly) BOOL allowsCellularAccess; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifierForContainerAccess; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifierForNetworkAttribution; 
@property (nonatomic,readonly) NSString * sourceApplicationSecondaryIdentifier; 
@property (nonatomic,readonly) NSString * authPromptReason; 
@property (nonatomic,readonly) BOOL automaticallyRetryNetworkFailures; 
@property (nonatomic,readonly) BOOL preferAnonymousRequests; 
@property (nonatomic,readonly) BOOL allowsBackgroundNetworking; 
@property (nonatomic,readonly) double timeoutIntervalForRequest; 
@property (nonatomic,readonly) double timeoutIntervalForResource; 
@property (nonatomic,readonly) NSString * operationGroupID; 
@property (nonatomic,readonly) NSString * operationGroupName; 
@property (nonatomic,readonly) NSNumber * operationGroupQuantityNumber; 
@property (nonatomic,readonly) BOOL isCloudKitSupportOperation; 
@property (nonatomic,readonly) NSNumber * cacheDeleteAvailableSpaceClass; 
@property (nonatomic,readonly) unsigned long long networkServiceType; 
@property (nonatomic,readonly) NSObject*<OS_os_activity> osActivity; 
@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSObject*<OS_dispatch_group> stateTransitionGroup;                          //@synthesize stateTransitionGroup=_stateTransitionGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * flowControlKey; 
+(long long)isPredominatelyDownload;
+(id)_globalOperationCallbackQueueForQOS:(long long)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(int)operationType;
-(id)activityCreate;
-(NSString *)deviceIdentifier;
-(void)setProxy:(CKDClientProxy *)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(id)additionalRequestHTTPHeaders;
-(void)setMMCSMetrics:(CKDOperationMetrics *)arg1 ;
-(unsigned long long)systemScheduler;
-(id)_stateFlags;
-(CKDOperationMetrics *)MMCSMetrics;
-(id)nameForState:(unsigned long long)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id<NSObject>)powerAssertion;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(id)containerID;
-(CKDOperationMetrics *)cloudKitMetrics;
-(NSMutableDictionary *)unitTestOverrides;
-(NSString *)applicationBundleIdentifierForNetworkAttribution;
-(CKDClientProxy *)proxy;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSString *)operationID;
-(id)ckShortDescription;
-(NSMutableArray *)childOperations;
-(NSString *)applicationBundleIdentifierForContainerAccess;
-(void)setRequest:(CKDURLRequest *)arg1 ;
-(void)setCloudKitMetrics:(CKDOperationMetrics *)arg1 ;
-(void)setChildOperations:(NSMutableArray *)arg1 ;
-(void)start;
-(id)analyticsPayload;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(NSDate *)startDate;
-(unsigned long long)duetPreClearedMode;
-(BOOL)usesBackgroundSession;
-(unsigned long long)discretionaryWhenBackgroundedState;
-(CKOperationMMCSRequestOptions *)MMCSRequestOptions;
-(id)requestCompletedBlock;
-(void)_finishInternalOnCallbackQueueWithError:(id)arg1 ;
-(unsigned long long)networkServiceType;
-(unsigned long long)discretionaryNetworkBehavior;
-(BOOL)allowsBackgroundNetworking;
-(void)setRequestCompletedBlock:(id)arg1 ;
-(BOOL)isLongLived;
-(NSNumber *)cacheDeleteAvailableSpaceClass;
-(id<CKOperationCallbacks>)clientOperationCallbackProxy;
-(CKDClientContext *)context;
-(BOOL)automaticallyRetryNetworkFailures;
-(void)setError:(NSError *)arg1 ;
-(NSString *)operationGroupID;
-(BOOL)isFinished;
-(id)_runDurationString;
-(CKDURLRequest *)request;
-(NSError *)error;
-(NSMutableArray *)requestUUIDs;
-(void)_setIsFinished:(BOOL)arg1 ;
-(void)setPowerAssertion:(id<NSObject>)arg1 ;
-(void)setParentOperation:(CKDOperation *)arg1 ;
-(CKDOperation *)parentOperation;
-(void)setUseEncryption:(BOOL)arg1 ;
-(NSString *)description;
-(BOOL)isCloudKitSupportOperation;
-(void)setUseClearAssetEncryption:(BOOL)arg1 ;
-(void)main;
-(NSString *)authPromptReason;
-(id)statusReportWithIndent:(unsigned long long)arg1 ;
-(BOOL)useClearAssetEncryption;
-(double)timeoutIntervalForRequest;
-(CKOperationInfo *)operationInfo;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(NSString *)operationGroupName;
-(NSObject*<OS_os_activity>)osActivity;
-(BOOL)allowsCellularAccess;
-(void)setState:(unsigned long long)arg1 ;
-(void)configureRequest:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isExecuting;
-(unsigned long long)state;
-(void)finishWithError:(id)arg1 ;
-(BOOL)makeStateTransition;
-(BOOL)preferAnonymousRequests;
-(id)_startDateString;
-(BOOL)useEncryption;
-(void)setIsExecuting:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(BOOL)allowsPowerNapScheduling;
-(NSString *)flowControlKey;
-(void)setRequestUUIDs:(NSMutableArray *)arg1 ;
-(void)_setIsExecuting:(BOOL)arg1 ;
-(double)timeoutIntervalForResource;
-(void)setClientOperationCallbackProxy:(id<CKOperationCallbacks>)arg1 ;
-(void)cancel;
-(BOOL)isConcurrent;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setContext:(CKDClientContext *)arg1 ;
-(void)setOperationInfo:(CKOperationInfo *)arg1 ;
-(void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 operationConfigurationBlock:(/*^block*/id)arg3 ;
-(void)beginUserSyncTask;
-(CKOperationMetrics *)operationMetrics;
-(void)_ensureOperationGroup;
-(void)configureQualityOfServiceFromOperationInfo:(id)arg1 ;
-(CKDOperation *)topmostParentOperation;
-(NSObject*<OS_dispatch_group>)stateTransitionGroup;
-(void)_dropPowerAssertion;
-(unsigned)QOSClass;
-(NSString *)clientSuppliedDeviceIdentifier;
-(BOOL)isWaitingOnPCS;
-(NSMutableArray *)finishedChildOperationIDs;
-(NSNumber *)operationGroupQuantityNumber;
-(void)combineMetricsWithOperation:(id)arg1 ;
-(NSObject*<OS_dispatch_group>)childOperationsGroup;
-(void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 clientContext:(id)arg4 operationConfigurationBlock:(/*^block*/id)arg5 ;
-(void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 operationConfigurationBlock:(/*^block*/id)arg4 ;
-(void)_acquirePowerAssertion;
-(void)_registerAttemptForOperation;
-(BOOL)isLongLivedCallbackRelayOperation;
-(void)_determineNetworkServiceType;
-(void)_continueOperationStart;
-(void)setMetricExecuteStartDate:(NSDate *)arg1 ;
-(NSDate *)metricExecuteStartDate;
-(void)_reallyStart;
-(BOOL)operationShouldBeFlowControlled;
-(BOOL)shouldCheckAppVersion;
-(BOOL)_checkAppVersion;
-(BOOL)isTopLevelDaemonOperation;
-(BOOL)_errorShouldImpactFlowControl:(id)arg1 ;
-(void)sendCoreAnalyticsEventOperationFinished;
-(UMUserSyncTask *)userSyncTask;
-(void)makeStateTransition:(BOOL)arg1 ;
-(void)_dropPowerAssertionsForSelfAndParent;
-(void)setUserSyncTask:(UMUserSyncTask *)arg1 ;
-(BOOL)resolvedAutomaticallyRetryNetworkFailures;
-(unsigned long long)resolvedDiscretionaryNetworkBehavior;
-(void)_acquirePowerAssertionsForSelfAndParent;
-(id)CKStatusReportProperties;
-(id)CKStatusReportLogGroups;
-(BOOL)didAttemptDugongKeyRoll;
-(id)dugongKeyRollAnalyticsPayloadWithError:(id)arg1 ;
-(id)baseOperationAndErrorInfoCoreAnalyticsPayloadWithError:(id)arg1 ;
-(void)request:(id)arg1 didFinishWithMetrics:(id)arg2 w3cNavigationTiming:(id)arg3 ;
-(void)requestDidBeginWaitingForUserAuth:(id)arg1 ;
-(void)requestDidEndWaitingForUserAuth:(id)arg1 ;
-(id)createSerialQueue;
-(id)createInactiveSerialQueue;
-(id)createConcurrentQueue;
-(id)createInactiveConcurrentQueue;
-(BOOL)checkAndClearUnitTestOverrides:(id)arg1 ;
-(void)noteOperationWillWaitOnPCS;
-(void)noteOperationDidFinishWaitingOnPCS;
-(BOOL)expectDelayBeforeRequestBegins;
-(BOOL)isNetworkingBehaviorEquivalentForOperation:(id)arg1 ;
-(BOOL)shouldPipelineFetchAllChangesRequests;
-(void)setShouldPipelineFetchAllChangesRequests:(BOOL)arg1 ;
-(void)setStateTransitionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setFinishedChildOperationIDs:(NSMutableArray *)arg1 ;
-(void)setChildOperationsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setClientSuppliedDeviceIdentifier:(NSString *)arg1 ;
-(Ai)pcsWaitCount;
-(void)setPcsWaitCount:(Ai)arg1 ;
-(void)setDidAttemptDugongKeyRoll:(BOOL)arg1 ;
@end

