/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol OS_voucher, SZExtractor, NSURLSessionAppleIDContext, OS_nw_endpoint, __NSURLSessionTaskGroupForConfiguration, OS_nw_activity;
@class NSProgress, NSString, NSURLRequest, NSURLResponse, NSError, __CFN_TransactionMetrics, NSDictionary, NSArray, NSObject, NSUUID, NSURLSessionTaskHTTPAuthenticator, NSURLSessionTaskDependencyTree, NSURLSessionTaskDependency, NSData, NSURL, NSURLSessionEffectiveConfiguration, NSDate, __CFN_TaskMetrics, NSURLSession;

@interface NSURLSessionTask : NSObject <NSCopying, NSProgressReporting> {

	NSProgress* _uploadProgress;
	NSProgress* _downloadProgress;
	CFDictionaryRef _atsStateCache;
	os_unfair_lock_s _unfair_lock;
	BOOL _isInUpload;
	BOOL _undeterminedUploadProgressState;
	BOOL _undeterminedDownloadProgressState;
	BOOL _progressReportingFinished;
	BOOL _seenFirstResume;
	BOOL _shouldSkipPreferredClientCertificateLookup;
	BOOL _cacheOnly;
	BOOL _preventsSystemHTTPProxyAuthentication;
	BOOL _requiresSecureHTTPSProxyConnection;
	BOOL _preventsAppSSO;
	BOOL _appSSOFallback;
	BOOL _appleIDContextRedirect;
	BOOL _shouldPipelineHTTP;
	BOOL _shouldUsePipelineHeuristics;
	BOOL _shouldSkipPipelineProbe;
	BOOL _shouldHandleCookies;
	BOOL _preventsIdleSystemSleep;
	BOOL _allowsCellular;
	BOOL _prohibitAuthUI;
	BOOL _strictContentLength;
	BOOL _connectionIsCellular;
	BOOL _connectionIsCompanionLink;
	BOOL _allowsQUIC;
	BOOL _extractorFinishedDecoding;
	BOOL _extractorPreparedForExtraction;
	BOOL _hasSZExtractor;
	BOOL _doesSZExtractorConsumeExtractedData;
	BOOL _authenticatorConfiguredViaTaskProperty;
	BOOL _isTopLevelNavigation;
	BOOL _disallowCellular;
	BOOL _knownHTTP3Capable;
	BOOL _preconnect;
	BOOL _prefersIncrementalDeliveryAPIStorage;
	unsigned short __TLSMinimumSupportedProtocolVersion;
	unsigned short __TLSMaximumSupportedProtocolVersion;
	unsigned short _TLSNegotiatedCipherSuite;
	int _cookieAcceptPolicy;
	unsigned _qos;
	unsigned _powerAssertion;
	unsigned _darkWakePowerAssertion;
	int _allowsCellularOverride;
	int _allowsExpensiveOverride;
	int _allowsConstrainedOverride;
	int _networkServiceType;
	float _priorityAPIStorage;
	unsigned long long _taskIdentifier;
	NSString* _taskDescription;
	NSString* _loggableDescription;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	NSURLResponse* _response;
	long long _countOfBytesClientExpectsToSend;
	long long _countOfBytesClientExpectsToReceive;
	long long _countOfBytesReceived;
	long long __countOfPendingBytesReceivedEncoded;
	long long __countOfBytesReceivedEncoded;
	long long _countOfBytesSent;
	long long _countOfBytesExpectedToSend;
	long long _countOfBytesExpectedToReceive;
	long long _state;
	NSError* _error;
	double _startTime;
	long long _priorityValue;
	double _loadingPriorityValue;
	__CFN_TransactionMetrics* _backgroundTransactionMetrics;
	NSString* _pathToDownloadTaskFile;
	CFHSTSPolicyRef _cfHSTS;
	const CFURLCacheRef _cfCache;
	CFURLCredentialStorageRef _cfCreds;
	OpaqueCFHTTPCookieStorageRef _cfCookies;
	unsigned long long _cachePolicy;
	double _timeoutInterval;
	double _timeoutIntervalForResource_ivar;
	NSDictionary* _proxySettings;
	NSDictionary* _sslSettings;
	NSArray* _contentDispositionFallbackArray;
	NSObject*<OS_voucher> _voucher;
	long long _suspensionThreshhold;
	unsigned long long _allowedProtocolTypes;
	long long _requestPriority;
	NSUUID* _uniqueIdentifier;
	NSString* _storagePartitionIdentifier;
	id _protocolForTask;
	NSURLSessionTaskHTTPAuthenticator* _authenticator;
	NSDictionary* _dependencyInfo_ivar;
	NSURLSessionTaskDependencyTree* _dependencyTree;
	NSURLSessionTaskDependency* _taskDependency;
	NSDictionary* _DuetActivityProperties;
	NSData* __TCPConnectionMetadata;
	NSDictionary* _trailers;
	long long _discretionaryOverride;
	id<SZExtractor> _extractor;
	id<NSURLSessionAppleIDContext> _appleIDContext;
	NSURL* _publishingURL;
	NSURL* _backgroundPublishingURL;
	NSString* _APSRelayTopic;
	NSURL* _siteForCookies;
	/*^block*/id _httpConnectionInfoCompletionBlock;
	NSObject*<OS_nw_endpoint> _hostOverride;
	id<__NSURLSessionTaskGroupForConfiguration> __taskGroup;
	NSURLSessionEffectiveConfiguration* _effectiveConfiguration;
	NSDate* earliestBeginDate;
	NSProgress* _progress;
	__CFN_TaskMetrics* _metrics;
	NSObject*<OS_nw_activity> _nw_activity;
	NSObject*<OS_nw_activity> _private_nw_activity;
	NSDictionary* _legacySocketStreamProperties;
	NSDictionary* _cachedSocketStreamProperties;
	long long _bytesPerSecondLimitValue;
	unsigned long long _expectedProgressTargetValue;
	long long _expectedWorkload;
	double _timeWindowDelay;
	double _timeWindowDuration;
	NSString* _boundInterfaceIdentifier;
	NSArray* _resolvedCNAMEChain;
	/*^block*/id _cookieTransformCallback;

}

