/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSURLSessionEffectiveConfiguration_Base.h>

@class NSDictionary, NSHTTPCookieStorage, NSURLCache, NSURLCredentialStorage, NSArray, NSSet, NSString, NSData, NSNumber, NSURL;

@interface NSURLSessionEffectiveConfiguration : __NSURLSessionEffectiveConfiguration_Base

@property (assign) double _connectionCacheCellPurgeTimeout; 
@property (copy) NSDictionary * _socketStreamProperties; 
@property (retain) NSHTTPCookieStorage * HTTPCookieStorage; 
@property (retain) NSURLCache * URLCache; 
@property (copy) NSDictionary * HTTPAdditionalHeaders; 
@property (retain) NSURLCredentialStorage * URLCredentialStorage; 
@property (copy) NSArray * protocolClasses; 
@property (assign) double timeoutIntervalForResource; 
@property (assign) BOOL allowsCellularAccess; 
@property (getter=isDiscretionary) BOOL discretionary; 
@property (assign) BOOL shouldUseExtendedBackgroundIdleMode; 
@property (assign) BOOL waitsForConnectivity; 
@property (assign) BOOL allowsExpensiveNetworkAccess; 
@property (assign) BOOL allowsConstrainedNetworkAccess; 
@property (assign) unsigned long long _forcedNetworkServiceType; 
@property (copy) NSSet * _authenticatorStatusCodes; 
@property (copy) NSString * _companionAppBundleIdentifier; 
@property (copy) NSString * _tcpConnectionPoolName; 
@property (assign) BOOL _forcesNewConnections; 
@property (assign) BOOL _preventsIdleSleepOnceConnected; 
@property (assign) BOOL _requiresPowerPluggedIn; 
@property (assign) BOOL _shouldSkipPreferredClientCertificateLookup; 
@property (copy) NSString * _sourceApplicationBundleIdentifier; 
@property (copy) NSString * _sourceApplicationSecondaryIdentifier; 
@property (assign) unsigned long long _TCPAdaptiveReadTimeout; 
@property (assign) unsigned long long _TCPAdaptiveWriteTimeout; 
@property (assign) BOOL _allowsExpensiveAccess; 
@property (assign) BOOL _allowsPowerNapScheduling; 
@property (copy) id<NSURLSessionAppleIDContext> _appleIDContext; 
@property (copy) NSData * _sourceApplicationAuditTokenData; 
@property (assign) long long _timingDataOptions; 
@property (assign) BOOL _allowsIndefiniteConnections; 
@property (assign) BOOL _allowsMultipathTCP; 
@property (assign) BOOL _allowsResponseMonitoringDuringBodyTranmission; 
@property (assign) BOOL _allowsTCPFastOpen; 
@property (assign) BOOL _allowsTLSSessionTickets; 
@property (assign) BOOL _onBehalfOfPairedDevice; 
@property (assign) unsigned long long _customReadBufferSize; 
@property (assign) double _customReadBufferTimeout; 
@property (assign) BOOL _preventsSystemHTTPProxyAuthentication; 
@property (assign) BOOL _allowsTLSSessionResumption; 
@property (assign) BOOL _requiresSustainedDataDelivery; 
@property (assign) BOOL _duetPreauthorized; 
@property (assign) BOOL _clientIsNotExplicitlyDiscretionary; 
@property (copy) NSString * _tlsTrustPinningPolicyName; 
@property (copy) NSSet * _suppressedAutoAddedHTTPHeaders; 
@property (assign) BOOL _requiresSecureHTTPSProxyConnection; 
@property (assign) long long _expiredDNSBehavior; 
@property (assign) BOOL _alwaysPerformDefaultTrustEvaluation; 
@property (assign) BOOL _preventsAppSSO; 
@property (assign) BOOL _allowsConstrainedNetworkAccess; 
@property (assign) unsigned long long _multipathAlternatePort; 
@property (assign) BOOL _reportsDataStalls; 
@property (assign) BOOL _allowsWCA; 
@property (copy) NSNumber * _maximumWatchCellularTransferSize; 
@property (copy) NSString * _CTDataConnectionServiceType; 
@property (assign) long long multipathServiceType; 
@property (assign) BOOL _respectsAllowsCellularAccessForDiscretionaryTasks; 
@property (copy) NSString * _connectionPoolName; 
@property (copy) NSURL * _directoryForDownloadedFiles; 
+(id)immutableEffectiveConfigurationFromConfig:(id)arg1 ;
+(id)immutableEffectiveConfigurationFromSessionConfig:(id)arg1 ;
-(double)_connectionCacheCellPurgeTimeout;
-(void)set_connectionCacheCellPurgeTimeout:(double)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(NSDictionary *)_socketStreamProperties;
-(void)set_socketStreamProperties:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

