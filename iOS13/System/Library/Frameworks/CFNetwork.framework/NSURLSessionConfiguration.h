/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURLCredentialStorage, NSURLCache, NSHTTPCookieStorage, NSDictionary, NSSet, NSArray, NSURL, NSData, NSNumber;

@interface NSURLSessionConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL __collectsTimingData;
	BOOL __allowsWCA;
	long long __companionProxyPreference;

}

@property (copy) NSString * identifier; 
@property (getter=isBackgroundSession) BOOL backgroundSession; 
@property (assign) NSString * disposition; 
@property (retain) NSURLCredentialStorage * _phskip_credStorage; 
@property (assign) BOOL _phskip_credStorageSet; 
@property (retain) NSURLCache * _phskip_urlCache; 
@property (assign) BOOL _phskip_urlCacheSet; 
@property (retain) NSHTTPCookieStorage * _phskip_cookieStorage; 
@property (assign) BOOL _phskip_cookieStorageSet; 
@property (retain) CFHSTSPolicyRef _phskip_hstsStorage; 
@property (assign) BOOL _phskip_hstsStorageSet; 
@property (assign) long long pipeliningHighWatermark; 
@property (assign) long long pipeliningLowWatermark; 
@property (assign) long long numPriorityLevels; 
@property (assign) long long numFastLanes; 
@property (assign) long long minimumFastLanePriority; 
@property (assign) BOOL skip_download_unlink; 
@property (assign) BOOL _requiresClientToOpenFiles; 
@property (copy) NSString * _tcpConnectionPoolName; 
@property (assign) BOOL _forcesNewConnections; 
@property (copy) NSDictionary * _socketStreamProperties; 
@property (assign) BOOL _supportsAVAssetDownloads; 
@property (getter=_isProxySession) BOOL _proxySession; 
@property (copy) NSSet * _authenticatorStatusCodes; 
@property (assign) BOOL _preventsIdleSleep; 
@property (assign) BOOL _usePipeliningHeuristics; 
@property (copy) NSArray * _contentDispHeadEncFallback; 
@property (assign) BOOL _shouldPreserveBackgroundSessionDisposition; 
@property (assign) BOOL _disablesOutOfProcessDirectWiFiUsage; 
@property (assign) BOOL _disablesUseOfProxySession; 
@property (copy) NSString * _companionAppBundleIdentifier; 
@property (copy) NSString * _watchAppBundleIdentifier; 
@property (copy) NSString * _watchExtensionBundleIdentifier; 
@property (assign) unsigned long long _forcedNetworkServiceType; 
@property (copy) NSDictionary * _overriddenDelegateOptions; 
@property (assign) BOOL _requiresPowerPluggedIn; 
@property (copy) NSURL * _directoryForDownloadedFiles; 
@property (copy) NSString * _sourceApplicationBundleIdentifier; 
@property (copy) NSString * _sourceApplicationSecondaryIdentifier; 
@property (copy) NSData * _sourceApplicationAuditTokenData; 
@property (assign) unsigned long long _TCPAdaptiveReadTimeout; 
@property (assign) unsigned long long _TCPAdaptiveWriteTimeout; 
@property (assign) BOOL _reportsDataStalls; 
@property (assign) BOOL _allowsExpensiveAccess; 
@property (assign) BOOL _allowsConstrainedNetworkAccess; 
@property (assign) unsigned long long _multipathAlternatePort; 
@property (assign) BOOL _allowsPowerNapScheduling; 
@property (assign) BOOL _preventsIdleSleepOnceConnected; 
@property (assign) BOOL _sessionSendsLaunchOnDemandEvents; 
@property (assign) BOOL _collectsTimingData;                                             //@synthesize _collectsTimingData=__collectsTimingData - In the implementation block
@property (assign) long long _timingDataOptions; 
@property (assign) BOOL _shouldSkipPreferredClientCertificateLookup; 
@property (copy) id<NSURLSessionAppleIDContext> _appleIDContext; 
@property (copy) NSData * _atsContext; 
@property (assign) double _connectionCachePurgeTimeout; 
@property (assign) double _connectionCacheCellPurgeTimeout; 
@property (assign) double _longLivedConnectionCachePurgeTimeout; 
@property (assign) double _longLivedConnectionCacheCellPurgeTimeout; 
@property (assign) BOOL _allowsRetryForBackgroundDataTasks; 
@property (assign) BOOL _onBehalfOfPairedDevice; 
@property (assign) BOOL _clientIsNotExplicitlyDiscretionary; 
@property (assign) BOOL _respectsAllowsCellularAccessForDiscretionaryTasks; 
@property (assign) BOOL _allowsWCA;                                                      //@synthesize _allowsWCA=__allowsWCA - In the implementation block
@property (copy) NSNumber * _maximumWatchCellularTransferSize; 
@property (assign) BOOL _overridesBackgroundSessionAutoRedirect; 
@property (assign) BOOL _performsEVCertCheck; 
@property (assign) BOOL _infersDiscretionaryFromOriginatingClient; 
@property (copy) NSString * _connectionPoolName; 
@property (assign) BOOL _prefersInfraWiFi; 
@property (assign) BOOL _allowsMultipathTCP; 
@property (assign) BOOL _allowsResponseMonitoringDuringBodyTranmission; 
@property (assign) BOOL _allowsIndefiniteConnections; 
@property (copy) NSString * _CTDataConnectionServiceType; 
@property (assign) BOOL _allowsTCPFastOpen; 
@property (assign) BOOL _allowsTLSSessionTickets; 
@property (assign) BOOL _allowsTLSSessionResumption; 
@property (assign) BOOL _allowsTLSFalseStart; 
@property (copy) NSString * _tlsTrustPinningPolicyName; 
@property (assign) BOOL _allowsTLSFallback; 
@property (assign) BOOL _preventsDirectWiFiAccess; 
@property (assign) BOOL _allowTCPIOConnectionStreamTask; 
@property (assign) unsigned long long _customReadBufferSize; 
@property (assign) double _customReadBufferTimeout; 
@property (assign) BOOL _preventsSystemHTTPProxyAuthentication; 
@property (assign) BOOL _requiresSecureHTTPSProxyConnection; 
@property (assign) BOOL _duetPreauthorized; 
@property (assign) long long _duetPreClearedMode; 
@property (assign) BOOL _requiresSustainedDataDelivery; 
@property (assign) BOOL _ignoreDidReceiveResponseDisposition; 
@property (assign) BOOL _alwaysPerformDefaultTrustEvaluation; 
@property (copy) NSSet * _suppressedAutoAddedHTTPHeaders; 
@property (assign) long long _expiredDNSBehavior; 
@property (assign) long long _IDSMessageTimeout; 
@property (assign) long long _companionProxyPreference;                                  //@synthesize _companionProxyPreference=__companionProxyPreference - In the implementation block
@property (assign) BOOL _preventsAppSSO; 
@property (assign) BOOL _allowsSensitiveLogging; 
@property (assign) unsigned long long requestCachePolicy; 
@property (assign) double timeoutIntervalForRequest; 
@property (assign) double timeoutIntervalForResource; 
@property (assign) unsigned long long networkServiceType; 
@property (assign) BOOL allowsCellularAccess; 
@property (assign) BOOL allowsExpensiveNetworkAccess; 
@property (assign) BOOL allowsConstrainedNetworkAccess; 
@property (assign) BOOL waitsForConnectivity; 
@property (getter=isDiscretionary) BOOL discretionary; 
@property (copy) NSString * sharedContainerIdentifier; 
@property (assign) BOOL sessionSendsLaunchEvents; 
@property (copy) NSDictionary * connectionProxyDictionary; 
@property (assign) int TLSMinimumSupportedProtocol; 
@property (assign) int TLSMaximumSupportedProtocol; 
@property (assign) unsigned short TLSMinimumSupportedProtocolVersion; 
@property (assign) unsigned short TLSMaximumSupportedProtocolVersion; 
@property (assign) BOOL HTTPShouldUsePipelining; 
@property (assign) BOOL HTTPShouldSetCookies; 
@property (assign) unsigned long long HTTPCookieAcceptPolicy; 
@property (copy) NSDictionary * HTTPAdditionalHeaders; 
@property (assign) long long HTTPMaximumConnectionsPerHost; 
@property (retain) NSHTTPCookieStorage * HTTPCookieStorage; 
@property (retain) NSURLCredentialStorage * URLCredentialStorage; 
@property (retain) NSURLCache * URLCache; 
@property (assign) BOOL shouldUseExtendedBackgroundIdleMode; 
@property (copy) NSArray * protocolClasses; 
@property (assign) long long multipathServiceType; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)defaultSessionConfiguration;
+(id)ephemeralSessionConfiguration;
+(id)_defaultProtocolClasses;
+(id)backgroundSessionConfigurationWithIdentifier:(id)arg1 ;
+(id)sessionConfigurationForSharedSession;
+(id)_AVBackgroundSessionConfigurationWithIdentifier:(id)arg1 ;
+(id)AVBackgroundSessionConfigurationWithIdentifier:(id)arg1 ;
+(id)backgroundSessionConfiguration:(id)arg1 ;
-(void)geo_configureWithRequest:(id)arg1 ;
-(void)geo_setApplicationAttribution:(id)arg1 ;
-(BOOL)geo_hasApplicationAttribution:(id)arg1 ;
-(BOOL)geo_isCompatibleWithRequest:(id)arg1 ;
-(void)applyNSURLConnectionProperties:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CFHSTSPolicyRef)copyHSTSPolicy;
-(HTTPConnectionCacheLimits)getConnectionCacheLimits;
-(void*)_copyAttribute:(CFStringRef)arg1 ;
-(BOOL)_collectsTimingData;
-(id)copyImmutableVariant:(/*^block*/id)arg1 ;
-(id)initWithDisposition:(id)arg1 ;
-(void)set_collectsTimingData:(BOOL)arg1 ;
-(BOOL)_allowsWCA;
-(void)set_allowsWCA:(BOOL)arg1 ;
-(long long)_companionProxyPreference;
-(void)set_companionProxyPreference:(long long)arg1 ;
@end

