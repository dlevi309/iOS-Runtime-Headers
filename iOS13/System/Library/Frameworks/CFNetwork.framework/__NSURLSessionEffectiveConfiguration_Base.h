/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLSessionConfiguration, NSHTTPCookieStorage, NSURLCache, NSDictionary, NSURLCredentialStorage, NSArray, NSSet, NSString, NSData, NSNumber, NSURL;

@interface __NSURLSessionEffectiveConfiguration_Base : NSObject <NSSecureCoding, NSCopying> {

	NSURLSessionConfiguration* _config;

}

@property (retain,readonly) NSHTTPCookieStorage * HTTPCookieStorage; 
@property (retain,readonly) NSURLCache * URLCache; 
@property (copy,readonly) NSDictionary * HTTPAdditionalHeaders; 
@property (retain,readonly) NSURLCredentialStorage * URLCredentialStorage; 
@property (copy,readonly) NSArray * protocolClasses; 
@property (readonly) double timeoutIntervalForResource; 
@property (readonly) BOOL allowsCellularAccess; 
@property (getter=isDiscretionary,readonly) BOOL discretionary; 
@property (readonly) BOOL shouldUseExtendedBackgroundIdleMode; 
@property (readonly) BOOL waitsForConnectivity; 
@property (readonly) BOOL allowsExpensiveNetworkAccess; 
@property (readonly) BOOL allowsConstrainedNetworkAccess; 
@property (readonly) unsigned long long _forcedNetworkServiceType; 
@property (copy,readonly) NSSet * _authenticatorStatusCodes; 
@property (copy,readonly) NSString * _companionAppBundleIdentifier; 
@property (copy,readonly) NSString * _tcpConnectionPoolName; 
@property (readonly) BOOL _forcesNewConnections; 
@property (readonly) BOOL _preventsIdleSleepOnceConnected; 
@property (readonly) BOOL _requiresPowerPluggedIn; 
@property (readonly) BOOL _shouldSkipPreferredClientCertificateLookup; 
@property (copy,readonly) NSString * _sourceApplicationBundleIdentifier; 
@property (copy,readonly) NSString * _sourceApplicationSecondaryIdentifier; 
@property (readonly) unsigned long long _TCPAdaptiveReadTimeout; 
@property (readonly) unsigned long long _TCPAdaptiveWriteTimeout; 
@property (readonly) BOOL _allowsExpensiveAccess; 
@property (readonly) BOOL _allowsPowerNapScheduling; 
@property (copy,readonly) id<NSURLSessionAppleIDContext> _appleIDContext; 
@property (copy,readonly) NSData * _sourceApplicationAuditTokenData; 
@property (readonly) long long _timingDataOptions; 
@property (readonly) BOOL _allowsIndefiniteConnections; 
@property (readonly) BOOL _allowsMultipathTCP; 
@property (readonly) BOOL _allowsResponseMonitoringDuringBodyTranmission; 
@property (readonly) BOOL _allowsTCPFastOpen; 
@property (readonly) BOOL _allowsTLSSessionTickets; 
@property (readonly) BOOL _onBehalfOfPairedDevice; 
@property (readonly) unsigned long long _customReadBufferSize; 
@property (readonly) double _customReadBufferTimeout; 
@property (readonly) BOOL _preventsSystemHTTPProxyAuthentication; 
@property (readonly) BOOL _allowsTLSSessionResumption; 
@property (readonly) BOOL _requiresSustainedDataDelivery; 
@property (readonly) BOOL _duetPreauthorized; 
@property (readonly) BOOL _clientIsNotExplicitlyDiscretionary; 
@property (copy,readonly) NSString * _tlsTrustPinningPolicyName; 
@property (copy,readonly) NSSet * _suppressedAutoAddedHTTPHeaders; 
@property (readonly) BOOL _requiresSecureHTTPSProxyConnection; 
@property (readonly) long long _expiredDNSBehavior; 
@property (readonly) BOOL _alwaysPerformDefaultTrustEvaluation; 
@property (readonly) BOOL _preventsAppSSO; 
@property (readonly) BOOL _allowsConstrainedNetworkAccess; 
@property (readonly) unsigned long long _multipathAlternatePort; 
@property (readonly) BOOL _reportsDataStalls; 
@property (readonly) BOOL _allowsTLSFalseStart; 
@property (readonly) BOOL _allowsWCA; 
@property (copy,readonly) NSNumber * _maximumWatchCellularTransferSize; 
@property (copy,readonly) NSString * _CTDataConnectionServiceType; 
@property (readonly) long long multipathServiceType; 
@property (readonly) BOOL _respectsAllowsCellularAccessForDiscretionaryTasks; 
@property (copy,readonly) NSString * _connectionPoolName; 
@property (copy,readonly) NSURL * _directoryForDownloadedFiles; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const void*)_copyAttribute:(CFStringRef)arg1 ;
-(id)_sessionConfiguration;
-(id)_initWithMeOther:(id)arg1 ;
-(id)_initWithConfiguration:(id)arg1 ;
@end

