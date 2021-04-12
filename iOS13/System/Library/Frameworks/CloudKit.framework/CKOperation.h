/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <Foundation/NSOperation.h>

@protocol OS_os_transaction, OS_voucher, OS_os_activity, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, CKOperationConfiguration, CKOperationGroup, NSString, NSMutableArray, NSMutableDictionary, CKEventMetric, NSError, CKPlaceholderOperation, CKOperationMetrics, CKOperationMMCSRequestOptions, CKDiscretionaryOptions, CKOperationInfo, NSDictionary, NSArray;

@interface CKOperation : NSOperation {

	NSObject*<OS_os_transaction> _isExecuting;
	NSObject*<OS_voucher> _clientVoucher;
	NSObject*<OS_os_activity> _osActivity;
	BOOL _isOutstandingOperation;
	BOOL _usesBackgroundSession;
	BOOL _runningDiscretionaryOperation;
	BOOL _failedToScheduleDiscretionaryOperation;
	BOOL _isFinished;
	BOOL _isFinishingOnCallbackQueue;
	BOOL _clouddConnectionInterrupted;
	BOOL _isDiscretionarySuspended;
	BOOL _queueHasStarted;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	CKOperationConfiguration* _resolvedConfiguration;
	/*^block*/id _longLivedOperationWasPersistedBlock;
	/*^block*/id _requestCompletedBlock;
	CKOperationConfiguration* _configuration;
	CKOperationGroup* _group;
	NSString* _operationID;
	NSObject*<OS_dispatch_source> _timeoutSource;
	NSMutableArray* _savedRequestUUIDs;
	NSMutableDictionary* _savedResponseHTTPHeadersByRequestUUID;
	NSMutableDictionary* _savedW3CNavigationTimingByRequestUUID;
	CKEventMetric* _operationMetric;
	xpc_activity_eligibility_changed_handler_sRef _xpcActivityEligibilityChangedHandler;
	unsigned long long _duetPreClearedMode;
	unsigned long long _discretionaryWhenBackgroundedState;
	unsigned long long _systemScheduler;
	NSError* _cancelError;
	CKPlaceholderOperation* _placeholderOperation;
	NSError* _error;
	NSString* _sectionID;
	NSString* _parentSectionID;
	id _context;
	CKOperationMetrics* _metrics;
	NSString* _deviceIdentifier;
	CKOperationMMCSRequestOptions* _MMCSRequestOptions;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutSource;                                                     //@synthesize timeoutSource=_timeoutSource - In the implementation block
@property (assign,nonatomic) BOOL isOutstandingOperation;                                                                     //@synthesize isOutstandingOperation=_isOutstandingOperation - In the implementation block
@property (assign,nonatomic) BOOL usesBackgroundSession;                                                                      //@synthesize usesBackgroundSession=_usesBackgroundSession - In the implementation block
@property (nonatomic,retain) NSMutableArray * savedRequestUUIDs;                                                              //@synthesize savedRequestUUIDs=_savedRequestUUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * savedResponseHTTPHeadersByRequestUUID;                                     //@synthesize savedResponseHTTPHeadersByRequestUUID=_savedResponseHTTPHeadersByRequestUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * savedW3CNavigationTimingByRequestUUID;                                     //@synthesize savedW3CNavigationTimingByRequestUUID=_savedW3CNavigationTimingByRequestUUID - In the implementation block
@property (nonatomic,readonly) CKEventMetric * operationMetric;                                                               //@synthesize operationMetric=_operationMetric - In the implementation block
@property (assign,nonatomic) BOOL runningDiscretionaryOperation;                                                              //@synthesize runningDiscretionaryOperation=_runningDiscretionaryOperation - In the implementation block
@property (assign,nonatomic) BOOL failedToScheduleDiscretionaryOperation;                                                     //@synthesize failedToScheduleDiscretionaryOperation=_failedToScheduleDiscretionaryOperation - In the implementation block
@property (assign,nonatomic) xpc_activity_eligibility_changed_handler_sRef xpcActivityEligibilityChangedHandler;              //@synthesize xpcActivityEligibilityChangedHandler=_xpcActivityEligibilityChangedHandler - In the implementation block
@property (assign,nonatomic) unsigned long long duetPreClearedMode;                                                           //@synthesize duetPreClearedMode=_duetPreClearedMode - In the implementation block
@property (assign,nonatomic) unsigned long long discretionaryWhenBackgroundedState;                                           //@synthesize discretionaryWhenBackgroundedState=_discretionaryWhenBackgroundedState - In the implementation block
@property (assign,nonatomic) unsigned long long systemScheduler;                                                              //@synthesize systemScheduler=_systemScheduler - In the implementation block
@property (nonatomic,readonly) CKDiscretionaryOptions * discretionaryOptions; 
@property (nonatomic,retain) NSError * cancelError;                                                                           //@synthesize cancelError=_cancelError - In the implementation block
@property (nonatomic,readonly) CKOperationConfiguration * resolvedConfiguration;                                              //@synthesize resolvedConfiguration=_resolvedConfiguration - In the implementation block
@property (retain) CKPlaceholderOperation * placeholderOperation;                                                             //@synthesize placeholderOperation=_placeholderOperation - In the implementation block
@property (nonatomic,copy) NSString * operationID;                                                                            //@synthesize operationID=_operationID - In the implementation block
@property (assign,nonatomic) BOOL isExecuting; 
@property (assign,nonatomic) BOOL isFinished;                                                                                 //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,readonly) BOOL isFinishingOnCallbackQueue;                                                               //@synthesize isFinishingOnCallbackQueue=_isFinishingOnCallbackQueue - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                                                      //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) BOOL clouddConnectionInterrupted;                                                                //@synthesize clouddConnectionInterrupted=_clouddConnectionInterrupted - In the implementation block
@property (assign,nonatomic) BOOL isDiscretionarySuspended;                                                                   //@synthesize isDiscretionarySuspended=_isDiscretionarySuspended - In the implementation block
@property (nonatomic,retain) NSString * sectionID;                                                                            //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,readonly) NSString * parentSectionID;                                                                    //@synthesize parentSectionID=_parentSectionID - In the implementation block
@property (nonatomic,readonly) id context;                                                                                    //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) CKOperationInfo * operationInfo; 
@property (nonatomic,retain) CKOperationMetrics * metrics;                                                                    //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,copy) id requestCompletedBlock;                                                                          //@synthesize requestCompletedBlock=_requestCompletedBlock - In the implementation block
@property (assign) BOOL queueHasStarted;                                                                                      //@synthesize queueHasStarted=_queueHasStarted - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier; 
@property (nonatomic,retain) NSString * sourceApplicationSecondaryIdentifier; 
@property (assign,nonatomic) BOOL preferAnonymousRequests; 
@property (assign,nonatomic) BOOL allowsBackgroundNetworking; 
@property (nonatomic,retain) NSDictionary * additionalRequestHTTPHeaders; 
@property (nonatomic,readonly) NSArray * requestUUIDs; 
@property (nonatomic,readonly) NSDictionary * responseHTTPHeadersByRequestUUID; 
@property (nonatomic,readonly) NSDictionary * w3cNavigationTimingByRequestUUID; 
@property (nonatomic,retain) NSString * deviceIdentifier;                                                                     //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) CKOperationMMCSRequestOptions * MMCSRequestOptions;                                              //@synthesize MMCSRequestOptions=_MMCSRequestOptions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_activity> osActivity;                                                            //@synthesize osActivity=_osActivity - In the implementation block
@property (nonatomic,retain) id clientVoucher;                                                                                //@synthesize clientVoucher=_clientVoucher - In the implementation block
@property (nonatomic,readonly) NSString * flowControlKey; 
@property (nonatomic,copy) CKOperationConfiguration * configuration;                                                          //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) CKOperationGroup * group;                                                                        //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) id longLivedOperationWasPersistedBlock;                                                            //@synthesize longLivedOperationWasPersistedBlock=_longLivedOperationWasPersistedBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)container;
-(void)setContainer:(id)arg1 ;
-(void)setGroup:(CKOperationGroup *)arg1 ;
-(NSError *)error;
-(void)cancel;
-(void)start;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(id)context;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setTimeoutIntervalForResource:(double)arg1 ;
-(void)_start;
-(NSString *)deviceIdentifier;
-(void)finishWithError:(id)arg1 ;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(void)setConfiguration:(CKOperationConfiguration *)arg1 ;
-(CKOperationGroup *)group;
-(CKOperationMetrics *)metrics;
-(CKOperationConfiguration *)configuration;
-(double)timeoutIntervalForResource;
-(void)setTimeoutIntervalForRequest:(double)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setMetrics:(CKOperationMetrics *)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(BOOL)allowsCellularAccess;
-(double)timeoutIntervalForRequest;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(NSString *)operationID;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(BOOL)queueHasStarted;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(id)daemon;
-(CKOperationInfo *)operationInfo;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(CKOperationConfiguration *)resolvedConfiguration;
-(BOOL)isLongLived;
-(Class)operationInfoClass;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(CKDiscretionaryOptions *)discretionaryOptions;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(Class)operationClass;
-(void)_handleCompletionCallback:(id)arg1 ;
-(NSString *)flowControlKey;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)_setIsExecuting:(BOOL)arg1 ;
-(void)_setIsFinished:(BOOL)arg1 ;
-(void)setQueueHasStarted:(BOOL)arg1 ;
-(BOOL)isOutstandingOperation;
-(NSObject*<OS_os_activity>)osActivity;
-(NSError *)cancelError;
-(CKEventMetric *)operationMetric;
-(void)cancelWithUnderlyingError:(id)arg1 ;
-(void)setSystemScheduler:(unsigned long long)arg1 ;
-(void)setDuetPreClearedMode:(unsigned long long)arg1 ;
-(void)setXpcActivityEligibilityChangedHandler:(xpc_activity_eligibility_changed_handler_sRef)arg1 ;
-(BOOL)_wantsFlowControl;
-(void)_handleProgressCallback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)requestCompletedBlock;
-(void)setSavedRequestUUIDs:(NSMutableArray *)arg1 ;
-(void)setSavedResponseHTTPHeadersByRequestUUID:(NSMutableDictionary *)arg1 ;
-(void)setSavedW3CNavigationTimingByRequestUUID:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)savedRequestUUIDs;
-(NSMutableDictionary *)savedResponseHTTPHeadersByRequestUUID;
-(NSMutableDictionary *)savedW3CNavigationTimingByRequestUUID;
-(void)setRequestCompletedBlock:(id)arg1 ;
-(void)_handleStatisticsCallback:(id)arg1 ;
-(void)_handleCheckpointCallback:(id)arg1 ;
-(BOOL)failedToScheduleDiscretionaryOperation;
-(BOOL)runningDiscretionaryOperation;
-(void)setRunningDiscretionaryOperation:(BOOL)arg1 ;
-(void)setPlaceholderOperation:(CKPlaceholderOperation *)arg1 ;
-(unsigned long long)duetPreClearedMode;
-(BOOL)usesBackgroundSession;
-(void)_handleDiscretionarySuspensionCallback;
-(void)setDiscretionaryWhenBackgroundedState:(unsigned long long)arg1 ;
-(void)setFailedToScheduleDiscretionaryOperation:(BOOL)arg1 ;
-(CKPlaceholderOperation *)placeholderOperation;
-(void)setOperationID:(NSString *)arg1 ;
-(unsigned long long)discretionaryWhenBackgroundedState;
-(unsigned long long)systemScheduler;
-(void)setIsOutstandingOperation:(BOOL)arg1 ;
-(CKOperationMMCSRequestOptions *)MMCSRequestOptions;
-(void)setMMCSRequestOptions:(CKOperationMMCSRequestOptions *)arg1 ;
-(void)setLongLived:(BOOL)arg1 ;
-(NSString *)parentSectionID;
-(void)setCancelError:(NSError *)arg1 ;
-(void)_cancelDaemonOperation;
-(void)_finishInternalOnCallbackQueueWithError:(id)arg1 ;
-(void)setIsDiscretionarySuspended:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutSource;
-(void)setTimeoutSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_uninstallTimeoutSource;
-(id)_findBestThrottleError:(id)arg1 ;
-(void)_installTimeoutSource;
-(void)_handleRemoteProxyFailureWithError:(id)arg1 ;
-(id)longLivedOperationWasPersistedBlock;
-(void)setClouddConnectionInterrupted:(BOOL)arg1 ;
-(void)processOperationResult:(id)arg1 ;
-(void)setLongLivedOperationWasPersistedBlock:(id)arg1 ;
-(BOOL)preferAnonymousRequests;
-(void)setPreferAnonymousRequests:(BOOL)arg1 ;
-(BOOL)allowsBackgroundNetworking;
-(void)setAllowsBackgroundNetworking:(BOOL)arg1 ;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(NSArray *)requestUUIDs;
-(NSDictionary *)responseHTTPHeadersByRequestUUID;
-(NSDictionary *)w3cNavigationTimingByRequestUUID;
-(void)setUsesBackgroundSession:(BOOL)arg1 ;
-(xpc_activity_eligibility_changed_handler_sRef)xpcActivityEligibilityChangedHandler;
-(BOOL)isFinishingOnCallbackQueue;
-(BOOL)clouddConnectionInterrupted;
-(BOOL)isDiscretionarySuspended;
-(void)setOsActivity:(NSObject*<OS_os_activity>)arg1 ;
-(id)clientVoucher;
-(void)setClientVoucher:(id)arg1 ;
@end

