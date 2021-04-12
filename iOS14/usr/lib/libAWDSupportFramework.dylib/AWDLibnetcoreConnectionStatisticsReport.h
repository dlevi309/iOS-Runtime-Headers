/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDLibnetcoreConnectionStatisticsReport : PBCodable <NSCopying> {

	unsigned long long _appDataStallTimerMsecs;
	unsigned long long _appReportingDataStallCount;
	unsigned long long _bestRTTMsecs;
	unsigned long long _betterRouteEventCount;
	unsigned long long _bytesDuplicate;
	unsigned long long _bytesIn;
	unsigned long long _bytesOut;
	unsigned long long _bytesOutOfOrder;
	unsigned long long _bytesRetransmitted;
	unsigned long long _connectionEstablishmentTimeMsecs;
	unsigned long long _connectionReuseCount;
	unsigned long long _currentRTTMsecs;
	unsigned long long _dNSResolvedTimeMsecs;
	unsigned long long _flowDurationMsecs;
	unsigned long long _iPAddressAttemptCount;
	unsigned long long _multipathBytesInCell;
	unsigned long long _multipathBytesInInitial;
	unsigned long long _multipathBytesInWiFi;
	unsigned long long _multipathBytesOutCell;
	unsigned long long _multipathBytesOutInitial;
	unsigned long long _multipathBytesOutWiFi;
	unsigned long long _multipathServiceType;
	unsigned long long _packetsDuplicate;
	unsigned long long _packetsIn;
	unsigned long long _packetsOut;
	unsigned long long _packetsOutOfOrder;
	unsigned long long _packetsRetransmitted;
	unsigned long long _rTTvariance;
	unsigned long long _smoothedRTTMsecs;
	unsigned long long _synRetransmissionCount;
	unsigned long long _timeToConnectionEstablishmentMsecs;
	unsigned long long _timeToConnectionStartMsecs;
	unsigned long long _timeToDNSResolvedMsecs;
	unsigned long long _timeToDNSStartMsecs;
	unsigned long long _trafficClass;
	int _connectedInterfaceType;
	int _interfaceType;
	BOOL _cellularFallback;
	BOOL _cellularRRCConnected;
	BOOL _connected;
	BOOL _dNSAnswersCached;
	BOOL _firstParty;
	BOOL _kernelReportedStalls;
	BOOL _kernelReportingConnectionStalled;
	BOOL _kernelReportingReadStalled;
	BOOL _kernelReportingWriteStalled;
	BOOL _tcpFastOpen;
	SCD_Struct_AW25 _has;

}