@property (copy,readonly) NSURLSessionEffectiveConfiguration * _effectiveConfiguration; 
@property (assign) unsigned long long taskIdentifier;                                                    //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (copy) NSURLRequest * originalRequest;                                                         //@synthesize originalRequest=_originalRequest - In the implementation block
@property (copy) NSURLRequest * currentRequest;                                                          //@synthesize currentRequest=_currentRequest - In the implementation block
@property (retain,readonly) NSURL * currentRequest_URL; 
@property (retain,readonly) NSURL * currentRequest_mainDocumentURL; 
@property (copy) NSURLResponse * response;                                                               //@synthesize response=_response - In the implementation block
@property (assign) long long countOfBytesReceived;                                                       //@synthesize countOfBytesReceived=_countOfBytesReceived - In the implementation block
@property (assign) long long countOfBytesSent;                                                           //@synthesize countOfBytesSent=_countOfBytesSent - In the implementation block
@property (assign) long long countOfBytesExpectedToSend;                                                 //@synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend - In the implementation block
@property (assign) long long countOfBytesExpectedToReceive;                                              //@synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive - In the implementation block
@property (assign) long long state;                                                                      //@synthesize state=_state - In the implementation block
@property (copy) NSError * error;                                                                        //@synthesize error=_error - In the implementation block
@property (assign) double startTime;                                                                     //@synthesize startTime=_startTime - In the implementation block
@property (retain,readonly) id<__NSURLSessionTaskGroupForConfiguration> _taskGroup;                      //@synthesize _taskGroup=__taskGroup - In the implementation block
@property (retain,readonly) NSURLSession * session; 
@property (retain,readonly) NSObject*<OS_dispatch_queue> workQueue; 
@property (assign) long long _priorityValue;                                                             //@synthesize priorityValue=_priorityValue - In the implementation block
@property (assign) double _loadingPriorityValue;                                                         //@synthesize loadingPriorityValue=_loadingPriorityValue - In the implementation block
@property (nonatomic,readonly) NSString * _description; 
@property (nonatomic,readonly) NSString * _loggableDescription;                                          //@synthesize loggableDescription=_loggableDescription - In the implementation block
@property (retain) __CFN_TransactionMetrics * _backgroundTransactionMetrics;                             //@synthesize backgroundTransactionMetrics=_backgroundTransactionMetrics - In the implementation block
@property (assign) BOOL _shouldSkipPreferredClientCertificateLookup;                                     //@synthesize shouldSkipPreferredClientCertificateLookup=_shouldSkipPreferredClientCertificateLookup - In the implementation block
@property (assign) BOOL _cacheOnly;                                                                      //@synthesize cacheOnly=_cacheOnly - In the implementation block
@property (assign) BOOL _preventsSystemHTTPProxyAuthentication;                                          //@synthesize preventsSystemHTTPProxyAuthentication=_preventsSystemHTTPProxyAuthentication - In the implementation block
@property (assign) BOOL _requiresSecureHTTPSProxyConnection;                                             //@synthesize requiresSecureHTTPSProxyConnection=_requiresSecureHTTPSProxyConnection - In the implementation block
@property (assign) BOOL _preventsAppSSO;                                                                 //@synthesize preventsAppSSO=_preventsAppSSO - In the implementation block
@property (assign) BOOL _appSSOFallback;                                                                 //@synthesize appSSOFallback=_appSSOFallback - In the implementation block
@property (assign) BOOL _appleIDContextRedirect;                                                         //@synthesize appleIDContextRedirect=_appleIDContextRedirect - In the implementation block
@property (copy) NSDictionary * _legacySocketStreamProperties;                                           //@synthesize legacySocketStreamProperties=_legacySocketStreamProperties - In the implementation block
@property (copy) NSDictionary * _cachedSocketStreamProperties;                                           //@synthesize cachedSocketStreamProperties=_cachedSocketStreamProperties - In the implementation block
@property (retain) CFHSTSPolicyRef _cfHSTS;                                                              //@synthesize cfHSTS=_cfHSTS - In the implementation block
@property (retain) const CFURLCacheRef _cfCache;                                                         //@synthesize cfCache=_cfCache - In the implementation block
@property (retain) CFURLCredentialStorageRef _cfCreds;                                                   //@synthesize cfCreds=_cfCreds - In the implementation block
@property (retain) OpaqueCFHTTPCookieStorageRef _cfCookies;                                              //@synthesize cfCookies=_cfCookies - In the implementation block
@property (assign) unsigned long long _cachePolicy;                                                      //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (assign) double _timeoutInterval;                                                              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (copy) NSDictionary * _proxySettings;                                                          //@synthesize proxySettings=_proxySettings - In the implementation block
@property (copy) NSDictionary * _sslSettings;                                                            //@synthesize sslSettings=_sslSettings - In the implementation block
@property (assign) BOOL _shouldPipelineHTTP;                                                             //@synthesize shouldPipelineHTTP=_shouldPipelineHTTP - In the implementation block
@property (assign) BOOL _shouldUsePipelineHeuristics;                                                    //@synthesize shouldUsePipelineHeuristics=_shouldUsePipelineHeuristics - In the implementation block
@property (assign) BOOL _shouldSkipPipelineProbe;                                                        //@synthesize shouldSkipPipelineProbe=_shouldSkipPipelineProbe - In the implementation block
@property (assign) BOOL _shouldHandleCookies;                                                            //@synthesize shouldHandleCookies=_shouldHandleCookies - In the implementation block
@property (assign) int _cookieAcceptPolicy;                                                              //@synthesize cookieAcceptPolicy=_cookieAcceptPolicy - In the implementation block
@property (assign) BOOL _preventsIdleSystemSleep;                                                        //@synthesize preventsIdleSystemSleep=_preventsIdleSystemSleep - In the implementation block
@property (copy) NSArray * _contentDispositionFallbackArray;                                             //@synthesize contentDispositionFallbackArray=_contentDispositionFallbackArray - In the implementation block
@property (assign) BOOL _allowsCellular;                                                                 //@synthesize allowsCellular=_allowsCellular - In the implementation block
@property (assign) int _networkServiceType;                                                              //@synthesize networkServiceType=_networkServiceType - In the implementation block
@property (assign,nonatomic) unsigned _qos;                                                              //@synthesize qos=_qos - In the implementation block
@property (retain) NSObject*<OS_voucher> _voucher;                                                       //@synthesize voucher=_voucher - In the implementation block
@property (assign) BOOL _prohibitAuthUI;                                                                 //@synthesize prohibitAuthUI=_prohibitAuthUI - In the implementation block
@property (assign) BOOL _strictContentLength;                                                            //@synthesize strictContentLength=_strictContentLength - In the implementation block
@property (assign) long long _suspensionThreshhold;                                                      //@synthesize suspensionThreshhold=_suspensionThreshhold - In the implementation block
@property (copy) NSString * _boundInterfaceIdentifier;                                                   //@synthesize boundInterfaceIdentifier=_boundInterfaceIdentifier - In the implementation block
@property (assign) BOOL _disallowCellular;                                                               //@synthesize disallowCellular=_disallowCellular - In the implementation block
@property (assign) int _allowsExpensiveOverride;                                                         //@synthesize allowsExpensiveOverride=_allowsExpensiveOverride - In the implementation block
@property (assign) int _allowsConstrainedOverride;                                                       //@synthesize allowsConstrainedOverride=_allowsConstrainedOverride - In the implementation block
@property (assign) int _allowsCellularOverride;                                                          //@synthesize allowsCellularOverride=_allowsCellularOverride - In the implementation block
@property (assign) BOOL _knownHTTP3Capable;                                                              //@synthesize knownHTTP3Capable=_knownHTTP3Capable - In the implementation block
@property (assign) unsigned long long _allowedProtocolTypes;                                             //@synthesize allowedProtocolTypes=_allowedProtocolTypes - In the implementation block
@property (assign) long long _requestPriority;                                                           //@synthesize requestPriority=_requestPriority - In the implementation block
@property (assign) long long _expectedWorkload;                                                          //@synthesize expectedWorkload=_expectedWorkload - In the implementation block
@property (assign) double _timeWindowDelay;                                                              //@synthesize timeWindowDelay=_timeWindowDelay - In the implementation block
@property (assign) double _timeWindowDuration;                                                           //@synthesize timeWindowDuration=_timeWindowDuration - In the implementation block
@property (copy) NSUUID * _uniqueIdentifier;                                                             //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign) unsigned _powerAssertion;                                                             //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (assign) unsigned _darkWakePowerAssertion;                                                     //@synthesize darkWakePowerAssertion=_darkWakePowerAssertion - In the implementation block
@property (setter=_setConnectionIsCellular:) BOOL _connectionIsCellular;                                 //@synthesize connectionIsCellular=_connectionIsCellular - In the implementation block
@property (assign) BOOL _connectionIsCompanionLink;                                                      //@synthesize connectionIsCompanionLink=_connectionIsCompanionLink - In the implementation block
@property (assign,nonatomic) id _protocolForTask;                                                        //@synthesize protocolForTask=_protocolForTask - In the implementation block
@property (copy) NSURLSessionTaskHTTPAuthenticator * authenticator;                                      //@synthesize authenticator=_authenticator - In the implementation block
@property (assign) BOOL _authenticatorConfiguredViaTaskProperty;                                         //@synthesize authenticatorConfiguredViaTaskProperty=_authenticatorConfiguredViaTaskProperty - In the implementation block
@property (nonatomic,retain) NSDictionary * _dependencyInfo;                                             //@synthesize dependencyInfo_ivar=_dependencyInfo_ivar - In the implementation block
@property (copy) NSDictionary * _DuetActivityProperties;                                                 //@synthesize DuetActivityProperties=_DuetActivityProperties - In the implementation block
@property (nonatomic,retain) NSURLSessionTaskDependencyTree * dependencyTree;                            //@synthesize dependencyTree=_dependencyTree - In the implementation block
@property (nonatomic,retain) NSURLSessionTaskDependency * taskDependency;                                //@synthesize taskDependency=_taskDependency - In the implementation block
@property (nonatomic,retain) NSURL * _backgroundPublishingURL;                                           //@synthesize backgroundPublishingURL=_backgroundPublishingURL - In the implementation block
@property (assign) BOOL _extractorFinishedDecoding;                                                      //@synthesize extractorFinishedDecoding=_extractorFinishedDecoding - In the implementation block
@property (assign) BOOL _extractorPreparedForExtraction;                                                 //@synthesize extractorPreparedForExtraction=_extractorPreparedForExtraction - In the implementation block
@property (assign) long long _countOfPendingBytesReceivedEncoded;                                        //@synthesize _countOfPendingBytesReceivedEncoded=__countOfPendingBytesReceivedEncoded - In the implementation block
@property (assign,nonatomic) BOOL _preconnect;                                                           //@synthesize preconnect=_preconnect - In the implementation block
@property (nonatomic,readonly) BOOL _isAVAssetTask; 
@property (retain) NSObject*<OS_nw_activity> _private_nw_activity;                                       //@synthesize private_nw_activity=_private_nw_activity - In the implementation block
@property (retain) __CFN_TaskMetrics * _metrics;                                                         //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,copy) id _httpConnectionInfoCompletionBlock;                                        //@synthesize httpConnectionInfoCompletionBlock=_httpConnectionInfoCompletionBlock - In the implementation block
@property (nonatomic,copy) NSURLSessionEffectiveConfiguration * _effectiveConfiguration;                 //@synthesize effectiveConfiguration=_effectiveConfiguration - In the implementation block
@property (assign) BOOL prefersIncrementalDelivery; 
@property (retain) NSObject*<OS_nw_activity> _nw_activity;                                               //@synthesize nw_activity=_nw_activity - In the implementation block
@property (assign) long long _priority; 
@property (assign) double _loadingPriority; 
@property (assign) long long _bytesPerSecondLimit;                                                       //@synthesize bytesPerSecondLimitValue=_bytesPerSecondLimitValue - In the implementation block
@property (assign,nonatomic) unsigned long long _expectedProgressTarget;                                 //@synthesize expectedProgressTargetValue=_expectedProgressTargetValue - In the implementation block
@property (assign) double _timeoutIntervalForResource;                                                   //@synthesize timeoutIntervalForResource_ivar=_timeoutIntervalForResource_ivar - In the implementation block
@property (copy) NSString * _storagePartitionIdentifier;                                                 //@synthesize storagePartitionIdentifier=_storagePartitionIdentifier - In the implementation block
@property (retain) NSURL * _siteForCookies;                                                              //@synthesize siteForCookies=_siteForCookies - In the implementation block
@property (assign) BOOL _isTopLevelNavigation;                                                           //@synthesize isTopLevelNavigation=_isTopLevelNavigation - In the implementation block
@property (copy) NSString * _pathToDownloadTaskFile;                                                     //@synthesize pathToDownloadTaskFile=_pathToDownloadTaskFile - In the implementation block
@property (nonatomic,retain) NSDictionary * _trailers;                                                   //@synthesize trailers=_trailers - In the implementation block
@property (copy) NSData * _TCPConnectionMetadata;                                                        //@synthesize _TCPConnectionMetadata=__TCPConnectionMetadata - In the implementation block
@property (assign) unsigned short _TLSMinimumSupportedProtocolVersion;                                   //@synthesize _TLSMinimumSupportedProtocolVersion=__TLSMinimumSupportedProtocolVersion - In the implementation block
@property (assign) unsigned short _TLSMaximumSupportedProtocolVersion;                                   //@synthesize _TLSMaximumSupportedProtocolVersion=__TLSMaximumSupportedProtocolVersion - In the implementation block
@property (readonly) unsigned short _TLSNegotiatedCipherSuite;                                           //@synthesize TLSNegotiatedCipherSuite=_TLSNegotiatedCipherSuite - In the implementation block
@property (assign,nonatomic) BOOL _allowsQUIC;                                                           //@synthesize allowsQUIC=_allowsQUIC - In the implementation block
@property (setter=set_extractor:,nonatomic,retain) id<SZExtractor> _extractor;                           //@synthesize extractor=_extractor - In the implementation block
@property (assign,nonatomic) BOOL _hasSZExtractor;                                                       //@synthesize hasSZExtractor=_hasSZExtractor - In the implementation block
@property (assign,nonatomic) BOOL _doesSZExtractorConsumeExtractedData;                                  //@synthesize doesSZExtractorConsumeExtractedData=_doesSZExtractorConsumeExtractedData - In the implementation block
@property (setter=_setAppleIDContext:,copy) id<NSURLSessionAppleIDContext> _appleIDContext;              //@synthesize appleIDContext=_appleIDContext - In the implementation block
@property (nonatomic,retain) NSURL * _publishingURL;                                                     //@synthesize publishingURL=_publishingURL - In the implementation block
@property (assign) long long _countOfBytesReceivedEncoded;                                               //@synthesize _countOfBytesReceivedEncoded=__countOfBytesReceivedEncoded - In the implementation block
@property (nonatomic,copy) NSString * _APSRelayTopic;                                                    //@synthesize APSRelayTopic=_APSRelayTopic - In the implementation block
@property (assign,nonatomic) long long _discretionaryOverride;                                           //@synthesize discretionaryOverride=_discretionaryOverride - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_endpoint> _hostOverride;                                    //@synthesize hostOverride=_hostOverride - In the implementation block
@property (nonatomic,copy) id _cookieTransformCallback;                                                  //@synthesize cookieTransformCallback=_cookieTransformCallback - In the implementation block
@property (nonatomic,readonly) NSArray * _resolvedCNAMEChain;                                            //@synthesize resolvedCNAMEChain=_resolvedCNAMEChain - In the implementation block
@property (readonly) NSProgress * progress;                                                              //@synthesize progress=_progress - In the implementation block
@property (copy) NSDate * earliestBeginDate; 
@property (assign) long long countOfBytesClientExpectsToSend;                                            //@synthesize countOfBytesClientExpectsToSend=_countOfBytesClientExpectsToSend - In the implementation block
@property (assign) long long countOfBytesClientExpectsToReceive;                                         //@synthesize countOfBytesClientExpectsToReceive=_countOfBytesClientExpectsToReceive - In the implementation block
@property (copy) NSString * taskDescription;                                                             //@synthesize taskDescription=_taskDescription - In the implementation block
@property (assign) float priority; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(unsigned)_qos;
-(void)setTaskDescription:(NSString *)arg1 ;
-(NSString *)_boundInterfaceIdentifier;
-(NSURLRequest *)currentRequest;
-(NSObject*<OS_voucher>)_voucher;
-(BOOL)_shouldPipelineHTTP;
-(BOOL)_connectionIsCompanionLink;
-(void)set_qos:(unsigned)arg1 ;
-(const XCookieStorage*)_createXCookieStorage;
-(id)_timingData;
-(BOOL)_needSendingMetrics;
-(id<__NSURLSessionTaskGroupForConfiguration>)_taskGroup;
-(id<SZExtractor>)_extractor;
-(void)_onqueue_expectedProgressTargetChanged;
-(void)_withXURLCache:(/*^block*/id)arg1 ;
-(unsigned short)_TLSMaximumSupportedProtocolVersion;
-(void)initializeHTTPAuthenticatorWithAppleIDContext:(id)arg1 statusCodes:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_didSendMetrics;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)_setConnectionCacheKey:(HTTPConnectionCacheKey*)arg1 ;
-(BOOL)_allowsQUIC;
-(void)set_timeoutIntervalForResource:(double)arg1 ;
-(id)initWithTask:(id)arg1 ;
-(NSString *)_description;
-(void)suspend;
-(BOOL)_allowsCellular;
-(const CFSetRef)_getAuthenticatorStatusCodes;
-(long long)countOfBytesClientExpectsToReceive;
-(void)set_cfHSTS:(CFHSTSPolicyRef)arg1 ;
-(const CFDictionaryRef)_copyATSState;
-(BOOL)_requiresSecureHTTPSProxyConnection;
-(id)_incompleteTaskMetrics;
-(void)getUnderlyingHTTPConnectionInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldHandleCookiesAndSchemeIsAppropriate;
-(NSURLSessionTaskHTTPAuthenticator *)authenticator;
-(void)_onqueue_adjustPriorityHint:(float)arg1 incremental:(BOOL)arg2 ;
-(BOOL)_isTopLevelNavigation;
-(void)setCountOfBytesClientExpectsToReceive:(long long)arg1 ;
-(BOOL)_authenticatorConfiguredViaTaskProperty;
-(NSProgress *)progress;
-(void)set_metrics:(__CFN_TaskMetrics *)arg1 ;
-(void)set_doesSZExtractorConsumeExtractedData:(BOOL)arg1 ;
-(void)set_countOfPendingBytesReceivedEncoded:(long long)arg1 ;
-(void)set_uniqueIdentifier:(NSUUID *)arg1 ;
-(void)set_requiresSecureHTTPSProxyConnection:(BOOL)arg1 ;
-(void)set_shouldSkipPreferredClientCertificateLookup:(BOOL)arg1 ;
-(void)set_preventsSystemHTTPProxyAuthentication:(BOOL)arg1 ;
-(NSURLRequest *)originalRequest;
-(void)setCountOfBytesExpectedToReceive:(long long)arg1 ;
-(void)setCountOfBytesClientExpectsToSend:(long long)arg1 ;
-(void)set_authenticatorConfiguredViaTaskProperty:(BOOL)arg1 ;
-(void)set_contentDispositionFallbackArray:(NSArray *)arg1 ;
-(void)set_legacySocketStreamProperties:(NSDictionary *)arg1 ;
-(NSURLSessionEffectiveConfiguration *)_effectiveConfiguration;
-(void)set_extractorPreparedForExtraction:(BOOL)arg1 ;
-(id)init;
-(void)set_cachedSocketStreamProperties:(NSDictionary *)arg1 ;
-(BOOL)_doesSZExtractorConsumeExtractedData;
-(void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1 ;
-(void)set_shouldUsePipelineHeuristics:(BOOL)arg1 ;
-(void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)_onqueue_adoptEffectiveConfiguration:(id)arg1 ;
-(double)_timeoutIntervalForResource;
-(void)set_suspensionThreshhold:(long long)arg1 ;
-(long long)computeAdjustedPoolPriority;
-(void)setEarliestBeginDate:(NSDate *)arg1 ;
-(BOOL)_extractorFinishedDecoding;
-(void)set_pathToDownloadTaskFile:(NSString *)arg1 ;
-(unsigned)_powerAssertion;
-(void)set_extractor:(id<SZExtractor>)arg1 ;
-(void)set_backgroundPublishingURL:(NSURL *)arg1 ;
-(id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3 ;
-(void)_onqueue_releasePowerAsssertion;
-(void)set_backgroundTransactionMetrics:(__CFN_TransactionMetrics *)arg1 ;
-(NSString *)taskDescription;
-(void)set_storagePartitionIdentifier:(NSString *)arg1 ;
-(void)_setExplicitStorageSession:(CFURLStorageSessionRef)arg1 ;
-(void)set_countOfBytesReceivedEncoded:(long long)arg1 ;
-(NSString *)_storagePartitionIdentifier;
-(void)set_allowsCellularOverride:(int)arg1 ;
-(void)_setExplicitCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(unsigned short)_TLSMinimumSupportedProtocolVersion;
-(NSDate *)earliestBeginDate;
-(NSObject*<OS_nw_activity>)_nw_activity;
-(void)setCountOfBytesExpectedToSend:(long long)arg1 ;
-(long long)countOfBytesClientExpectsToSend;
-(NSDictionary *)_legacySocketStreamProperties;
-(BOOL)_extractorPreparedForExtraction;
-(void)set_shouldSkipPipelineProbe:(BOOL)arg1 ;
-(void)set_expectedWorkload:(long long)arg1 ;
-(void)set_extractorFinishedDecoding:(BOOL)arg1 ;
-(void)set_allowedProtocolTypes:(unsigned long long)arg1 ;
-(void)setCountOfBytesReceived:(long long)arg1 ;
-(void)setPrefersIncrementalDelivery:(BOOL)arg1 ;
-(void)set_httpConnectionInfoCompletionBlock:(id)arg1 ;
-(void)set_preventsIdleSystemSleep:(BOOL)arg1 ;
-(void)set_cachePolicy:(unsigned long long)arg1 ;
-(void)_finishProgressReporting;
-(void)set_sslSettings:(NSDictionary *)arg1 ;
-(NSArray *)_resolvedCNAMEChain;
-(NSURL *)_backgroundPublishingURL;
-(void)set_boundInterfaceIdentifier:(NSString *)arg1 ;
-(void)set_allowsExpensiveOverride:(int)arg1 ;
-(double)_loadingPriorityValue;
-(BOOL)prefersIncrementalDelivery;
-(unsigned long long)_expectedProgressTarget;
-(NSURL *)_publishingURL;
-(void)set_appleIDContextRedirect:(BOOL)arg1 ;
-(void)set_allowsConstrainedOverride:(int)arg1 ;
-(BOOL)_hasSZExtractor;
-(NSURL *)_siteForCookies;
-(void)set_cfCache:(const CFURLCacheRef)arg1 ;
-(void)set_cfCreds:(CFURLCredentialStorageRef)arg1 ;
-(BOOL)_shouldSkipPipelineProbe;
-(void)set_knownHTTP3Capable:(BOOL)arg1 ;
-(void)set_voucher:(NSObject*<OS_voucher>)arg1 ;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(void)set_shouldHandleCookies:(BOOL)arg1 ;
-(NSString *)_pathToDownloadTaskFile;
-(void)set_priority:(long long)arg1 ;
-(NSDictionary *)_dependencyInfo;
-(unsigned long long)_allowedProtocolTypes;
-(void)set_timeoutInterval:(double)arg1 ;
-(void)set_requestPriority:(long long)arg1 ;
-(void)set_timeWindowDelay:(double)arg1 ;
-(id<NSURLSessionAppleIDContext>)_appleIDContext;
-(void)set_proxySettings:(NSDictionary *)arg1 ;
-(int)_allowsConstrainedOverride;
-(void)set_powerAssertion:(unsigned)arg1 ;
-(void)_setSocketProperties:(CFDictionaryRef)arg1 connectionProperties:(CFDictionaryRef)arg2 ;
-(void)set_cookieTransformCallback:(id)arg1 ;
-(BOOL)_shouldUsePipelineHeuristics;
-(long long)_discretionaryOverride;
-(void)set_discretionaryOverride:(long long)arg1 ;
-(BOOL)_preventsAppSSO;
-(void)setOriginalRequest:(NSURLRequest *)arg1 ;
-(long long)countOfBytesExpectedToSend;
-(double)_loadingPriority;
-(void)setAuthenticator:(NSURLSessionTaskHTTPAuthenticator *)arg1 ;
-(void)set_disallowCellular:(BOOL)arg1 ;
-(void)set_loadingPriorityValue:(double)arg1 ;
-(void)set_isTopLevelNavigation:(BOOL)arg1 ;
-(void)set_shouldPipelineHTTP:(BOOL)arg1 ;
-(void)set_hostOverride:(NSObject*<OS_nw_endpoint>)arg1 ;
-(void)set_cookieAcceptPolicy:(int)arg1 ;
-(NSDictionary *)_cachedSocketStreamProperties;
-(void)set_darkWakePowerAssertion:(unsigned)arg1 ;
-(long long)_priorityValue;
-(void)set_DuetActivityProperties:(NSDictionary *)arg1 ;
-(void)set_effectiveConfiguration:(NSURLSessionEffectiveConfiguration *)arg1 ;
-(void)set_networkServiceType:(int)arg1 ;
-(void)set_timeWindowDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)_adoptEffectiveConfiguration:(id)arg1 ;
-(void)set_allowsCellular:(BOOL)arg1 ;
-(unsigned long long)_cachePolicy;
-(void)set_cacheOnly:(BOOL)arg1 ;
-(void)set_cfCookies:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(BOOL)_connectionIsCellular;
-(void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)arg1 ;
-(id)_httpConnectionInfoCompletionBlock;
-(BOOL)_isAVAssetTask;
-(NSURLSessionTaskDependencyTree *)dependencyTree;
-(NSURLSessionTaskDependency *)taskDependency;
-(void)set_hasSZExtractor:(BOOL)arg1 ;
-(void)set_bytesPerSecondLimit:(long long)arg1 ;
-(void)set_nw_activity:(NSObject*<OS_nw_activity>)arg1 ;
-(void)set_loadingPriority:(double)arg1 ;
-(void)_consumePendingBytesReceivedEncoded;
-(void)set_strictContentLength:(BOOL)arg1 ;
-(void)set_private_nw_activity:(NSObject*<OS_nw_activity>)arg1 ;
-(id)initWithTaskGroup:(id)arg1 ;
-(BOOL)_appleIDContextRedirect;
-(void)setTaskDependency:(NSURLSessionTaskDependency *)arg1 ;
-(void)set_priorityValue:(long long)arg1 ;
-(void)setDependencyTree:(NSURLSessionTaskDependencyTree *)arg1 ;
-(void)set_publishingURL:(NSURL *)arg1 ;
-(void)set_APSRelayTopic:(NSString *)arg1 ;
-(void)set_prohibitAuthUI:(BOOL)arg1 ;
-(void)set_dependencyInfo:(NSDictionary *)arg1 ;
-(void)set_siteForCookies:(NSURL *)arg1 ;
-(unsigned)_darkWakePowerAssertion;
-(CFHSTSPolicyRef)_copyHSTSPolicy;
-(void)_completeUploadProgress;
-(NSURLSession *)session;
-(void)setError:(NSError *)arg1 ;
-(BOOL)_strictContentLength;
-(void)set_appSSOFallback:(BOOL)arg1 ;
-(int)_allowsCellularOverride;
-(void)_releasePreventIdleSleepAssertionIfAppropriate;
-(void)set_resolvedCNAMEChain:(NSArray *)arg1 ;
-(CFHSTSPolicyRef)_cfHSTS;
-(NSError *)error;
-(long long)_countOfPendingBytesReceivedEncoded;
-(void)_appendCountOfPendingBytesReceivedEncoded:(long long)arg1 ;
-(void)set_TCPConnectionMetadata:(NSData *)arg1 ;
-(id)_protocolForTask;
-(void)set_protocolForTask:(id)arg1 ;
-(int)_cookieAcceptPolicy;
-(NSString *)description;
-(long long)_suspensionThreshhold;
-(__CFN_TransactionMetrics *)_backgroundTransactionMetrics;
-(BOOL)_prohibitAuthUI;
-(NSObject*<OS_nw_activity>)_private_nw_activity;
-(void)_onSessionQueue_cleanupAndBreakCycles;
-(const CFDictionaryRef)_copySocketStreamProperties;
-(NSURL *)currentRequest_URL;
-(NSArray *)_contentDispositionFallbackArray;
-(NSURLResponse *)response;
-(NSDictionary *)_DuetActivityProperties;
-(void)set_allowsQUIC:(BOOL)arg1 ;
-(long long)countOfBytesSent;
-(OpaqueCFHTTPCookieStorageRef)_cfCookies;
-(double)_timeWindowDelay;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(const XCredentialStorage*)_createXCredentialStorage;
-(NSObject*<OS_nw_endpoint>)_hostOverride;
-(unsigned long long)taskIdentifier;
-(NSString *)_APSRelayTopic;
-(void)set_trailers:(NSDictionary *)arg1 ;
-(int)_allowsExpensiveOverride;
-(BOOL)_preconnect;
-(void)set_expectedProgressTarget:(unsigned long long)arg1 ;
-(void)_setAppleIDContext:(id)arg1 ;
-(__CFN_TaskMetrics *)_metrics;
-(long long)_requestPriority;
-(void)setState:(long long)arg1 ;
-(void)_setConnectionIsCellular:(BOOL)arg1 ;
-(NSDictionary *)_proxySettings;
-(void)setCurrentRequest:(NSURLRequest *)arg1 ;
-(void)updateCurrentRequest:(id)arg1 ;
-(BOOL)_shouldSkipPreferredClientCertificateLookup;
-(long long)state;
-(BOOL)_preventsSystemHTTPProxyAuthentication;
-(long long)_expectedWorkload;
-(NSString *)_loggableDescription;
-(CFURLCredentialStorageRef)_cfCreds;
-(long long)_priority;
-(void)set_preventsAppSSO:(BOOL)arg1 ;
-(BOOL)_disallowCellular;
-(BOOL)_appSSOFallback;
-(void)set_connectionIsCompanionLink:(BOOL)arg1 ;
-(id)_cookieTransformCallback;
-(NSURL *)currentRequest_mainDocumentURL;
-(long long)countOfBytesExpectedToReceive;
-(NSDictionary *)_trailers;
-(BOOL)_preventsIdleSystemSleep;
-(long long)countOfBytesReceived;
-(BOOL)_shouldHandleCookies;
-(double)_timeWindowDuration;
-(double)_timeoutInterval;
-(NSUUID *)_uniqueIdentifier;
-(void)_takePreventIdleSleepAssertionIfAppropriate;
-(void)cancel;
-(void)resume;
-(float)priority;
-(void)_getAuthenticationHeadersForResponse:(CFURLResponseRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)startTime;
-(const CFURLCacheRef)_cfCache;
-(void)set_preconnect:(BOOL)arg1 ;
-(BOOL)_cacheOnly;
-(long long)_bytesPerSecondLimit;
-(BOOL)_knownHTTP3Capable;
-(void)setPriority:(float)arg1 ;
-(NSData *)_TCPConnectionMetadata;
-(int)_networkServiceType;
-(void)dealloc;
-(id)_incompleteCurrentTaskTransactionMetrics;
-(void)set_TLSNegotiatedCipherSuite:(unsigned short)arg1 ;
-(NSDictionary *)_sslSettings;
-(long long)_countOfBytesReceivedEncoded;
-(unsigned short)_TLSNegotiatedCipherSuite;
@end

