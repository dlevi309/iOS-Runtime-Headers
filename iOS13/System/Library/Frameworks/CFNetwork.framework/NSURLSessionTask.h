/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol OS_nw_activity, __NSURLSessionTaskGroupForConfiguration;
@class NSProgress, NSObject, __CFN_TaskMetrics, NSDate, NSURLSessionEffectiveConfiguration, NSURLRequest, NSURL, NSURLResponse, NSError, NSURLSession, NSString, __CFN_TransactionMetrics, NSDictionary, NSArray, NSUUID, NSURLSessionTaskHTTPAuthenticator, NSURLSessionTaskDependencyTree, NSURLSessionTaskDependency, NSData;

@interface NSURLSessionTask : NSObject <NSCopying, NSProgressReporting> {

	NSObject*<OS_nw_activity> _nw_activity_ivar;
	__CFN_TaskMetrics* _metrics_ivar;
	NSDate* earliestBeginDate;
	NSObject*<OS_nw_activity> _private_nw_activity;
	id<__NSURLSessionTaskGroupForConfiguration> __taskGroup;

}

@property (copy,readonly) NSURLSessionEffectiveConfiguration * _effectiveConfiguration; 
@property (assign) unsigned long long taskIdentifier; 
@property (copy) NSURLRequest * originalRequest; 
@property (copy) NSURLRequest * currentRequest; 
@property (retain,readonly) NSURL * currentRequest_URL; 
@property (retain,readonly) NSURL * currentRequest_mainDocumentURL; 
@property (copy) NSURLResponse * response; 
@property (assign) long long countOfBytesReceived; 
@property (assign) long long countOfBytesSent; 
@property (assign) long long countOfBytesExpectedToSend; 
@property (assign) long long countOfBytesExpectedToReceive; 
@property (assign) long long state; 
@property (copy) NSError * error; 
@property (assign) double startTime; 
@property (retain,readonly) id<__NSURLSessionTaskGroupForConfiguration> _taskGroup;                      //@synthesize _taskGroup=__taskGroup - In the implementation block
@property (retain,readonly) NSURLSession * session; 
@property (retain,readonly) NSObject*<OS_dispatch_queue> workQueue; 
@property (assign) long long _priorityValue; 
@property (assign) double _loadingPriorityValue; 
@property (nonatomic,readonly) NSString * _loggableDescription; 
@property (retain) __CFN_TransactionMetrics * _backgroundTransactionMetrics; 
@property (assign) BOOL _shouldSkipPreferredClientCertificateLookup; 
@property (assign) BOOL _cacheOnly; 
@property (assign) BOOL _preventsSystemHTTPProxyAuthentication; 
@property (assign) BOOL _requiresSecureHTTPSProxyConnection; 
@property (assign) BOOL _preventsAppSSO; 
@property (assign) BOOL _appSSOFallback; 
@property (assign) BOOL _appleIDContextRedirect; 
@property (copy) NSDictionary * _legacySocketStreamProperties; 
@property (retain) CFHSTSPolicyRef _cfHSTS; 
@property (retain) const CFURLCacheRef _cfCache; 
@property (retain) CFURLCredentialStorageRef _cfCreds; 
@property (retain) OpaqueCFHTTPCookieStorageRef _cfCookies; 
@property (assign) unsigned long long _cachePolicy; 
@property (assign) double _timeoutInterval; 
@property (copy) NSDictionary * _proxySettings; 
@property (copy) NSDictionary * _sslSettings; 
@property (assign) BOOL _shouldPipelineHTTP; 
@property (assign) BOOL _shouldUsePipelineHeuristics; 
@property (assign) BOOL _shouldSkipPipelineProbe; 
@property (assign) BOOL _shouldHandleCookies; 
@property (assign) int _cookieAcceptPolicy; 
@property (assign) BOOL _preventsIdleSystemSleep; 
@property (copy) NSArray * _contentDispositionFallbackArray; 
@property (assign) BOOL _allowsCellular; 
@property (assign) int _networkServiceType; 
@property (assign,nonatomic) unsigned _qos; 
@property (retain) NSObject*<OS_voucher> _voucher; 
@property (assign) BOOL _prohibitAuthUI; 
@property (assign) BOOL _strictContentLength; 
@property (assign) long long _suspensionThreshhold; 
@property (copy) NSString * _boundInterfaceIdentifier; 
@property (assign) BOOL _disallowCellular; 
@property (assign) int _allowsExpensiveOverride; 
@property (assign) int _allowsConstrainedOverride; 
@property (assign) int _allowsCellularOverride; 
@property (assign) unsigned long long _allowedProtocolTypes; 
@property (assign) long long _requestPriority; 
@property (assign) long long _expectedWorkload; 
@property (assign) double _timeWindowDelay; 
@property (assign) double _timeWindowDuration; 
@property (copy) NSUUID * _uniqueIdentifier; 
@property (assign) unsigned _powerAssertion; 
@property (assign) unsigned _darkWakePowerAssertion; 
@property (setter=_setConnectionIsCellular:) BOOL _connectionIsCellular; 
@property (assign) BOOL _connectionIsCompanionLink; 
@property (assign,nonatomic) id _protocolForTask; 
@property (copy) NSURLSessionTaskHTTPAuthenticator * authenticator; 
@property (assign) BOOL _authenticatorConfiguredViaTaskProperty; 
@property (nonatomic,retain) NSDictionary * _dependencyInfo; 
@property (copy) NSDictionary * _DuetActivityProperties; 
@property (nonatomic,retain) NSURLSessionTaskDependencyTree * dependencyTree; 
@property (nonatomic,retain) NSURLSessionTaskDependency * taskDependency; 
@property (nonatomic,retain) NSURL * _backgroundPublishingURL; 
@property (assign) BOOL _extractorFinishedDecoding; 
@property (assign) BOOL _extractorPreparedForExtraction; 
@property (assign) long long _countOfPendingBytesReceivedEncoded; 
@property (assign,nonatomic) BOOL _preconnect; 
@property (nonatomic,readonly) BOOL _isAVAssetTask; 
@property (retain) NSObject*<OS_nw_activity> _private_nw_activity;                                       //@synthesize private_nw_activity=_private_nw_activity - In the implementation block
@property (retain) __CFN_TaskMetrics * _metrics;                                                         //@synthesize metrics_ivar=_metrics_ivar - In the implementation block
@property (nonatomic,copy) id _httpConnectionInfoCompletionBlock; 
@property (retain) NSObject*<OS_nw_activity> _nw_activity;                                               //@synthesize nw_activity_ivar=_nw_activity_ivar - In the implementation block
@property (assign) long long _priority; 
@property (assign) double _loadingPriority; 
@property (assign) long long _bytesPerSecondLimit; 
@property (assign,nonatomic) unsigned long long _expectedProgressTarget; 
@property (assign,nonatomic) BOOL _shouldReportTimingDataToAWD; 
@property (assign) double _timeoutIntervalForResource; 
@property (copy) NSString * _storagePartitionIdentifier; 
@property (retain) NSURL * _siteForCookies; 
@property (assign) BOOL _isTopLevelNavigation; 
@property (copy) NSString * _pathToDownloadTaskFile; 
@property (nonatomic,retain) NSDictionary * _trailers; 
@property (copy) NSData * _TCPConnectionMetadata; 
@property (assign) unsigned short _TLSMinimumSupportedProtocolVersion; 
@property (assign) unsigned short _TLSMaximumSupportedProtocolVersion; 
@property (readonly) unsigned short _TLSNegotiatedCipherSuite; 
@property (assign,nonatomic) BOOL _allowsQUIC; 
@property (setter=set_extractor:,nonatomic,retain) id<SZExtractor> _extractor; 
@property (assign,nonatomic) BOOL _hasSZExtractor; 
@property (assign,nonatomic) BOOL _doesSZExtractorConsumeExtractedData; 
@property (setter=_setAppleIDContext:,copy) id<NSURLSessionAppleIDContext> _appleIDContext; 
@property (nonatomic,retain) NSURL * _publishingURL; 
@property (assign) long long _countOfBytesReceivedEncoded; 
@property (nonatomic,copy) NSString * _APSRelayTopic; 
@property (assign,nonatomic) long long _discretionaryOverride; 
@property (readonly) NSProgress * progress; 
@property (copy) NSDate * earliestBeginDate; 
@property (assign) long long countOfBytesClientExpectsToSend; 
@property (assign) long long countOfBytesClientExpectsToReceive; 
@property (copy) NSString * taskDescription; 
@property (assign) float priority; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)cancel;
-(void)resume;
-(void)suspend;
-(__CFN_TaskMetrics *)_metrics;
-(NSURLSession *)session;
-(NSObject*<OS_nw_activity>)_nw_activity;
-(void)set_nw_activity:(NSObject*<OS_nw_activity>)arg1 ;
-(CFHSTSPolicyRef)_copyHSTSPolicy;
-(void)_withXURLCache:(/*^block*/id)arg1 ;
-(const XCookieStorage*)_createXCookieStorage;
-(const XCredentialStorage*)_createXCredentialStorage;
-(BOOL)shouldHandleCookiesAndSchemeIsAppropriate;
-(NSString *)_loggableDescription;
-(void)updateCurrentRequest:(id)arg1 ;
-(void)_onSessionQueue_cleanupAndBreakCycles;
-(void)_onqueue_adjustPriorityHint:(float)arg1 ;
-(void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1 ;
-(void)_onqueue_expectedProgressTargetChanged;
-(BOOL)_needSendingMetrics;
-(void)_didSendMetrics;
-(void)_onqueue_releasePowerAsssertion;
-(long long)computeAdjustedPoolPriority;
-(id<__NSURLSessionTaskGroupForConfiguration>)_taskGroup;
-(void)_finishProgressReporting;
-(void)_onqueue_adoptEffectiveConfiguration:(id)arg1 ;
-(void)setEarliestBeginDate:(NSDate *)arg1 ;
-(NSDate *)earliestBeginDate;
-(const CFDictionaryRef)_copySocketStreamProperties;
-(void)set_metrics:(__CFN_TaskMetrics *)arg1 ;
-(void)_consumePendingBytesReceivedEncoded;
-(void)_setExplicitStorageSession:(CFURLStorageSessionRef)arg1 ;
-(void)_setExplicitCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(BOOL)_isAVAssetTask;
-(NSObject*<OS_nw_activity>)_private_nw_activity;
-(void)_getAuthenticationHeadersForResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)set_TLSNegotiatedCipherSuite:(unsigned short)arg1 ;
-(void)_takePreventIdleSleepAssertionIfAppropriate;
-(const CFSetRef)_getAuthenticatorStatusCodes;
-(void)_releasePreventIdleSleepAssertionIfAppropriate;
-(const CFDictionaryRef)_copyATSState;
-(void)_adoptEffectiveConfiguration:(id)arg1 ;
-(id)initWithTaskGroup:(id)arg1 ;
-(void)_logUnimplemented:(SEL)arg1 ;
-(void)initializeHTTPAuthenticatorWithAppleIDContext:(id)arg1 statusCodes:(id)arg2 ;
-(void)_setSocketProperties:(CFDictionaryRef)arg1 connectionProperties:(CFDictionaryRef)arg2 ;
-(void)_setBytesPerSecondLimit:(long long)arg1 ;
-(void)_completeUploadProgress;
-(void)_appendCountOfPendingBytesReceivedEncoded:(long long)arg1 ;
-(void)set_private_nw_activity:(NSObject*<OS_nw_activity>)arg1 ;
-(void)getUnderlyingHTTPConnectionInfoWithCompletionHandler:(/*^block*/id)arg1 ;
@end

