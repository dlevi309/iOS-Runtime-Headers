/*
* Generated on Thursday, January 14, 2021 at 2:28:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, AWDNWDeviceReport, AWDNWL2Report;

@interface AWDNWConnectionReport : PBCodable <NSCopying> {

	unsigned long long _bestRTT;
	unsigned long long _bytesDuplicate;
	unsigned long long _bytesIn;
	unsigned long long _bytesOut;
	unsigned long long _bytesOutOfOrder;
	unsigned long long _bytesRetransmitted;
	unsigned long long _connectedAddressIndex;
	unsigned long long _connectionReuseCount;
	unsigned long long _currentRTT;
	unsigned long long _dataStallCount;
	unsigned long long _flowConnectMilliseconds;
	unsigned long long _flowDurationMilliseconds;
	unsigned long long _ipv4AddressCount;
	unsigned long long _ipv4DNSServerCount;
	unsigned long long _ipv6AddressCount;
	unsigned long long _ipv6DNSServerCount;
	unsigned long long _multipathBytesInCell;
	unsigned long long _multipathBytesInInitial;
	unsigned long long _multipathBytesInWiFi;
	unsigned long long _multipathBytesOutCell;
	unsigned long long _multipathBytesOutInitial;
	unsigned long long _multipathBytesOutWiFi;
	unsigned long long _multipathServiceType;
	unsigned long long _packetsIn;
	unsigned long long _packetsOut;
	unsigned long long _pathTriggerMilliseconds;
	unsigned long long _proxyMilliseconds;
	unsigned long long _rTTvariance;
	unsigned long long _resolutionMilliseconds;
	unsigned long long _secondsSinceInterfaceChange;
	unsigned long long _smoothedRTT;
	unsigned long long _synRetransmissionCount;
	unsigned long long _timestamp;
	unsigned long long _tlsMilliseconds;
	unsigned long long _trafficClass;
	NSMutableArray* _activities;
	int _appleApp;
	int _appleHost;
	NSString* _bundleID;
	int _connectedAddressFamily;
	int _connectedInterfaceType;
	int _connectionMode;
	NSString* _connectionUUID;
	AWDNWDeviceReport* _deviceReport;
	int _dnsProtocol;
	int _dnsProvider;
	NSString* _effectiveBundleID;
	int _failureReason;
	int _firstAddressFamily;
	AWDNWL2Report* _l2Report;
	NSString* _processName;
	int _stackLevel;
	int _tlsVersion;
	int _transportProtocol;
	int _usedProxyType;
	BOOL _customProxyConfigured;
	BOOL _fallbackEligible;
	BOOL _firstParty;
	BOOL _ipv4Available;
	BOOL _ipv6Available;
	BOOL _isDaemon;
	BOOL _isPathConstrained;
	BOOL _isPathExpensive;
	BOOL _multipathConfigured;
	BOOL _prohibitsConstrained;
	BOOL _prohibitsExpensive;
	BOOL _resolutionRequired;
	BOOL _synthesizedExtraIPv6Address;
	BOOL _synthesizedIPv6Address;
	BOOL _systemProxyConfigured;
	BOOL _tfoConfigured;
	BOOL _tfoUsed;
	BOOL _tlsConfigured;
	BOOL _tlsHandshakeTimedOut;
	BOOL _tlsVersionTimeout;
	BOOL _triggeredPath;
	BOOL _usedFallback;
	BOOL _weakFallback;
	SCD_Struct_AW29 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTriggeredPath; 
@property (assign,nonatomic) BOOL triggeredPath;                                          //@synthesize triggeredPath=_triggeredPath - In the implementation block
@property (assign,nonatomic) BOOL hasSystemProxyConfigured; 
@property (assign,nonatomic) BOOL systemProxyConfigured;                                  //@synthesize systemProxyConfigured=_systemProxyConfigured - In the implementation block
@property (assign,nonatomic) BOOL hasCustomProxyConfigured; 
@property (assign,nonatomic) BOOL customProxyConfigured;                                  //@synthesize customProxyConfigured=_customProxyConfigured - In the implementation block
@property (assign,nonatomic) BOOL hasUsedProxyType; 
@property (assign,nonatomic) int usedProxyType;                                           //@synthesize usedProxyType=_usedProxyType - In the implementation block
@property (assign,nonatomic) BOOL hasFallbackEligible; 
@property (assign,nonatomic) BOOL fallbackEligible;                                       //@synthesize fallbackEligible=_fallbackEligible - In the implementation block
@property (assign,nonatomic) BOOL hasWeakFallback; 
@property (assign,nonatomic) BOOL weakFallback;                                           //@synthesize weakFallback=_weakFallback - In the implementation block
@property (assign,nonatomic) BOOL hasUsedFallback; 
@property (assign,nonatomic) BOOL usedFallback;                                           //@synthesize usedFallback=_usedFallback - In the implementation block
@property (assign,nonatomic) BOOL hasResolutionRequired; 
@property (assign,nonatomic) BOOL resolutionRequired;                                     //@synthesize resolutionRequired=_resolutionRequired - In the implementation block
@property (assign,nonatomic) BOOL hasTlsConfigured; 
@property (assign,nonatomic) BOOL tlsConfigured;                                          //@synthesize tlsConfigured=_tlsConfigured - In the implementation block
@property (assign,nonatomic) BOOL hasTfoConfigured; 
@property (assign,nonatomic) BOOL tfoConfigured;                                          //@synthesize tfoConfigured=_tfoConfigured - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathConfigured; 
@property (assign,nonatomic) BOOL multipathConfigured;                                    //@synthesize multipathConfigured=_multipathConfigured - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficClass; 
@property (assign,nonatomic) unsigned long long trafficClass;                             //@synthesize trafficClass=_trafficClass - In the implementation block
@property (assign,nonatomic) BOOL hasFailureReason; 
@property (assign,nonatomic) int failureReason;                                           //@synthesize failureReason=_failureReason - In the implementation block
@property (assign,nonatomic) BOOL hasPathTriggerMilliseconds; 
@property (assign,nonatomic) unsigned long long pathTriggerMilliseconds;                  //@synthesize pathTriggerMilliseconds=_pathTriggerMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasResolutionMilliseconds; 
@property (assign,nonatomic) unsigned long long resolutionMilliseconds;                   //@synthesize resolutionMilliseconds=_resolutionMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasProxyMilliseconds; 
@property (assign,nonatomic) unsigned long long proxyMilliseconds;                        //@synthesize proxyMilliseconds=_proxyMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasFlowConnectMilliseconds; 
@property (assign,nonatomic) unsigned long long flowConnectMilliseconds;                  //@synthesize flowConnectMilliseconds=_flowConnectMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasTlsMilliseconds; 
@property (assign,nonatomic) unsigned long long tlsMilliseconds;                          //@synthesize tlsMilliseconds=_tlsMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasFlowDurationMilliseconds; 
@property (assign,nonatomic) unsigned long long flowDurationMilliseconds;                 //@synthesize flowDurationMilliseconds=_flowDurationMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasIpv4AddressCount; 
@property (assign,nonatomic) unsigned long long ipv4AddressCount;                         //@synthesize ipv4AddressCount=_ipv4AddressCount - In the implementation block
@property (assign,nonatomic) BOOL hasIpv6AddressCount; 
@property (assign,nonatomic) unsigned long long ipv6AddressCount;                         //@synthesize ipv6AddressCount=_ipv6AddressCount - In the implementation block
@property (assign,nonatomic) BOOL hasSynthesizedIPv6Address; 
@property (assign,nonatomic) BOOL synthesizedIPv6Address;                                 //@synthesize synthesizedIPv6Address=_synthesizedIPv6Address - In the implementation block
@property (assign,nonatomic) BOOL hasFirstAddressFamily; 
@property (assign,nonatomic) int firstAddressFamily;                                      //@synthesize firstAddressFamily=_firstAddressFamily - In the implementation block
@property (assign,nonatomic) BOOL hasConnectedAddressFamily; 
@property (assign,nonatomic) int connectedAddressFamily;                                  //@synthesize connectedAddressFamily=_connectedAddressFamily - In the implementation block
@property (assign,nonatomic) BOOL hasConnectedAddressIndex; 
@property (assign,nonatomic) unsigned long long connectedAddressIndex;                    //@synthesize connectedAddressIndex=_connectedAddressIndex - In the implementation block
@property (assign,nonatomic) BOOL hasConnectedInterfaceType; 
@property (assign,nonatomic) int connectedInterfaceType;                                  //@synthesize connectedInterfaceType=_connectedInterfaceType - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionReuseCount; 
@property (assign,nonatomic) unsigned long long connectionReuseCount;                     //@synthesize connectionReuseCount=_connectionReuseCount - In the implementation block
@property (assign,nonatomic) BOOL hasDataStallCount; 
@property (assign,nonatomic) unsigned long long dataStallCount;                           //@synthesize dataStallCount=_dataStallCount - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionMode; 
@property (assign,nonatomic) int connectionMode;                                          //@synthesize connectionMode=_connectionMode - In the implementation block
@property (assign,nonatomic) BOOL hasAppleHost; 
@property (assign,nonatomic) int appleHost;                                               //@synthesize appleHost=_appleHost - In the implementation block
@property (assign,nonatomic) BOOL hasAppleApp; 
@property (assign,nonatomic) int appleApp;                                                //@synthesize appleApp=_appleApp - In the implementation block
@property (assign,nonatomic) BOOL hasTlsVersion; 
@property (assign,nonatomic) int tlsVersion;                                              //@synthesize tlsVersion=_tlsVersion - In the implementation block
@property (assign,nonatomic) BOOL hasStackLevel; 
@property (assign,nonatomic) int stackLevel;                                              //@synthesize stackLevel=_stackLevel - In the implementation block
@property (assign,nonatomic) BOOL hasIpv4Available; 
@property (assign,nonatomic) BOOL ipv4Available;                                          //@synthesize ipv4Available=_ipv4Available - In the implementation block
@property (assign,nonatomic) BOOL hasIpv6Available; 
@property (assign,nonatomic) BOOL ipv6Available;                                          //@synthesize ipv6Available=_ipv6Available - In the implementation block
@property (assign,nonatomic) BOOL hasIpv4DNSServerCount; 
@property (assign,nonatomic) unsigned long long ipv4DNSServerCount;                       //@synthesize ipv4DNSServerCount=_ipv4DNSServerCount - In the implementation block
@property (assign,nonatomic) BOOL hasIpv6DNSServerCount; 
@property (assign,nonatomic) unsigned long long ipv6DNSServerCount;                       //@synthesize ipv6DNSServerCount=_ipv6DNSServerCount - In the implementation block
@property (assign,nonatomic) BOOL hasTlsVersionTimeout; 
@property (assign,nonatomic) BOOL tlsVersionTimeout;                                      //@synthesize tlsVersionTimeout=_tlsVersionTimeout - In the implementation block
@property (assign,nonatomic) BOOL hasSynthesizedExtraIPv6Address; 
@property (assign,nonatomic) BOOL synthesizedExtraIPv6Address;                            //@synthesize synthesizedExtraIPv6Address=_synthesizedExtraIPv6Address - In the implementation block
@property (assign,nonatomic) BOOL hasBytesIn; 
@property (assign,nonatomic) unsigned long long bytesIn;                                  //@synthesize bytesIn=_bytesIn - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOut; 
@property (assign,nonatomic) unsigned long long bytesOut;                                 //@synthesize bytesOut=_bytesOut - In the implementation block
@property (assign,nonatomic) BOOL hasBytesDuplicate; 
@property (assign,nonatomic) unsigned long long bytesDuplicate;                           //@synthesize bytesDuplicate=_bytesDuplicate - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOutOfOrder; 
@property (assign,nonatomic) unsigned long long bytesOutOfOrder;                          //@synthesize bytesOutOfOrder=_bytesOutOfOrder - In the implementation block
@property (assign,nonatomic) BOOL hasBytesRetransmitted; 
@property (assign,nonatomic) unsigned long long bytesRetransmitted;                       //@synthesize bytesRetransmitted=_bytesRetransmitted - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsIn; 
@property (assign,nonatomic) unsigned long long packetsIn;                                //@synthesize packetsIn=_packetsIn - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsOut; 
@property (assign,nonatomic) unsigned long long packetsOut;                               //@synthesize packetsOut=_packetsOut - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentRTT; 
@property (assign,nonatomic) unsigned long long currentRTT;                               //@synthesize currentRTT=_currentRTT - In the implementation block
@property (assign,nonatomic) BOOL hasSmoothedRTT; 
@property (assign,nonatomic) unsigned long long smoothedRTT;                              //@synthesize smoothedRTT=_smoothedRTT - In the implementation block
@property (assign,nonatomic) BOOL hasBestRTT; 
@property (assign,nonatomic) unsigned long long bestRTT;                                  //@synthesize bestRTT=_bestRTT - In the implementation block
@property (assign,nonatomic) BOOL hasRTTvariance; 
@property (assign,nonatomic) unsigned long long rTTvariance;                              //@synthesize rTTvariance=_rTTvariance - In the implementation block
@property (assign,nonatomic) BOOL hasSynRetransmissionCount; 
@property (assign,nonatomic) unsigned long long synRetransmissionCount;                   //@synthesize synRetransmissionCount=_synRetransmissionCount - In the implementation block
@property (assign,nonatomic) BOOL hasTfoUsed; 
@property (assign,nonatomic) BOOL tfoUsed;                                                //@synthesize tfoUsed=_tfoUsed - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathServiceType; 
@property (assign,nonatomic) unsigned long long multipathServiceType;                     //@synthesize multipathServiceType=_multipathServiceType - In the implementation block
@property (assign,nonatomic) BOOL hasFirstParty; 
@property (assign,nonatomic) BOOL firstParty;                                             //@synthesize firstParty=_firstParty - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesInCell; 
@property (assign,nonatomic) unsigned long long multipathBytesInCell;                     //@synthesize multipathBytesInCell=_multipathBytesInCell - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesOutCell; 
@property (assign,nonatomic) unsigned long long multipathBytesOutCell;                    //@synthesize multipathBytesOutCell=_multipathBytesOutCell - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesInWiFi; 
@property (assign,nonatomic) unsigned long long multipathBytesInWiFi;                     //@synthesize multipathBytesInWiFi=_multipathBytesInWiFi - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesOutWiFi; 
@property (assign,nonatomic) unsigned long long multipathBytesOutWiFi;                    //@synthesize multipathBytesOutWiFi=_multipathBytesOutWiFi - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesInInitial; 
@property (assign,nonatomic) unsigned long long multipathBytesInInitial;                  //@synthesize multipathBytesInInitial=_multipathBytesInInitial - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesOutInitial; 
@property (assign,nonatomic) unsigned long long multipathBytesOutInitial;                 //@synthesize multipathBytesOutInitial=_multipathBytesOutInitial - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsSinceInterfaceChange; 
@property (assign,nonatomic) unsigned long long secondsSinceInterfaceChange;              //@synthesize secondsSinceInterfaceChange=_secondsSinceInterfaceChange - In the implementation block
@property (assign,nonatomic) BOOL hasIsDaemon; 
@property (assign,nonatomic) BOOL isDaemon;                                               //@synthesize isDaemon=_isDaemon - In the implementation block
@property (nonatomic,readonly) BOOL hasProcessName; 
@property (nonatomic,retain) NSString * processName;                                      //@synthesize processName=_processName - In the implementation block
@property (nonatomic,retain) NSMutableArray * activities;                                 //@synthesize activities=_activities - In the implementation block
@property (nonatomic,readonly) BOOL hasConnectionUUID; 
@property (nonatomic,retain) NSString * connectionUUID;                                   //@synthesize connectionUUID=_connectionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTlsHandshakeTimedOut; 
@property (assign,nonatomic) BOOL tlsHandshakeTimedOut;                                   //@synthesize tlsHandshakeTimedOut=_tlsHandshakeTimedOut - In the implementation block
@property (assign,nonatomic) BOOL hasIsPathExpensive; 
@property (assign,nonatomic) BOOL isPathExpensive;                                        //@synthesize isPathExpensive=_isPathExpensive - In the implementation block
@property (assign,nonatomic) BOOL hasIsPathConstrained; 
@property (assign,nonatomic) BOOL isPathConstrained;                                      //@synthesize isPathConstrained=_isPathConstrained - In the implementation block
@property (assign,nonatomic) BOOL hasProhibitsExpensive; 
@property (assign,nonatomic) BOOL prohibitsExpensive;                                     //@synthesize prohibitsExpensive=_prohibitsExpensive - In the implementation block
@property (assign,nonatomic) BOOL hasProhibitsConstrained; 
@property (assign,nonatomic) BOOL prohibitsConstrained;                                   //@synthesize prohibitsConstrained=_prohibitsConstrained - In the implementation block
@property (nonatomic,readonly) BOOL hasL2Report; 
@property (nonatomic,retain) AWDNWL2Report * l2Report;                                    //@synthesize l2Report=_l2Report - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceReport; 
@property (nonatomic,retain) AWDNWDeviceReport * deviceReport;                            //@synthesize deviceReport=_deviceReport - In the implementation block
@property (assign,nonatomic) BOOL hasTransportProtocol; 
@property (assign,nonatomic) int transportProtocol;                                       //@synthesize transportProtocol=_transportProtocol - In the implementation block
@property (assign,nonatomic) BOOL hasDnsProtocol; 
@property (assign,nonatomic) int dnsProtocol;                                             //@synthesize dnsProtocol=_dnsProtocol - In the implementation block
@property (assign,nonatomic) BOOL hasDnsProvider; 
@property (assign,nonatomic) int dnsProvider;                                             //@synthesize dnsProvider=_dnsProvider - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                                         //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) BOOL hasEffectiveBundleID; 
@property (nonatomic,retain) NSString * effectiveBundleID;                                //@synthesize effectiveBundleID=_effectiveBundleID - In the implementation block
+(Class)activitiesType;
-(void)setEffectiveBundleID:(NSString *)arg1 ;
-(BOOL)triggeredPath;
-(AWDNWL2Report *)l2Report;
-(void)setBytesOut:(unsigned long long)arg1 ;
-(void)setTrafficClass:(unsigned long long)arg1 ;
-(void)setHasConnectionReuseCount:(BOOL)arg1 ;
-(BOOL)fallbackEligible;
-(NSMutableArray *)activities;
-(void)setProcessName:(NSString *)arg1 ;
-(void)setWeakFallback:(BOOL)arg1 ;
-(BOOL)hasPacketsOut;
-(unsigned long long)currentRTT;
-(BOOL)multipathConfigured;
-(unsigned long long)secondsSinceInterfaceChange;
-(BOOL)hasDeviceReport;
-(BOOL)firstParty;
-(BOOL)hasTrafficClass;
-(BOOL)isDaemon;
-(unsigned long long)bytesOut;
-(void)setBytesIn:(unsigned long long)arg1 ;
-(BOOL)hasBytesIn;
-(BOOL)hasBytesOut;
-(id)dictionaryRepresentation;
-(void)setPacketsIn:(unsigned long long)arg1 ;
-(void)setHasPacketsOut:(BOOL)arg1 ;
-(unsigned long long)packetsOut;
-(BOOL)hasEffectiveBundleID;
-(unsigned long long)bytesIn;
-(void)setPacketsOut:(unsigned long long)arg1 ;
-(BOOL)tfoConfigured;
-(id)tlsVersionAsString:(int)arg1 ;
-(void)setHasTfoUsed:(BOOL)arg1 ;
-(unsigned long long)tlsMilliseconds;
-(void)setFallbackEligible:(BOOL)arg1 ;
-(void)setHasBestRTT:(BOOL)arg1 ;
-(BOOL)hasBytesOutOfOrder;
-(BOOL)hasTlsVersionTimeout;
-(void)setHasTfoConfigured:(BOOL)arg1 ;
-(void)setHasTransportProtocol:(BOOL)arg1 ;
-(void)setHasIpv4DNSServerCount:(BOOL)arg1 ;
-(BOOL)hasPathTriggerMilliseconds;
-(BOOL)prohibitsExpensive;
-(unsigned long long)bytesOutOfOrder;
-(void)setConnectionUUID:(NSString *)arg1 ;
-(void)setHasMultipathBytesOutInitial:(BOOL)arg1 ;
-(BOOL)hasBundleID;
-(BOOL)hasTransportProtocol;
-(void)setCustomProxyConfigured:(BOOL)arg1 ;
-(BOOL)hasIsPathConstrained;
-(int)failureReason;
-(BOOL)hasMultipathBytesInCell;
-(int)dnsProtocol;
-(void)setPathTriggerMilliseconds:(unsigned long long)arg1 ;
-(unsigned long long)multipathBytesInWiFi;
-(int)transportProtocol;
-(id)transportProtocolAsString:(int)arg1 ;
-(void)setActivities:(NSMutableArray *)arg1 ;
-(unsigned long long)multipathBytesOutInitial;
-(void)setHasConnectedInterfaceType:(BOOL)arg1 ;
-(void)setTlsVersion:(int)arg1 ;
-(BOOL)hasConnectionUUID;
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)hasIpv4AddressCount;
-(BOOL)hasDnsProvider;
-(void)setHasFlowDurationMilliseconds:(BOOL)arg1 ;
-(void)setConnectionReuseCount:(unsigned long long)arg1 ;
-(id)connectedAddressFamilyAsString:(int)arg1 ;
-(unsigned long long)bytesRetransmitted;
-(BOOL)hasConnectionMode;
-(id)failureReasonAsString:(int)arg1 ;
-(BOOL)hasMultipathBytesInInitial;
-(void)setHasCurrentRTT:(BOOL)arg1 ;
-(id)dnsProviderAsString:(int)arg1 ;
-(BOOL)hasDnsProtocol;
-(void)setHasMultipathBytesInInitial:(BOOL)arg1 ;
-(BOOL)hasRTTvariance;
-(BOOL)hasFirstParty;
-(BOOL)hasMultipathBytesOutCell;
-(BOOL)usedFallback;
-(void)setL2Report:(AWDNWL2Report *)arg1 ;
-(NSString *)processName;
-(void)setHasIpv6Available:(BOOL)arg1 ;
-(unsigned long long)packetsIn;
-(void)setHasPathTriggerMilliseconds:(BOOL)arg1 ;
-(BOOL)hasCustomProxyConfigured;
-(unsigned long long)timestamp;
-(void)setHasResolutionMilliseconds:(BOOL)arg1 ;
-(void)setHasDnsProtocol:(BOOL)arg1 ;
-(void)setHasPacketsIn:(BOOL)arg1 ;
-(void)setHasAppleApp:(BOOL)arg1 ;
-(int)tlsVersion;
-(void)setMultipathBytesInWiFi:(unsigned long long)arg1 ;
-(void)setTfoUsed:(BOOL)arg1 ;
-(void)setBytesDuplicate:(unsigned long long)arg1 ;
-(void)setDataStallCount:(unsigned long long)arg1 ;
-(void)setTlsVersionTimeout:(BOOL)arg1 ;
-(void)setIpv6AddressCount:(unsigned long long)arg1 ;
-(BOOL)prohibitsConstrained;
-(void)setFlowConnectMilliseconds:(unsigned long long)arg1 ;
-(BOOL)hasFallbackEligible;
-(void)setCurrentRTT:(unsigned long long)arg1 ;
-(void)setHasIpv4AddressCount:(BOOL)arg1 ;
-(BOOL)hasMultipathBytesInWiFi;
-(BOOL)hasTfoUsed;
-(int)stackLevel;
-(int)StringAsConnectedAddressFamily:(id)arg1 ;
-(int)dnsProvider;
-(unsigned long long)trafficClass;
-(BOOL)hasIsDaemon;
-(id)stackLevelAsString:(int)arg1 ;
-(void)setIpv6DNSServerCount:(unsigned long long)arg1 ;
-(BOOL)hasProhibitsExpensive;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasTlsMilliseconds;
-(BOOL)hasSynthesizedIPv6Address;
-(BOOL)tlsVersionTimeout;
-(void)setHasSmoothedRTT:(BOOL)arg1 ;
-(int)StringAsAppleHost:(id)arg1 ;
-(void)setTlsMilliseconds:(unsigned long long)arg1 ;
-(void)setHasSynthesizedExtraIPv6Address:(BOOL)arg1 ;
-(int)StringAsFirstAddressFamily:(id)arg1 ;
-(BOOL)synthesizedExtraIPv6Address;
-(int)StringAsStackLevel:(id)arg1 ;
-(int)StringAsAppleApp:(id)arg1 ;
-(void)setIsDaemon:(BOOL)arg1 ;
-(void)setFlowDurationMilliseconds:(unsigned long long)arg1 ;
-(unsigned long long)ipv4AddressCount;
-(void)setTfoConfigured:(BOOL)arg1 ;
-(BOOL)hasBytesRetransmitted;
-(void)setHasFirstAddressFamily:(BOOL)arg1 ;
-(BOOL)hasIsPathExpensive;
-(void)setSystemProxyConfigured:(BOOL)arg1 ;
-(BOOL)hasStackLevel;
-(int)StringAsDnsProvider:(id)arg1 ;
-(BOOL)hasFlowDurationMilliseconds;
-(void)setHasMultipathBytesOutCell:(BOOL)arg1 ;
-(unsigned long long)dataStallCount;
-(void)setResolutionMilliseconds:(unsigned long long)arg1 ;
-(void)setSynthesizedIPv6Address:(BOOL)arg1 ;
-(void)setHasMultipathBytesInCell:(BOOL)arg1 ;
-(BOOL)hasIpv6AddressCount;
-(unsigned long long)proxyMilliseconds;
-(BOOL)hasMultipathBytesOutWiFi;
-(void)setHasProhibitsConstrained:(BOOL)arg1 ;
-(void)setHasTlsVersion:(BOOL)arg1 ;
-(BOOL)hasTlsVersion;
-(BOOL)hasDataStallCount;
-(unsigned long long)synRetransmissionCount;
-(void)setAppleHost:(int)arg1 ;
-(int)connectionMode;
-(unsigned long long)rTTvariance;
-(int)usedProxyType;
-(int)StringAsTlsVersion:(id)arg1 ;
-(unsigned long long)bestRTT;
-(void)setTransportProtocol:(int)arg1 ;
-(void)setIpv4AddressCount:(unsigned long long)arg1 ;
-(BOOL)hasMultipathBytesOutInitial;
-(void)setHasIsPathConstrained:(BOOL)arg1 ;
-(void)setMultipathServiceType:(unsigned long long)arg1 ;
-(BOOL)hasMultipathConfigured;
-(BOOL)customProxyConfigured;
-(BOOL)hasSystemProxyConfigured;
-(BOOL)hasAppleHost;
-(void)setConnectedInterfaceType:(int)arg1 ;
-(void)setHasMultipathBytesInWiFi:(BOOL)arg1 ;
-(void)setTlsHandshakeTimedOut:(BOOL)arg1 ;
-(void)setTriggeredPath:(BOOL)arg1 ;
-(BOOL)hasFailureReason;
-(BOOL)tlsHandshakeTimedOut;
-(int)connectedAddressFamily;
-(unsigned long long)multipathBytesOutWiFi;
-(BOOL)ipv4Available;
-(void)setIpv6Available:(BOOL)arg1 ;
-(BOOL)isPathConstrained;
-(unsigned long long)bytesDuplicate;
-(BOOL)hasSynthesizedExtraIPv6Address;
-(id)description;
-(void)setHasCustomProxyConfigured:(BOOL)arg1 ;
-(void)setBestRTT:(unsigned long long)arg1 ;
-(unsigned long long)pathTriggerMilliseconds;
-(unsigned long long)activitiesCount;
-(int)appleHost;
-(void)setHasTlsHandshakeTimedOut:(BOOL)arg1 ;
-(id)appleAppAsString:(int)arg1 ;
-(void)setHasTrafficClass:(BOOL)arg1 ;
-(BOOL)hasConnectedAddressIndex;
-(unsigned long long)multipathBytesInInitial;
-(id)firstAddressFamilyAsString:(int)arg1 ;
-(void)setHasBytesOut:(BOOL)arg1 ;
-(void)setHasDnsProvider:(BOOL)arg1 ;
-(void)setHasRTTvariance:(BOOL)arg1 ;
-(void)setHasTlsVersionTimeout:(BOOL)arg1 ;
-(AWDNWDeviceReport *)deviceReport;
-(void)setFailureReason:(int)arg1 ;
-(BOOL)ipv6Available;
-(void)setIpv4DNSServerCount:(unsigned long long)arg1 ;
-(void)setHasDataStallCount:(BOOL)arg1 ;
-(void)setAppleApp:(int)arg1 ;
-(int)StringAsTransportProtocol:(id)arg1 ;
-(void)setMultipathBytesOutInitial:(unsigned long long)arg1 ;
-(unsigned long long)ipv6AddressCount;
-(BOOL)hasProxyMilliseconds;
-(unsigned long long)ipv6DNSServerCount;
-(unsigned long long)connectionReuseCount;
-(void)setHasBytesRetransmitted:(BOOL)arg1 ;
-(void)setHasSynRetransmissionCount:(BOOL)arg1 ;
-(BOOL)hasMultipathServiceType;
-(void)setUsedProxyType:(int)arg1 ;
-(void)setDeviceReport:(AWDNWDeviceReport *)arg1 ;
-(BOOL)hasUsedFallback;
-(unsigned long long)multipathBytesInCell;
-(NSString *)effectiveBundleID;
-(void)setProxyMilliseconds:(unsigned long long)arg1 ;
-(void)setHasProxyMilliseconds:(BOOL)arg1 ;
-(NSString *)bundleID;
-(BOOL)hasTlsConfigured;
-(id)dnsProtocolAsString:(int)arg1 ;
-(void)setHasMultipathServiceType:(BOOL)arg1 ;
-(NSString *)connectionUUID;
-(void)setSmoothedRTT:(unsigned long long)arg1 ;
-(BOOL)hasBestRTT;
-(void)setBytesRetransmitted:(unsigned long long)arg1 ;
-(void)setMultipathBytesInCell:(unsigned long long)arg1 ;
-(unsigned long long)flowDurationMilliseconds;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)tlsConfigured;
-(void)setRTTvariance:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)connectedAddressIndex;
-(unsigned long long)ipv4DNSServerCount;
-(void)addActivities:(id)arg1 ;
-(unsigned long long)multipathServiceType;
-(void)setTlsConfigured:(BOOL)arg1 ;
-(void)setDnsProvider:(int)arg1 ;
-(int)StringAsConnectionMode:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasConnectedAddressIndex:(BOOL)arg1 ;
-(void)setIsPathConstrained:(BOOL)arg1 ;
-(void)setHasProhibitsExpensive:(BOOL)arg1 ;
-(void)setBytesOutOfOrder:(unsigned long long)arg1 ;
-(void)setMultipathBytesInInitial:(unsigned long long)arg1 ;
-(void)setIsPathExpensive:(BOOL)arg1 ;
-(int)StringAsConnectedInterfaceType:(id)arg1 ;
-(void)setHasMultipathBytesOutWiFi:(BOOL)arg1 ;
-(void)setProhibitsExpensive:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasWeakFallback;
-(BOOL)hasIpv4DNSServerCount;
-(void)setHasUsedProxyType:(BOOL)arg1 ;
-(void)setFirstAddressFamily:(int)arg1 ;
-(BOOL)hasTfoConfigured;
-(void)setMultipathBytesOutCell:(unsigned long long)arg1 ;
-(void)setHasFallbackEligible:(BOOL)arg1 ;
-(unsigned long long)resolutionMilliseconds;
-(void)setStackLevel:(int)arg1 ;
-(unsigned long long)flowConnectMilliseconds;
-(void)setHasWeakFallback:(BOOL)arg1 ;
-(void)setResolutionRequired:(BOOL)arg1 ;
-(BOOL)hasUsedProxyType;
-(BOOL)systemProxyConfigured;
-(BOOL)hasResolutionMilliseconds;
-(void)setHasBytesDuplicate:(BOOL)arg1 ;
-(void)setSynRetransmissionCount:(unsigned long long)arg1 ;
-(id)activitiesAtIndex:(unsigned long long)arg1 ;
-(id)appleHostAsString:(int)arg1 ;
-(void)setHasMultipathConfigured:(BOOL)arg1 ;
-(unsigned long long)multipathBytesOutCell;
-(void)setConnectedAddressFamily:(int)arg1 ;
-(BOOL)weakFallback;
-(id)connectionModeAsString:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isPathExpensive;
-(void)writeTo:(id)arg1 ;
-(void)setHasConnectedAddressFamily:(BOOL)arg1 ;
-(void)setSynthesizedExtraIPv6Address:(BOOL)arg1 ;
-(void)setHasTriggeredPath:(BOOL)arg1 ;
-(void)setHasIpv6AddressCount:(BOOL)arg1 ;
-(BOOL)hasAppleApp;
-(BOOL)tfoUsed;
-(void)setConnectionMode:(int)arg1 ;
-(void)setHasResolutionRequired:(BOOL)arg1 ;
-(BOOL)hasIpv4Available;
-(BOOL)hasFirstAddressFamily;
-(int)StringAsUsedProxyType:(id)arg1 ;
-(int)connectedInterfaceType;
-(void)setUsedFallback:(BOOL)arg1 ;
-(BOOL)hasProcessName;
-(void)setSecondsSinceInterfaceChange:(unsigned long long)arg1 ;
-(void)setMultipathConfigured:(BOOL)arg1 ;
-(void)setHasFlowConnectMilliseconds:(BOOL)arg1 ;
-(void)setHasConnectionMode:(BOOL)arg1 ;
-(void)setHasFirstParty:(BOOL)arg1 ;
-(BOOL)hasCurrentRTT;
-(BOOL)hasResolutionRequired;
-(BOOL)hasSmoothedRTT;
-(void)setFirstParty:(BOOL)arg1 ;
-(BOOL)hasTriggeredPath;
-(BOOL)synthesizedIPv6Address;
-(void)setHasIpv6DNSServerCount:(BOOL)arg1 ;
-(BOOL)hasConnectedInterfaceType;
-(void)setMultipathBytesOutWiFi:(unsigned long long)arg1 ;
-(BOOL)hasSecondsSinceInterfaceChange;
-(BOOL)hasL2Report;
-(int)StringAsDnsProtocol:(id)arg1 ;
-(void)setHasFailureReason:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasConnectedAddressFamily;
-(void)setHasTlsMilliseconds:(BOOL)arg1 ;
-(void)clearActivities;
-(void)setHasAppleHost:(BOOL)arg1 ;
-(void)setIpv4Available:(BOOL)arg1 ;
-(int)firstAddressFamily;
-(BOOL)hasFlowConnectMilliseconds;
-(BOOL)hasConnectionReuseCount;
-(BOOL)hasBytesDuplicate;
-(BOOL)hasSynRetransmissionCount;
-(void)setHasIpv4Available:(BOOL)arg1 ;
-(id)usedProxyTypeAsString:(int)arg1 ;
-(void)setHasBytesIn:(BOOL)arg1 ;
-(BOOL)hasIpv6DNSServerCount;
-(void)setProhibitsConstrained:(BOOL)arg1 ;
-(void)setHasSecondsSinceInterfaceChange:(BOOL)arg1 ;
-(BOOL)hasIpv6Available;
-(void)setHasIsPathExpensive:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasStackLevel:(BOOL)arg1 ;
-(void)setHasTlsConfigured:(BOOL)arg1 ;
-(void)dealloc;
-(void)setHasUsedFallback:(BOOL)arg1 ;
-(void)setHasIsDaemon:(BOOL)arg1 ;
-(BOOL)hasProhibitsConstrained;
-(BOOL)resolutionRequired;
-(void)setHasSynthesizedIPv6Address:(BOOL)arg1 ;
-(void)setConnectedAddressIndex:(unsigned long long)arg1 ;
-(id)connectedInterfaceTypeAsString:(int)arg1 ;
-(int)StringAsFailureReason:(id)arg1 ;
-(unsigned long long)smoothedRTT;
-(BOOL)hasTlsHandshakeTimedOut;
-(void)setHasSystemProxyConfigured:(BOOL)arg1 ;
-(void)setDnsProtocol:(int)arg1 ;
-(BOOL)hasPacketsIn;
-(int)appleApp;
-(void)setHasBytesOutOfOrder:(BOOL)arg1 ;
@end

