/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


#import <Network/Network-Structs.h>
@class NSString, NSUUID, NSArray, NWL2Report, NWDeviceReport, PBCodable;

@interface NWConnectionStatistics : NSObject {

	unsigned _awdMetricID;
	NSString* _clientIdentifier;
	NSString* _sourceIdentifier;
	NSUUID* _externallyVisibleConnectionUUID;
	NSUUID* _externallyVisibleParentUUID;
	NSArray* _externallyVisibleActivityUUIDs;
	NWL2Report* _layer2Report;
	NWDeviceReport* _deviceReport;
	PBCodable* _awdReport;
	NSArray* _activities;
	netcore_stats_tcp_report _report;

}

@property (nonatomic,retain) NSString * clientIdentifier;                                //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) netcore_stats_tcp_report report;                            //@synthesize report=_report - In the implementation block
@property (nonatomic,retain) PBCodable * awdReport;                                      //@synthesize awdReport=_awdReport - In the implementation block
@property (assign,nonatomic) unsigned awdMetricID;                                       //@synthesize awdMetricID=_awdMetricID - In the implementation block
@property (nonatomic,retain) NSArray * activities;                                       //@synthesize activities=_activities - In the implementation block
@property (nonatomic,retain) NSString * sourceIdentifier;                                //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL delegated; 
@property (nonatomic,readonly) int interfaceType; 
@property (nonatomic,readonly) unsigned timeToDnsResolvedMsecs; 
@property (nonatomic,readonly) unsigned timeToDnsStartMsecs; 
@property (nonatomic,readonly) unsigned dnsResolvedTimeMsecs; 
@property (nonatomic,readonly) BOOL dnsAnswersCached; 
@property (nonatomic,readonly) unsigned timeToConnectionStartMsecs; 
@property (nonatomic,readonly) unsigned timeToConnectionEstablishmentMsecs; 
@property (nonatomic,readonly) unsigned connectionEstablishmentTimeMsecs; 
@property (nonatomic,readonly) unsigned flowDurationMsecs; 
@property (nonatomic,readonly) int connectedInterfaceType; 
@property (nonatomic,readonly) BOOL connected; 
@property (nonatomic,readonly) unsigned trafficClass; 
@property (nonatomic,readonly) BOOL fallbackEligible; 
@property (nonatomic,readonly) BOOL cellularFallback; 
@property (nonatomic,readonly) BOOL cellularRrcConnected; 
@property (nonatomic,readonly) BOOL tls13Configured; 
@property (nonatomic,readonly) BOOL tlsSucceeded; 
@property (nonatomic,readonly) BOOL kernelReportedStalls; 
@property (nonatomic,readonly) BOOL kernelReportingConnectionStalled; 
@property (nonatomic,readonly) BOOL kernelReportingReadStalled; 
@property (nonatomic,readonly) BOOL kernelReportingWriteStalled; 
@property (nonatomic,readonly) unsigned long long bytesIn; 
@property (nonatomic,readonly) unsigned long long bytesOut; 
@property (nonatomic,readonly) unsigned long long bytesDuplicate; 
@property (nonatomic,readonly) unsigned long long bytesOOO; 
@property (nonatomic,readonly) unsigned long long bytesRetransmitted; 
@property (nonatomic,readonly) unsigned long long packetsIn; 
@property (nonatomic,readonly) unsigned long long packetsOut; 
@property (nonatomic,readonly) unsigned long long packetsDuplicate; 
@property (nonatomic,readonly) unsigned long long packetsOOO; 
@property (nonatomic,readonly) unsigned long long packetsRetransmitted; 
@property (nonatomic,readonly) unsigned tcpRTTCurrentMsecs; 
@property (nonatomic,readonly) unsigned tcpRTTSmoothedMsecs; 
@property (nonatomic,readonly) unsigned tcpRTTBestMsecs; 
@property (nonatomic,readonly) unsigned tcpRTTVariance; 
@property (nonatomic,readonly) unsigned tcpSynRetransmissionCount; 
@property (nonatomic,readonly) BOOL tcpFastOpen; 
@property (nonatomic,readonly) unsigned tcpBetterRouteEventCount; 
@property (nonatomic,readonly) unsigned tcpConnectionReuseCount; 
@property (nonatomic,readonly) unsigned tcpAppReportingDataStallCount; 
@property (nonatomic,readonly) unsigned tcpAppDataStallTimerMsecs; 
@property (nonatomic,readonly) unsigned connectionReportReason; 
@property (nonatomic,readonly) NSUUID * connectionUUID; 
@property (nonatomic,retain) NSUUID * externallyVisibleConnectionUUID;                   //@synthesize externallyVisibleConnectionUUID=_externallyVisibleConnectionUUID - In the implementation block
@property (nonatomic,readonly) NSUUID * parentUUID; 
@property (nonatomic,retain) NSUUID * externallyVisibleParentUUID;                       //@synthesize externallyVisibleParentUUID=_externallyVisibleParentUUID - In the implementation block
@property (nonatomic,retain) NSArray * externallyVisibleActivityUUIDs;                   //@synthesize externallyVisibleActivityUUIDs=_externallyVisibleActivityUUIDs - In the implementation block
@property (nonatomic,retain) NWL2Report * layer2Report;                                  //@synthesize layer2Report=_layer2Report - In the implementation block
@property (nonatomic,retain) NWDeviceReport * deviceReport;                              //@synthesize deviceReport=_deviceReport - In the implementation block
@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,retain) NSString * effectiveBundleID; 
-(void)setEffectiveBundleID:(NSString *)arg1 ;
-(BOOL)fallbackEligible;
-(BOOL)connected;
-(NSArray *)activities;
-(unsigned long long)bytesOut;
-(unsigned long long)packetsOut;
-(unsigned long long)bytesIn;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(unsigned)tcpRTTSmoothedMsecs;
-(BOOL)cellularFallback;
-(unsigned)tcpConnectionReuseCount;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(int)interfaceType;
-(id)_createDataUsageSnapshotFromStruct:(const netcore_stats_data_usage_snapshot*)arg1 ;
-(unsigned)tcpAppReportingDataStallCount;
-(void)setActivities:(NSArray *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(unsigned long long)packetsOOO;
-(unsigned long long)bytesRetransmitted;
-(unsigned long long)packetsIn;
-(void)setExternallyVisibleConnectionUUID:(NSUUID *)arg1 ;
-(unsigned long long)bytesOOO;
-(NSArray *)externallyVisibleActivityUUIDs;
-(unsigned)trafficClass;
-(void)setExternallyVisibleActivityUUIDs:(NSArray *)arg1 ;
-(BOOL)tlsSucceeded;
-(BOOL)cellularRrcConnected;
-(unsigned)timeToDnsResolvedMsecs;
-(netcore_stats_tcp_report)report;
-(unsigned)connectionReportReason;
-(NSUUID *)parentUUID;
-(BOOL)kernelReportingWriteStalled;
-(unsigned)tcpBetterRouteEventCount;
-(unsigned)tcpRTTCurrentMsecs;
-(void)setAwdMetricID:(unsigned)arg1 ;
-(BOOL)tlsHandshakeTimedOut;
-(unsigned long long)bytesDuplicate;
-(BOOL)dnsAnswersCached;
-(id)initWithPBCodableData:(id)arg1 ;
-(BOOL)delegated;
-(unsigned)connectionEstablishmentTimeMsecs;
-(BOOL)kernelReportingConnectionStalled;
-(unsigned)timeToDnsStartMsecs;
-(BOOL)tls13Configured;
-(unsigned long long)packetsDuplicate;
-(NWDeviceReport *)deviceReport;
-(NWL2Report *)layer2Report;
-(unsigned)timeToConnectionEstablishmentMsecs;
-(BOOL)kernelReportingReadStalled;
-(void)setDeviceReport:(NWDeviceReport *)arg1 ;
-(NSString *)effectiveBundleID;
-(NSString *)bundleID;
-(NSUUID *)connectionUUID;
-(unsigned long long)packetsRetransmitted;
-(id)initWithTCPReport:(netcore_stats_tcp_report*)arg1 length:(unsigned long long)arg2 clientIdentifier:(id)arg3 sourceIdentifier:(id)arg4 ;
-(id)_createStatisticsReportFromStruct:(const netcore_stats_tcp_statistics_report*)arg1 ;
-(id)_createFallbackReportFromStruct:(const netcore_stats_tcp_cell_fallback_report*)arg1 ;
-(PBCodable *)awdReport;
-(void)setAwdReport:(PBCodable *)arg1 ;
-(void)setReport:(netcore_stats_tcp_report)arg1 ;
-(NSString *)clientIdentifier;
-(int)connectedInterfaceType;
-(unsigned)flowDurationMsecs;
-(void)setLayer2Report:(NWL2Report *)arg1 ;
-(unsigned)tcpSynRetransmissionCount;
-(unsigned)timeToConnectionStartMsecs;
-(BOOL)kernelReportedStalls;
-(NSUUID *)externallyVisibleConnectionUUID;
-(NSUUID *)externallyVisibleParentUUID;
-(void)setExternallyVisibleParentUUID:(NSUUID *)arg1 ;
-(unsigned)dnsResolvedTimeMsecs;
-(unsigned)tcpRTTVariance;
-(BOOL)tcpFastOpen;
-(unsigned)tcpRTTBestMsecs;
-(unsigned)tcpAppDataStallTimerMsecs;
-(unsigned)awdMetricID;
-(NSString *)sourceIdentifier;
@end

