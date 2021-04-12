/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLRequest, NSMutableURLRequest, __NSCFURLSession, NSURLSessionEffectiveConfiguration, NSUUID, __CFN_TaskMetrics;

@interface CONNECTION_SessionTask : NSObject {

	NSURLRequest* _originalRequest;
	NSMutableURLRequest* _currentRequest;
	double _startTime;
	CFDictionaryRef _connectionProperties;
	CFDictionaryRef _socketProperties;
	NSMutableURLRequest* _nsCurrentRequest;
	NSURLRequest* _nsOriginalRequest;
	__NSCFURLSession* _session_ivar;
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
-(void)dealloc;
-(id)error;
-(id)state;
-(id)_uniqueIdentifier;
-(float)priority;
-(__CFN_TaskMetrics *)_metrics;
-(id)session;
-(id)taskIdentifier;
-(id)originalRequest;
-(id)workQueue;
-(id)currentRequest;
-(id)_shouldHandleCookies;
-(double)startTime;
-(double)_timeoutInterval;
-(CFHSTSPolicyRef)_copyHSTSPolicy;
-(void)_withXURLCache:(/*^block*/id)arg1 ;
-(const XCookieStorage*)_createXCookieStorage;
-(const XCredentialStorage*)_createXCredentialStorage;
-(BOOL)_preventsAppSSO;
-(void)set_protocolForTask:(id)arg1 ;
-(id)_protocolForTask;
-(id)_effectiveConfiguration;
-(BOOL)shouldHandleCookiesAndSchemeIsAppropriate;
-(id)initWithRequest:(id)arg1 mutableCurrent:(id)arg2 connProps:(CFDictionaryRef)arg3 sockProps:(CFDictionaryRef)arg4 session:(id)arg5 ;
-(id)_loggableDescription;
-(void)updateCurrentRequest:(id)arg1 ;
-(void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)arg1 ;
-(CFURLRef)currentRequest_URL;
-(id)countOfBytesReceived;
-(CFDictionaryRef)_copySocketStreamProperties;
-(id)countOfBytesExpectedToReceive;
-(void)set_metrics:(__CFN_TaskMetrics *)arg1 ;
-(void)set_appSSOFallback:(BOOL)arg1 ;
-(void)set_preventsAppSSO:(BOOL)arg1 ;
-(void)_consumePendingBytesReceivedEncoded;
-(long long)_bytesPerSecondLimit;
-(long long)_suspensionThreshhold;
-(CFDictionaryRef)_sslSettings;
-(id)_storagePartitionIdentifier;
-(void)set_trailers:(id)arg1 ;
-(unsigned short)_TLSMaximumSupportedProtocolVersion;
-(unsigned short)_TLSMinimumSupportedProtocolVersion;
-(unsigned long long)_expectedProgressTarget;
-(id)_priorityValue;
-(id)countOfBytesExpectedToSend;
-(id)countOfBytesSent;
-(const _CFData*)_TCPConnectionMetadata;
-(CFDictionaryRef)_proxySettings;
-(void)set_discretionaryOverride:(long long)arg1 ;
-(id)_backgroundTransactionMetrics;
-(id)_private_nw_activity;
-(void)set_TCPConnectionMetadata:(id)arg1 ;
-(void)_getAuthenticationHeadersForResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned char)_shouldPipelineHTTP;
-(unsigned char)_shouldSkipPipelineProbe;
-(unsigned char)_shouldUsePipelineHeuristics;
-(unsigned long long)_allowedProtocolTypes;
-(long long)_requestPriority;
-(void)set_TLSNegotiatedCipherSuite:(unsigned short)arg1 ;
-(BOOL)_preventsSystemHTTPProxyAuthentication;
-(id)_prohibitAuthUI;
-(void)_takePreventIdleSleepAssertionIfAppropriate;
-(CFSetRef)_getAuthenticatorStatusCodes;
-(void)_releasePreventIdleSleepAssertionIfAppropriate;
-(void)set_connectionIsCompanionLink:(BOOL)arg1 ;
-(void)_setConnectionIsCellular:(BOOL)arg1 ;
-(const _CFDictionary*)_DuetActivityProperties;
-(CFDictionaryRef)_dependencyInfo;
-(id)_APSRelayTopic;
-(id)_httpConnectionInfoCompletionBlock;
-(CFDictionaryRef)_copyATSState;
-(unsigned long long)_cachePolicy;
-(BOOL)_requiresSecureHTTPSProxyConnection;
-(BOOL)_shouldSkipPreferredClientCertificateLookup;
-(BOOL)_appleIDContextRedirect;
-(BOOL)_appSSOFallback;
-(unsigned char)_strictContentLength;
-(BOOL)_cacheOnly;
-(id)_timeWindowDelay;
-(id)_timeWindowDuration;
-(CFURLRef)currentRequest_mainDocumentURL;
-(int)_cookieAcceptPolicy;
-(id)_siteForCookies;
-(BOOL)_isTopLevelNavigation;
-(id)_expectedWorkload;
-(id)_boundInterfaceIdentifier;
-(id)_disallowCellular;
-(id)_allowsExpensiveOverride;
-(id)_allowsConstrainedOverride;
-(id)_allowsCellularOverride;
-(id)_networkServiceType;
-(void)_adoptEffectiveConfiguration:(id)arg1 ;
-(void)_setSocketProperties:(CFDictionaryRef)arg1 connectionProperties:(CFDictionaryRef)arg2 ;
-(void)_appendCountOfPendingBytesReceivedEncoded:(long long)arg1 ;
-(unsigned short)_TLSNegotiatedCipherSuite;
-(id)_cfHSTS;
-(id)_cfCache;
-(id)_cfCreds;
-(id)_cfCookies;
-(id)_contentDispositionFallbackArray;
-(id)_trailers;
-(id)_allowsCellular;
-(BOOL)_allowsQUIC;
-(unsigned char)_preventsIdleSystemSleep;
-(BOOL)_preconnect;
-(BOOL)_connectionIsCompanionLink;
-(void)set_expectedProgressTarget:(unsigned long long)arg1 ;
-(void)_setAppleIDContext:(id)arg1 ;
-(id)_incompleteTaskMetrics;
-(id)_incompleteCurrentTaskTransactionMetrics;
-(void)set_preconnect:(BOOL)arg1 ;
-(id)_countOfPendingBytesReceivedEncoded;
-(id)_countOfBytesReceivedEncoded;
-(void)set_allowsQUIC:(BOOL)arg1 ;
-(void)_processConnectionProperties;
-(id)_connectionPropertyDuet;
-(BOOL)hasExtractor;
-(long long)_discretionaryOverrride;
@end

