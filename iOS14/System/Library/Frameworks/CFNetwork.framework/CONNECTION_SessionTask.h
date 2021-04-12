/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSMutableURLRequest, NSURLRequest, NSURLSession, NSURLSessionEffectiveConfiguration, NSUUID, __CFN_TaskMetrics;

@interface CONNECTION_SessionTask : NSObject {

	CFURLRequestRef _originalRequest;
	CFURLRequestRef _currentRequest;
	double _startTime;
	CFDictionaryRef _connectionProperties;
	CFDictionaryRef _socketProperties;
	NSMutableURLRequest* _nsCurrentRequest;
	NSURLRequest* _nsOriginalRequest;
	NSURLSession* _session_ivar;
	NSURLSessionEffectiveConfiguration* _effectiveConfiguration;
	NSUUID* _uniqueIdentifier;
	BOOL _is_cellular;
	Class _my_protocolForTask;
	BOOL __shouldSkipPreferredClientCertificateLookup;
	CFDictionaryRef _atsStateCache;
	BOOL _preventsAppSSO;
	BOOL _appSSOFallback;
	BOOL _appleIDContextRedirect;
	__CFN_TaskMetrics* _metrics;

}

@property (nonatomic,retain) __CFN_TaskMetrics * _metrics;              //@synthesize metrics=_metrics - In the implementation block
-(id)_boundInterfaceIdentifier;
-(id)currentRequest;
-(unsigned char)_shouldPipelineHTTP;
-(BOOL)_connectionIsCompanionLink;
-(const XCookieStorage*)_createXCookieStorage;
-(void)_withXURLCache:(/*^block*/id)arg1 ;
-(unsigned short)_TLSMaximumSupportedProtocolVersion;
-(long long)_discretionaryOverrride;
-(id)workQueue;
-(void)_setConnectionCacheKey:(HTTPConnectionCacheKey*)arg1 ;
-(BOOL)_allowsQUIC;
-(id)_description;
-(id)_allowsCellular;
-(CFSetRef)_getAuthenticatorStatusCodes;
-(CFDictionaryRef)_copyATSState;
-(BOOL)_requiresSecureHTTPSProxyConnection;
-(id)_incompleteTaskMetrics;
-(BOOL)shouldHandleCookiesAndSchemeIsAppropriate;
-(BOOL)_isTopLevelNavigation;
-(void)set_metrics:(__CFN_TaskMetrics *)arg1 ;
-(id)originalRequest;
-(id)_effectiveConfiguration;
-(void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)arg1 ;
-(id)_storagePartitionIdentifier;
-(unsigned short)_TLSMinimumSupportedProtocolVersion;
-(id)_resolvedCNAMEChain;
-(BOOL)prefersIncrementalDelivery;
-(unsigned long long)_expectedProgressTarget;
-(id)_siteForCookies;
-(unsigned char)_shouldSkipPipelineProbe;
-(id)initWithRequest:(CFURLRequestRef)arg1 mutableCurrent:(CFURLRequestRef)arg2 connProps:(CFDictionaryRef)arg3 sockProps:(CFDictionaryRef)arg4 session:(id)arg5 ;
-(CFDictionaryRef)_dependencyInfo;
-(unsigned long long)_allowedProtocolTypes;
-(id)_allowsConstrainedOverride;
-(void)_setSocketProperties:(CFDictionaryRef)arg1 connectionProperties:(CFDictionaryRef)arg2 ;
-(unsigned char)_shouldUsePipelineHeuristics;
-(void)set_discretionaryOverride:(long long)arg1 ;
-(BOOL)_preventsAppSSO;
-(id)countOfBytesExpectedToSend;
-(id)_priorityValue;
-(void)_adoptEffectiveConfiguration:(id)arg1 ;
-(unsigned long long)_cachePolicy;
-(void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)arg1 ;
-(id)_httpConnectionInfoCompletionBlock;
-(void)_consumePendingBytesReceivedEncoded;
-(BOOL)_appleIDContextRedirect;
-(CFHSTSPolicyRef)_copyHSTSPolicy;
-(id)session;
-(unsigned char)_strictContentLength;
-(void)set_appSSOFallback:(BOOL)arg1 ;
-(id)_allowsCellularOverride;
-(void)_releasePreventIdleSleepAssertionIfAppropriate;
-(void)set_resolvedCNAMEChain:(id)arg1 ;
-(id)_cfHSTS;
-(id)error;
-(id)_countOfPendingBytesReceivedEncoded;
-(void)_appendCountOfPendingBytesReceivedEncoded:(long long)arg1 ;
-(void)set_TCPConnectionMetadata:(id)arg1 ;
-(id)_protocolForTask;
-(void)set_protocolForTask:(id)arg1 ;
-(int)_cookieAcceptPolicy;
-(long long)_suspensionThreshhold;
-(id)_backgroundTransactionMetrics;
-(id)_prohibitAuthUI;
-(id)_private_nw_activity;
-(CFDictionaryRef)_copySocketStreamProperties;
-(CFURLRef)currentRequest_URL;
-(id)_contentDispositionFallbackArray;
-(const _CFDictionary*)_DuetActivityProperties;
-(void)set_allowsQUIC:(BOOL)arg1 ;
-(id)countOfBytesSent;
-(id)_cfCookies;
-(id)_timeWindowDelay;
-(const XCredentialStorage*)_createXCredentialStorage;
-(id)_hostOverride;
-(id)taskIdentifier;
-(id)_APSRelayTopic;
-(void)set_trailers:(id)arg1 ;
-(id)_allowsExpensiveOverride;
-(BOOL)_preconnect;
-(BOOL)hasExtractor;
-(void)set_expectedProgressTarget:(unsigned long long)arg1 ;
-(void)_setAppleIDContext:(id)arg1 ;
-(__CFN_TaskMetrics *)_metrics;
-(long long)_requestPriority;
-(void)_setConnectionIsCellular:(BOOL)arg1 ;
-(CFDictionaryRef)_proxySettings;
-(void)updateCurrentRequest:(id)arg1 ;
-(BOOL)_shouldSkipPreferredClientCertificateLookup;
-(id)state;
-(BOOL)_preventsSystemHTTPProxyAuthentication;
-(id)_expectedWorkload;
-(id)_loggableDescription;
-(id)_cfCreds;
-(void)set_preventsAppSSO:(BOOL)arg1 ;
-(id)_disallowCellular;
-(BOOL)_appSSOFallback;
-(void)set_connectionIsCompanionLink:(BOOL)arg1 ;
-(id)_cookieTransformCallback;
-(CFURLRef)currentRequest_mainDocumentURL;
-(id)countOfBytesExpectedToReceive;
-(id)_trailers;
-(unsigned char)_preventsIdleSystemSleep;
-(id)_connectionPropertyDuet;
-(id)countOfBytesReceived;
-(id)_shouldHandleCookies;
-(id)_timeWindowDuration;
-(double)_timeoutInterval;
-(id)_uniqueIdentifier;
-(void)_takePreventIdleSleepAssertionIfAppropriate;
-(float)priority;
-(void)_getAuthenticationHeadersForResponse:(CFURLResponseRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_processConnectionProperties;
-(double)startTime;
-(id)_cfCache;
-(void)set_preconnect:(BOOL)arg1 ;
-(BOOL)_cacheOnly;
-(long long)_bytesPerSecondLimit;
-(id)_knownHTTP3Capable;
-(const _CFData*)_TCPConnectionMetadata;
-(id)_networkServiceType;
-(void)dealloc;
-(id)_incompleteCurrentTaskTransactionMetrics;
-(void)set_TLSNegotiatedCipherSuite:(unsigned short)arg1 ;
-(CFDictionaryRef)_sslSettings;
-(id)_countOfBytesReceivedEncoded;
-(unsigned short)_TLSNegotiatedCipherSuite;
@end