@property (assign,nonatomic) BOOL hasTimeToDNSResolvedMsecs; 
@property (assign,nonatomic) unsigned long long timeToDNSResolvedMsecs;                          //@synthesize timeToDNSResolvedMsecs=_timeToDNSResolvedMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasDNSAnswersCached; 
@property (assign,nonatomic) BOOL dNSAnswersCached;                                              //@synthesize dNSAnswersCached=_dNSAnswersCached - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToConnectionEstablishmentMsecs; 
@property (assign,nonatomic) unsigned long long timeToConnectionEstablishmentMsecs;              //@synthesize timeToConnectionEstablishmentMsecs=_timeToConnectionEstablishmentMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasIPAddressAttemptCount; 
@property (assign,nonatomic) unsigned long long iPAddressAttemptCount;                           //@synthesize iPAddressAttemptCount=_iPAddressAttemptCount - In the implementation block
@property (assign,nonatomic) BOOL hasFlowDurationMsecs; 
@property (assign,nonatomic) unsigned long long flowDurationMsecs;                               //@synthesize flowDurationMsecs=_flowDurationMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasConnectedInterfaceType; 
@property (assign,nonatomic) int connectedInterfaceType;                                         //@synthesize connectedInterfaceType=_connectedInterfaceType - In the implementation block
@property (assign,nonatomic) BOOL hasKernelReportedStalls; 
@property (assign,nonatomic) BOOL kernelReportedStalls;                                          //@synthesize kernelReportedStalls=_kernelReportedStalls - In the implementation block
@property (assign,nonatomic) BOOL hasKernelReportingConnectionStalled; 
@property (assign,nonatomic) BOOL kernelReportingConnectionStalled;                              //@synthesize kernelReportingConnectionStalled=_kernelReportingConnectionStalled - In the implementation block
@property (assign,nonatomic) BOOL hasKernelReportingReadStalled; 
@property (assign,nonatomic) BOOL kernelReportingReadStalled;                                    //@synthesize kernelReportingReadStalled=_kernelReportingReadStalled - In the implementation block
@property (assign,nonatomic) BOOL hasKernelReportingWriteStalled; 
@property (assign,nonatomic) BOOL kernelReportingWriteStalled;                                   //@synthesize kernelReportingWriteStalled=_kernelReportingWriteStalled - In the implementation block
@property (assign,nonatomic) BOOL hasBytesIn; 
@property (assign,nonatomic) unsigned long long bytesIn;                                         //@synthesize bytesIn=_bytesIn - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOut; 
@property (assign,nonatomic) unsigned long long bytesOut;                                        //@synthesize bytesOut=_bytesOut - In the implementation block
@property (assign,nonatomic) BOOL hasBytesDuplicate; 
@property (assign,nonatomic) unsigned long long bytesDuplicate;                                  //@synthesize bytesDuplicate=_bytesDuplicate - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOutOfOrder; 
@property (assign,nonatomic) unsigned long long bytesOutOfOrder;                                 //@synthesize bytesOutOfOrder=_bytesOutOfOrder - In the implementation block
@property (assign,nonatomic) BOOL hasBytesRetransmitted; 
@property (assign,nonatomic) unsigned long long bytesRetransmitted;                              //@synthesize bytesRetransmitted=_bytesRetransmitted - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsIn; 
@property (assign,nonatomic) unsigned long long packetsIn;                                       //@synthesize packetsIn=_packetsIn - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsOut; 
@property (assign,nonatomic) unsigned long long packetsOut;                                      //@synthesize packetsOut=_packetsOut - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsDuplicate; 
@property (assign,nonatomic) unsigned long long packetsDuplicate;                                //@synthesize packetsDuplicate=_packetsDuplicate - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsOutOfOrder; 
@property (assign,nonatomic) unsigned long long packetsOutOfOrder;                               //@synthesize packetsOutOfOrder=_packetsOutOfOrder - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsRetransmitted; 
@property (assign,nonatomic) unsigned long long packetsRetransmitted;                            //@synthesize packetsRetransmitted=_packetsRetransmitted - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentRTTMsecs; 
@property (assign,nonatomic) unsigned long long currentRTTMsecs;                                 //@synthesize currentRTTMsecs=_currentRTTMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasSmoothedRTTMsecs; 
@property (assign,nonatomic) unsigned long long smoothedRTTMsecs;                                //@synthesize smoothedRTTMsecs=_smoothedRTTMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasBestRTTMsecs; 
@property (assign,nonatomic) unsigned long long bestRTTMsecs;                                    //@synthesize bestRTTMsecs=_bestRTTMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasRTTvariance; 
@property (assign,nonatomic) unsigned long long rTTvariance;                                     //@synthesize rTTvariance=_rTTvariance - In the implementation block
@property (assign,nonatomic) BOOL hasSynRetransmissionCount; 
@property (assign,nonatomic) unsigned long long synRetransmissionCount;                          //@synthesize synRetransmissionCount=_synRetransmissionCount - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionReuseCount; 
@property (assign,nonatomic) unsigned long long connectionReuseCount;                            //@synthesize connectionReuseCount=_connectionReuseCount - In the implementation block
@property (assign,nonatomic) BOOL hasAppReportingDataStallCount; 
@property (assign,nonatomic) unsigned long long appReportingDataStallCount;                      //@synthesize appReportingDataStallCount=_appReportingDataStallCount - In the implementation block
@property (assign,nonatomic) BOOL hasAppDataStallTimerMsecs; 
@property (assign,nonatomic) unsigned long long appDataStallTimerMsecs;                          //@synthesize appDataStallTimerMsecs=_appDataStallTimerMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficClass; 
@property (assign,nonatomic) unsigned long long trafficClass;                                    //@synthesize trafficClass=_trafficClass - In the implementation block
@property (assign,nonatomic) BOOL hasTcpFastOpen; 
@property (assign,nonatomic) BOOL tcpFastOpen;                                                   //@synthesize tcpFastOpen=_tcpFastOpen - In the implementation block
@property (assign,nonatomic) BOOL hasCellularFallback; 
@property (assign,nonatomic) BOOL cellularFallback;                                              //@synthesize cellularFallback=_cellularFallback - In the implementation block
@property (assign,nonatomic) BOOL hasCellularRRCConnected; 
@property (assign,nonatomic) BOOL cellularRRCConnected;                                          //@synthesize cellularRRCConnected=_cellularRRCConnected - In the implementation block
@property (assign,nonatomic) BOOL hasConnected; 
@property (assign,nonatomic) BOOL connected;                                                     //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) BOOL hasInterfaceType; 
@property (assign,nonatomic) int interfaceType;                                                  //@synthesize interfaceType=_interfaceType - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToDNSStartMsecs; 
@property (assign,nonatomic) unsigned long long timeToDNSStartMsecs;                             //@synthesize timeToDNSStartMsecs=_timeToDNSStartMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasDNSResolvedTimeMsecs; 
@property (assign,nonatomic) unsigned long long dNSResolvedTimeMsecs;                            //@synthesize dNSResolvedTimeMsecs=_dNSResolvedTimeMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToConnectionStartMsecs; 
@property (assign,nonatomic) unsigned long long timeToConnectionStartMsecs;                      //@synthesize timeToConnectionStartMsecs=_timeToConnectionStartMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionEstablishmentTimeMsecs; 
@property (assign,nonatomic) unsigned long long connectionEstablishmentTimeMsecs;                //@synthesize connectionEstablishmentTimeMsecs=_connectionEstablishmentTimeMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasBetterRouteEventCount; 
@property (assign,nonatomic) unsigned long long betterRouteEventCount;                           //@synthesize betterRouteEventCount=_betterRouteEventCount - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathServiceType; 
@property (assign,nonatomic) unsigned long long multipathServiceType;                            //@synthesize multipathServiceType=_multipathServiceType - In the implementation block
@property (assign,nonatomic) BOOL hasFirstParty; 
@property (assign,nonatomic) BOOL firstParty;                                                    //@synthesize firstParty=_firstParty - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesInCell; 
@property (assign,nonatomic) unsigned long long multipathBytesInCell;                            //@synthesize multipathBytesInCell=_multipathBytesInCell - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesOutCell; 
@property (assign,nonatomic) unsigned long long multipathBytesOutCell;                           //@synthesize multipathBytesOutCell=_multipathBytesOutCell - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesInWiFi; 
@property (assign,nonatomic) unsigned long long multipathBytesInWiFi;                            //@synthesize multipathBytesInWiFi=_multipathBytesInWiFi - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesOutWiFi; 
@property (assign,nonatomic) unsigned long long multipathBytesOutWiFi;                           //@synthesize multipathBytesOutWiFi=_multipathBytesOutWiFi - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesInInitial; 
@property (assign,nonatomic) unsigned long long multipathBytesInInitial;                         //@synthesize multipathBytesInInitial=_multipathBytesInInitial - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesOutInitial; 
@property (assign,nonatomic) unsigned long long multipathBytesOutInitial;                        //@synthesize multipathBytesOutInitial=_multipathBytesOutInitial - In the implementation block
-(void)setBytesOut:(unsigned long long)arg1 ;
-(void)setTrafficClass:(unsigned long long)arg1 ;
-(void)setHasConnectionReuseCount:(BOOL)arg1 ;
-(BOOL)connected;
-(BOOL)hasPacketsOut;
-(BOOL)firstParty;
-(BOOL)hasTrafficClass;
-(unsigned long long)bytesOut;
-(void)setBytesIn:(unsigned long long)arg1 ;
-(BOOL)hasBytesIn;
-(BOOL)hasBytesOut;
-(id)dictionaryRepresentation;
-(void)setHasDNSAnswersCached:(BOOL)arg1 ;
-(void)setPacketsIn:(unsigned long long)arg1 ;
-(void)setHasPacketsOut:(BOOL)arg1 ;
-(unsigned long long)packetsOut;
-(unsigned long long)bytesIn;
-(void)setPacketsOut:(unsigned long long)arg1 ;
-(BOOL)hasDNSResolvedTimeMsecs;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)cellularFallback;
-(void)setCurrentRTTMsecs:(unsigned long long)arg1 ;
-(void)setPacketsDuplicate:(unsigned long long)arg1 ;
-(BOOL)hasBytesOutOfOrder;
-(void)setHasIPAddressAttemptCount:(BOOL)arg1 ;
-(unsigned long long)bytesOutOfOrder;
-(void)setHasMultipathBytesOutInitial:(BOOL)arg1 ;
-(int)interfaceType;
-(void)setDNSResolvedTimeMsecs:(unsigned long long)arg1 ;
-(BOOL)hasMultipathBytesInCell;
-(unsigned long long)multipathBytesInWiFi;
-(void)setHasTcpFastOpen:(BOOL)arg1 ;
-(void)setKernelReportingReadStalled:(BOOL)arg1 ;
-(void)setBestRTTMsecs:(unsigned long long)arg1 ;
-(void)setHasAppDataStallTimerMsecs:(BOOL)arg1 ;
-(unsigned long long)multipathBytesOutInitial;
-(void)setHasConnectedInterfaceType:(BOOL)arg1 ;
-(BOOL)hasAppReportingDataStallCount;
-(void)setHasKernelReportingWriteStalled:(BOOL)arg1 ;
-(BOOL)hasCellularRRCConnected;
-(void)setConnectionReuseCount:(unsigned long long)arg1 ;
-(unsigned long long)bytesRetransmitted;
-(void)setHasConnected:(BOOL)arg1 ;
-(BOOL)hasMultipathBytesInInitial;
-(void)setSmoothedRTTMsecs:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesInInitial:(BOOL)arg1 ;
-(BOOL)hasRTTvariance;
-(void)setHasKernelReportingReadStalled:(BOOL)arg1 ;
-(BOOL)hasFirstParty;
-(BOOL)hasMultipathBytesOutCell;
-(unsigned long long)packetsIn;
-(BOOL)hasBetterRouteEventCount;
-(void)setHasTimeToConnectionEstablishmentMsecs:(BOOL)arg1 ;
-(void)setHasPacketsIn:(BOOL)arg1 ;
-(BOOL)cellularRRCConnected;
-(void)setMultipathBytesInWiFi:(unsigned long long)arg1 ;
-(void)setBytesDuplicate:(unsigned long long)arg1 ;
-(BOOL)hasMultipathBytesInWiFi;
-(unsigned long long)iPAddressAttemptCount;
-(BOOL)hasKernelReportingConnectionStalled;
-(unsigned long long)trafficClass;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasPacketsRetransmitted;
-(void)setHasTimeToConnectionStartMsecs:(BOOL)arg1 ;
-(void)setHasCellularFallback:(BOOL)arg1 ;
-(BOOL)hasBytesRetransmitted;
-(BOOL)hasSmoothedRTTMsecs;
-(void)setTimeToDNSResolvedMsecs:(unsigned long long)arg1 ;
-(unsigned long long)appReportingDataStallCount;
-(void)setHasMultipathBytesOutCell:(BOOL)arg1 ;
-(void)setKernelReportingWriteStalled:(BOOL)arg1 ;
-(void)setHasMultipathBytesInCell:(BOOL)arg1 ;
-(void)setHasSmoothedRTTMsecs:(BOOL)arg1 ;
-(BOOL)hasMultipathBytesOutWiFi;
-(BOOL)hasTcpFastOpen;
-(void)setHasDNSResolvedTimeMsecs:(BOOL)arg1 ;
-(BOOL)kernelReportingWriteStalled;
-(unsigned long long)synRetransmissionCount;
-(void)setConnectionEstablishmentTimeMsecs:(unsigned long long)arg1 ;
-(BOOL)hasTimeToConnectionStartMsecs;
-(unsigned long long)rTTvariance;
-(unsigned long long)currentRTTMsecs;
-(BOOL)hasTimeToConnectionEstablishmentMsecs;
-(BOOL)hasMultipathBytesOutInitial;
-(void)setMultipathServiceType:(unsigned long long)arg1 ;
-(void)setHasKernelReportingConnectionStalled:(BOOL)arg1 ;
-(void)setConnectedInterfaceType:(int)arg1 ;
-(BOOL)hasFlowDurationMsecs;
-(void)setHasMultipathBytesInWiFi:(BOOL)arg1 ;
-(unsigned long long)appDataStallTimerMsecs;
-(unsigned long long)betterRouteEventCount;
-(unsigned long long)multipathBytesOutWiFi;
-(unsigned long long)bytesDuplicate;
-(id)description;
-(unsigned long long)connectionEstablishmentTimeMsecs;
-(BOOL)kernelReportingConnectionStalled;
-(BOOL)hasAppDataStallTimerMsecs;
-(void)setHasTrafficClass:(BOOL)arg1 ;
-(unsigned long long)multipathBytesInInitial;
-(void)setAppReportingDataStallCount:(unsigned long long)arg1 ;
-(unsigned long long)packetsDuplicate;
-(void)setHasBytesOut:(BOOL)arg1 ;
-(void)setHasRTTvariance:(BOOL)arg1 ;
-(BOOL)dNSAnswersCached;
-(void)setPacketsRetransmitted:(unsigned long long)arg1 ;
-(unsigned long long)timeToConnectionEstablishmentMsecs;
-(void)setMultipathBytesOutInitial:(unsigned long long)arg1 ;
-(unsigned long long)connectionReuseCount;
-(BOOL)kernelReportingReadStalled;
-(void)setHasBytesRetransmitted:(BOOL)arg1 ;
-(void)setHasTimeToDNSStartMsecs:(BOOL)arg1 ;
-(void)setHasSynRetransmissionCount:(BOOL)arg1 ;
-(unsigned long long)timeToDNSStartMsecs;
-(void)setHasFlowDurationMsecs:(BOOL)arg1 ;
-(BOOL)hasMultipathServiceType;
-(unsigned long long)multipathBytesInCell;
-(unsigned long long)dNSResolvedTimeMsecs;
-(int)StringAsInterfaceType:(id)arg1 ;
-(void)setCellularRRCConnected:(BOOL)arg1 ;
-(void)setHasAppReportingDataStallCount:(BOOL)arg1 ;
-(void)setHasPacketsRetransmitted:(BOOL)arg1 ;
-(void)setHasMultipathServiceType:(BOOL)arg1 ;
-(unsigned long long)packetsRetransmitted;
-(void)setBytesRetransmitted:(unsigned long long)arg1 ;
-(unsigned long long)bestRTTMsecs;
-(void)setKernelReportingConnectionStalled:(BOOL)arg1 ;
-(void)setMultipathBytesInCell:(unsigned long long)arg1 ;
-(BOOL)hasTimeToDNSStartMsecs;
-(void)setRTTvariance:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(void)setHasInterfaceType:(BOOL)arg1 ;
-(unsigned long long)multipathServiceType;
-(BOOL)hasCellularFallback;
-(void)setDNSAnswersCached:(BOOL)arg1 ;
-(void)setIPAddressAttemptCount:(unsigned long long)arg1 ;
-(void)setBytesOutOfOrder:(unsigned long long)arg1 ;
-(void)setHasTimeToDNSResolvedMsecs:(BOOL)arg1 ;
-(void)setPacketsOutOfOrder:(unsigned long long)arg1 ;
-(void)setMultipathBytesInInitial:(unsigned long long)arg1 ;
-(int)StringAsConnectedInterfaceType:(id)arg1 ;
-(void)setHasMultipathBytesOutWiFi:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasKernelReportedStalls:(BOOL)arg1 ;
-(void)setTimeToConnectionStartMsecs:(unsigned long long)arg1 ;
-(void)setMultipathBytesOutCell:(unsigned long long)arg1 ;
-(BOOL)hasPacketsDuplicate;
-(void)setHasPacketsDuplicate:(BOOL)arg1 ;
-(unsigned long long)packetsOutOfOrder;
-(void)setHasConnectionEstablishmentTimeMsecs:(BOOL)arg1 ;
-(void)setHasBytesDuplicate:(BOOL)arg1 ;
-(void)setSynRetransmissionCount:(unsigned long long)arg1 ;
-(void)setHasBetterRouteEventCount:(BOOL)arg1 ;
-(void)setHasBestRTTMsecs:(BOOL)arg1 ;
-(unsigned long long)multipathBytesOutCell;
-(void)setKernelReportedStalls:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)smoothedRTTMsecs;
-(void)setAppDataStallTimerMsecs:(unsigned long long)arg1 ;
-(void)setInterfaceType:(int)arg1 ;
-(BOOL)hasKernelReportingWriteStalled;
-(int)connectedInterfaceType;
-(unsigned long long)flowDurationMsecs;
-(id)interfaceTypeAsString:(int)arg1 ;
-(BOOL)hasConnected;
-(void)setTimeToConnectionEstablishmentMsecs:(unsigned long long)arg1 ;
-(unsigned long long)timeToConnectionStartMsecs;
-(BOOL)kernelReportedStalls;
-(void)setHasFirstParty:(BOOL)arg1 ;
-(BOOL)hasDNSAnswersCached;
-(BOOL)hasIPAddressAttemptCount;
-(BOOL)hasTimeToDNSResolvedMsecs;
-(BOOL)hasCurrentRTTMsecs;
-(BOOL)hasBestRTTMsecs;
-(BOOL)hasPacketsOutOfOrder;
-(BOOL)hasKernelReportedStalls;
-(void)setFirstParty:(BOOL)arg1 ;
-(void)setFlowDurationMsecs:(unsigned long long)arg1 ;
-(void)setTcpFastOpen:(BOOL)arg1 ;
-(BOOL)hasConnectedInterfaceType;
-(void)setMultipathBytesOutWiFi:(unsigned long long)arg1 ;
-(BOOL)hasInterfaceType;
-(void)setCellularFallback:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasConnectionEstablishmentTimeMsecs;
-(BOOL)tcpFastOpen;
-(BOOL)hasConnectionReuseCount;
-(BOOL)hasBytesDuplicate;
-(void)setHasCurrentRTTMsecs:(BOOL)arg1 ;
-(BOOL)hasSynRetransmissionCount;
-(void)setHasBytesIn:(BOOL)arg1 ;
-(BOOL)hasKernelReportingReadStalled;
-(void)setHasPacketsOutOfOrder:(BOOL)arg1 ;
-(void)setBetterRouteEventCount:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasCellularRRCConnected:(BOOL)arg1 ;
-(id)connectedInterfaceTypeAsString:(int)arg1 ;
-(void)setTimeToDNSStartMsecs:(unsigned long long)arg1 ;
-(BOOL)hasPacketsIn;
-(unsigned long long)timeToDNSResolvedMsecs;
-(void)setHasBytesOutOfOrder:(BOOL)arg1 ;
@end

