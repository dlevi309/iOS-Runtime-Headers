/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/


#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
@class NSDate, NSString, NSUUID, NSDictionary, NSData;

@interface NWUsageProtocolSnapshot : NSObject {

	unsigned _flags;
	update_subset_for_deltas _prev_items;
	nstat_msg_src_update_convenient _nstat_update;
	BOOL _isADaemon;
	BOOL _failedRouteValuesLookup;
	BOOL _failedFlowswitchValuesLookup;
	BOOL _failedSkywalkAction;
	BOOL _startScreenStateOn;
	BOOL _snapshotScreenStateOn;
	BOOL _interfaceUnknown;
	BOOL _interfaceLoopback;
	BOOL _interfaceCellular;
	BOOL _interfaceCellularViaFallback;
	BOOL _interfaceWiFi;
	BOOL _interfaceWired;
	BOOL _interfaceAWDL;
	BOOL _interfaceExpensive;
	BOOL _interfaceCompanionLink;
	BOOL _flowUsesChannels;
	BOOL _hasTraffic;
	BOOL _hasTrafficDelta;
	BOOL _hasWiFiTraffic;
	BOOL _hasWiFiTrafficDelta;
	BOOL _hasCellTraffic;
	BOOL _hasCellTrafficDelta;
	BOOL _hasWiredTraffic;
	BOOL _hasWiredTrafficDelta;
	int _snapshotReason;
	unsigned _interfaceIndex;
	unsigned _receiveBufferSize;
	unsigned _receiveBufferUsed;
	unsigned _trafficClass;
	int _processID;
	int _epid;
	int _attributionReason;
	unsigned _startAppState;
	unsigned _snapshotAppState;
	unsigned __flow_flags;
	unsigned long long _flowStartContinuousTime;
	NSDate* _flowStartTimestamp;
	NSDate* _flowSnapshotTimestamp;
	double _flowStartTimeIntervalSinceReferenceDate;
	double _flowSnapshotTimeIntervalSinceReferenceDate;
	double _flowStartTimeIntervalSince1970;
	double _flowSnapshotTimeIntervalSince1970;
	double _flowDuration;
	unsigned long long _uniqueProcessID;
	NSString* _processName;
	unsigned long long _eupid;
	NSUUID* _uuid;
	NSUUID* _euuid;
	NSUUID* _vuuid;
	NSUUID* _flowuuid;
	NSString* _attributedEntity;
	NSString* _delegateName;
	NSDictionary* _lookupResults;
	NSData* _localAddress;
	NSData* _remoteAddress;
	unsigned long long _networkActivityMapStartTime;
	unsigned long long _networkActivityMapPart1;
	unsigned long long _networkActivityMapPart2;

}

@property (nonatomic,readonly) unsigned _flow_flags;                                            //@synthesize _flow_flags=__flow_flags - In the implementation block
@property (nonatomic,readonly) const update_subset_for_deltas* _update_delta_ptr; 
@property (nonatomic,readonly) const nstat_msg_src_update_convenient* _update_ptr; 
@property (nonatomic,retain) NSString * attributedEntity;                                       //@synthesize attributedEntity=_attributedEntity - In the implementation block
@property (assign,nonatomic) int attributionReason;                                             //@synthesize attributionReason=_attributionReason - In the implementation block
@property (assign,nonatomic) int snapshotReason;                                                //@synthesize snapshotReason=_snapshotReason - In the implementation block
@property (assign,nonatomic) BOOL isADaemon;                                                    //@synthesize isADaemon=_isADaemon - In the implementation block
@property (nonatomic,retain) NSString * delegateName;                                           //@synthesize delegateName=_delegateName - In the implementation block
@property (nonatomic,retain) NSDictionary * lookupResults;                                      //@synthesize lookupResults=_lookupResults - In the implementation block
@property (assign,nonatomic) unsigned startAppState;                                            //@synthesize startAppState=_startAppState - In the implementation block
@property (assign,nonatomic) BOOL startScreenStateOn;                                           //@synthesize startScreenStateOn=_startScreenStateOn - In the implementation block
@property (assign,nonatomic) unsigned snapshotAppState;                                         //@synthesize snapshotAppState=_snapshotAppState - In the implementation block
@property (assign,nonatomic) BOOL snapshotScreenStateOn;                                        //@synthesize snapshotScreenStateOn=_snapshotScreenStateOn - In the implementation block
@property (assign,nonatomic) double flowSnapshotTimeIntervalSinceReferenceDate;                 //@synthesize flowSnapshotTimeIntervalSinceReferenceDate=_flowSnapshotTimeIntervalSinceReferenceDate - In the implementation block
@property (nonatomic,readonly) unsigned long long flowIdentifier; 
@property (nonatomic,readonly) unsigned long long flowStartContinuousTime;                      //@synthesize flowStartContinuousTime=_flowStartContinuousTime - In the implementation block
@property (nonatomic,readonly) NSDate * flowStartTimestamp;                                     //@synthesize flowStartTimestamp=_flowStartTimestamp - In the implementation block
@property (nonatomic,readonly) NSDate * flowSnapshotTimestamp;                                  //@synthesize flowSnapshotTimestamp=_flowSnapshotTimestamp - In the implementation block
@property (nonatomic,readonly) double flowStartTimeIntervalSinceReferenceDate;                  //@synthesize flowStartTimeIntervalSinceReferenceDate=_flowStartTimeIntervalSinceReferenceDate - In the implementation block
@property (nonatomic,readonly) double flowStartTimeIntervalSince1970;                           //@synthesize flowStartTimeIntervalSince1970=_flowStartTimeIntervalSince1970 - In the implementation block
@property (nonatomic,readonly) double flowSnapshotTimeIntervalSince1970;                        //@synthesize flowSnapshotTimeIntervalSince1970=_flowSnapshotTimeIntervalSince1970 - In the implementation block
@property (nonatomic,readonly) double flowDuration;                                             //@synthesize flowDuration=_flowDuration - In the implementation block
@property (nonatomic,readonly) NSString * snapshotReasonString; 
@property (nonatomic,readonly) unsigned long long eventFlags; 
@property (nonatomic,readonly) NSString * flowType; 
@property (nonatomic,readonly) unsigned long long rxPackets; 
@property (nonatomic,readonly) unsigned long long txPackets; 
@property (nonatomic,readonly) unsigned long long rxBytes; 
@property (nonatomic,readonly) unsigned long long txBytes; 
@property (nonatomic,readonly) unsigned long long rxCellularBytes; 
@property (nonatomic,readonly) unsigned long long rxWiFiBytes; 
@property (nonatomic,readonly) unsigned long long rxWiredBytes; 
@property (nonatomic,readonly) unsigned long long txCellularBytes; 
@property (nonatomic,readonly) unsigned long long txWiFiBytes; 
@property (nonatomic,readonly) unsigned long long txWiredBytes; 
@property (nonatomic,readonly) unsigned long long deltaRxPackets; 
@property (nonatomic,readonly) unsigned long long deltaRxBytes; 
@property (nonatomic,readonly) unsigned long long deltaTxPackets; 
@property (nonatomic,readonly) unsigned long long deltaTxBytes; 
@property (nonatomic,readonly) unsigned long long deltaRxCellularBytes; 
@property (nonatomic,readonly) unsigned long long deltaRxWiFiBytes; 
@property (nonatomic,readonly) unsigned long long deltaRxWiredBytes; 
@property (nonatomic,readonly) unsigned long long deltaTxCellularBytes; 
@property (nonatomic,readonly) unsigned long long deltaTxWiFiBytes; 
@property (nonatomic,readonly) unsigned long long deltaTxWiredBytes; 
@property (nonatomic,readonly) unsigned interfaceIndex;                                         //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (nonatomic,readonly) unsigned receiveBufferSize;                                      //@synthesize receiveBufferSize=_receiveBufferSize - In the implementation block
@property (nonatomic,readonly) unsigned receiveBufferUsed;                                      //@synthesize receiveBufferUsed=_receiveBufferUsed - In the implementation block
@property (nonatomic,readonly) unsigned trafficClass;                                           //@synthesize trafficClass=_trafficClass - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueProcessID;                              //@synthesize uniqueProcessID=_uniqueProcessID - In the implementation block
@property (nonatomic,readonly) int processID;                                                   //@synthesize processID=_processID - In the implementation block
@property (nonatomic,readonly) NSString * processName;                                          //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) unsigned long long eupid;                                        //@synthesize eupid=_eupid - In the implementation block
@property (nonatomic,readonly) int epid;                                                        //@synthesize epid=_epid - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSUUID * euuid;                                                  //@synthesize euuid=_euuid - In the implementation block
@property (nonatomic,readonly) NSUUID * vuuid;                                                  //@synthesize vuuid=_vuuid - In the implementation block
@property (nonatomic,readonly) NSUUID * flowuuid;                                               //@synthesize flowuuid=_flowuuid - In the implementation block
@property (nonatomic,readonly) BOOL attributedEntityIsBundleName; 
@property (nonatomic,readonly) BOOL attributedEntityIsProcessName; 
@property (nonatomic,readonly) NSString * attributionReasonString; 
@property (nonatomic,readonly) BOOL failedConsistencyChecks; 
@property (nonatomic,readonly) BOOL failedNegativeDeltaCheck; 
@property (nonatomic,readonly) BOOL failedTCPMultipleInterfaceCheck; 
@property (nonatomic,readonly) BOOL failedRxCountCheck; 
@property (nonatomic,readonly) BOOL failedRouteValuesLookup;                                    //@synthesize failedRouteValuesLookup=_failedRouteValuesLookup - In the implementation block
@property (nonatomic,readonly) BOOL failedFlowswitchValuesLookup;                               //@synthesize failedFlowswitchValuesLookup=_failedFlowswitchValuesLookup - In the implementation block
@property (nonatomic,readonly) BOOL failedSkywalkAction;                                        //@synthesize failedSkywalkAction=_failedSkywalkAction - In the implementation block
@property (nonatomic,readonly) NSString * countsDescription; 
@property (nonatomic,readonly) NSString * savedCountsDescription; 
@property (nonatomic,readonly) NSString * descriptorDescription; 
@property (nonatomic,readonly) NSString * verboseDescription; 
@property (nonatomic,readonly) BOOL startAppStateIsForeground; 
@property (nonatomic,readonly) NSString * startAppStateString; 
@property (nonatomic,readonly) BOOL snapshotAppStateIsForeground; 
@property (nonatomic,readonly) NSString * snapshotAppStateString; 
@property (nonatomic,readonly) NSData * localAddress;                                           //@synthesize localAddress=_localAddress - In the implementation block
@property (nonatomic,readonly) NSData * remoteAddress;                                          //@synthesize remoteAddress=_remoteAddress - In the implementation block
@property (nonatomic,readonly) BOOL interfaceUnknown;                                           //@synthesize interfaceUnknown=_interfaceUnknown - In the implementation block
@property (nonatomic,readonly) BOOL interfaceLoopback;                                          //@synthesize interfaceLoopback=_interfaceLoopback - In the implementation block
@property (nonatomic,readonly) BOOL interfaceCellular;                                          //@synthesize interfaceCellular=_interfaceCellular - In the implementation block
@property (nonatomic,readonly) BOOL interfaceCellularViaFallback;                               //@synthesize interfaceCellularViaFallback=_interfaceCellularViaFallback - In the implementation block
@property (nonatomic,readonly) BOOL interfaceWiFi;                                              //@synthesize interfaceWiFi=_interfaceWiFi - In the implementation block
@property (nonatomic,readonly) BOOL interfaceWired;                                             //@synthesize interfaceWired=_interfaceWired - In the implementation block
@property (nonatomic,readonly) BOOL interfaceAWDL;                                              //@synthesize interfaceAWDL=_interfaceAWDL - In the implementation block
@property (nonatomic,readonly) BOOL interfaceExpensive;                                         //@synthesize interfaceExpensive=_interfaceExpensive - In the implementation block
@property (nonatomic,readonly) BOOL interfaceCompanionLink;                                     //@synthesize interfaceCompanionLink=_interfaceCompanionLink - In the implementation block
@property (nonatomic,readonly) BOOL flowUsesChannels;                                           //@synthesize flowUsesChannels=_flowUsesChannels - In the implementation block
@property (nonatomic,readonly) BOOL hasTraffic;                                                 //@synthesize hasTraffic=_hasTraffic - In the implementation block
@property (nonatomic,readonly) BOOL hasTrafficDelta;                                            //@synthesize hasTrafficDelta=_hasTrafficDelta - In the implementation block
@property (nonatomic,readonly) BOOL hasWiFiTraffic;                                             //@synthesize hasWiFiTraffic=_hasWiFiTraffic - In the implementation block
@property (nonatomic,readonly) BOOL hasWiFiTrafficDelta;                                        //@synthesize hasWiFiTrafficDelta=_hasWiFiTrafficDelta - In the implementation block
@property (nonatomic,readonly) BOOL hasCellTraffic;                                             //@synthesize hasCellTraffic=_hasCellTraffic - In the implementation block
@property (nonatomic,readonly) BOOL hasCellTrafficDelta;                                        //@synthesize hasCellTrafficDelta=_hasCellTrafficDelta - In the implementation block
@property (nonatomic,readonly) BOOL hasWiredTraffic;                                            //@synthesize hasWiredTraffic=_hasWiredTraffic - In the implementation block
@property (nonatomic,readonly) BOOL hasWiredTrafficDelta;                                       //@synthesize hasWiredTrafficDelta=_hasWiredTrafficDelta - In the implementation block
@property (nonatomic,readonly) unsigned long long networkActivityMapStartTime;                  //@synthesize networkActivityMapStartTime=_networkActivityMapStartTime - In the implementation block
@property (nonatomic,readonly) unsigned long long networkActivityMapPart1;                      //@synthesize networkActivityMapPart1=_networkActivityMapPart1 - In the implementation block
@property (nonatomic,readonly) unsigned long long networkActivityMapPart2;                      //@synthesize networkActivityMapPart2=_networkActivityMapPart2 - In the implementation block
+(void)initialize;
+(id)_dateWithContinuousTime:(unsigned long long)arg1 ;
+(double)_intervalWithContinuousTime:(unsigned long long)arg1 ;
+(double)_referenceIntervalWithContinuousTime:(unsigned long long)arg1 ;
+(id)snapshotWithDictionary:(id)arg1 ;
+(void)_initializeTCPDescriptor:(nstat_tcp_descriptor*)arg1 fromDictionary:(id)arg2 ;
+(void)_initializeUDPDescriptor:(nstat_udp_descriptor*)arg1 fromDictionary:(id)arg2 ;
+(void)_initializeQUICDescriptor:(nstat_tcp_descriptor*)arg1 fromDictionary:(id)arg2 ;
+(id)_snapshotWithDictionary:(id)arg1 ;
-(unsigned)receiveBufferUsed;
-(id)dictionaryForm;
-(NSDictionary *)lookupResults;
-(NSUUID *)vuuid;
-(BOOL)isADaemon;
-(unsigned long long)rxCellularBytes;
-(unsigned long long)eupid;
-(unsigned)receiveBufferSize;
-(id)_createNSUUIDForBytes:(unsigned char)arg1 ;
-(unsigned)_rxOutOfOrderBytes;
-(int)processID;
-(unsigned)interfaceIndex;
-(unsigned long long)txWiredBytes;
-(unsigned long long)txBytes;
-(unsigned long long)networkActivityMapStartTime;
-(NSUUID *)uuid;
-(BOOL)interfaceExpensive;
-(double)flowDuration;
-(id)_quicDescriptorDictionaryForm:(nstat_tcp_descriptor*)arg1 ;
-(BOOL)interfaceUnknown;
-(unsigned long long)_deltaForCurrentBytes:(unsigned long long)arg1 otherBytes:(unsigned long long)arg2 packets:(unsigned long long)arg3 prevBytes:(unsigned long long)arg4 prevOtherBytes:(unsigned long long)arg5 prevPackets:(unsigned long long)arg6 ;
-(BOOL)interfaceCellularViaFallback;
-(NSDate *)flowStartTimestamp;
-(BOOL)flowUsesChannels;
-(unsigned long long)networkActivityMapPart2;
-(double)_rttVariation;
-(unsigned long long)eventFlags;
-(unsigned long long)_adjustedByteCount:(unsigned long long)arg1 otherBytes:(unsigned long long)arg2 packets:(unsigned long long)arg3 ;
-(BOOL)interfaceCompanionLink;
-(BOOL)interfaceWired;
-(double)_rttAverage;
-(unsigned long long)uniqueProcessID;
-(unsigned long long)rxBytes;
-(void)setFlowSnapshotTimeIntervalSinceReferenceDate:(double)arg1 ;
-(BOOL)attributedEntityIsBundleName;
-(NSData *)remoteAddress;
-(double)_rttMinimum;
-(unsigned long long)flowStartContinuousTime;
-(id)_nstatCountsDictionaryForm:(nstat_counts*)arg1 ;
-(BOOL)interfaceAWDL;
-(unsigned long long)deltaRxCellularBytes;
-(NSData *)localAddress;
-(NSString *)processName;
-(void)setAttribution:(id)arg1 derivation:(int)arg2 delegateName:(id)arg3 isADaemon:(BOOL)arg4 ;
-(unsigned long long)rxPackets;
-(double)flowStartTimeIntervalSince1970;
-(unsigned)_txRetransmittedBytes;
-(unsigned long long)txWiFiBytes;
-(BOOL)interfaceLoopback;
-(unsigned)_rxDuplicateBytes;
-(unsigned long long)txCellularBytes;
-(id)briefDescription;
-(unsigned long long)txPackets;
-(BOOL)interfaceCellular;
-(unsigned long long)rxWiredBytes;
-(NSUUID *)euuid;
-(double)flowSnapshotTimeIntervalSince1970;
-(int)epid;
-(unsigned long long)flowIdentifier;
-(unsigned)trafficClass;
-(unsigned long long)networkActivityMapPart1;
-(id)initWithUpdate:(const nstat_msg_src_update_convenient*)arg1 startTime:(double)arg2 flowFlags:(unsigned)arg3 previously:(update_subset_for_deltas*)arg4 ;
-(unsigned long long)rxWiFiBytes;
-(NSString *)attributionReasonString;
-(void)setAttributionReason:(int)arg1 ;
-(unsigned)_deltaTxRetransmittedBytes;
-(const update_subset_for_deltas*)_update_delta_ptr;
-(unsigned long long)deltaTxWiredBytes;
-(BOOL)interfaceWiFi;
-(BOOL)failedConsistencyChecks;
-(unsigned)_deltaRxDuplicateBytes;
-(BOOL)hasCellTrafficDelta;
-(BOOL)hasCellTraffic;
-(NSString *)savedCountsDescription;
-(BOOL)failedTCPMultipleInterfaceCheck;
-(const nstat_msg_src_update_convenient*)_update_ptr;
-(unsigned long long)deltaTxWiFiBytes;
-(NSString *)verboseDescription;
-(id)description;
-(unsigned)_flow_flags;
-(void)setLookupResults:(NSDictionary *)arg1 ;
-(double)flowStartTimeIntervalSinceReferenceDate;
-(BOOL)failedNegativeDeltaCheck;
-(void)setIsADaemon:(BOOL)arg1 ;
-(unsigned long long)deltaRxPackets;
-(BOOL)isSimpleInterface:(unsigned)arg1 ;
-(BOOL)failedFlowswitchValuesLookup;
-(unsigned long long)deltaRxBytes;
-(NSString *)startAppStateString;
-(BOOL)hasWiredTrafficDelta;
-(unsigned long long)deltaRxWiredBytes;
-(BOOL)startAppStateIsForeground;
-(unsigned)startAppState;
-(void)setAppState:(unsigned)arg1 screenStateOn:(BOOL)arg2 startAppState:(unsigned)arg3 startScreenStateOn:(BOOL)arg4 ;
-(BOOL)attributedEntityIsProcessName;
-(void)setSnapshotAppState:(unsigned)arg1 ;
-(BOOL)hasTraffic;
-(NSString *)countsDescription;
-(NSDate *)flowSnapshotTimestamp;
-(BOOL)hasWiFiTrafficDelta;
-(int)snapshotReason;
-(BOOL)hasWiFiTraffic;
-(BOOL)snapshotScreenStateOn;
-(int)attributionReason;
-(BOOL)hasWiredTraffic;
-(void)setStartScreenStateOn:(BOOL)arg1 ;
-(unsigned long long)deltaTxPackets;
-(unsigned long long)deltaTxBytes;
-(unsigned long long)_byteOverheadForPacketCount:(unsigned long long)arg1 ;
-(BOOL)failedRxCountCheck;
-(BOOL)hasTrafficDelta;
-(double)flowSnapshotTimeIntervalSinceReferenceDate;
-(unsigned long long)deltaRxWiFiBytes;
-(BOOL)snapshotAppStateIsForeground;
-(NSString *)attributedEntity;
-(void)runConsistencyChecks;
-(void)setDelegateName:(NSString *)arg1 ;
-(void)setStartAppState:(unsigned)arg1 ;
-(BOOL)failedSkywalkAction;
-(BOOL)fixedInterfaceUseExpected:(unsigned)arg1 ;
-(id)_udpDescriptorDictionaryForm:(nstat_udp_descriptor*)arg1 ;
-(BOOL)startScreenStateOn;
-(NSUUID *)flowuuid;
-(BOOL)noBluetoothUseExpected:(unsigned)arg1 ;
-(NSString *)flowType;
-(void)setSnapshotReason:(int)arg1 ;
-(void)setAttributedEntity:(NSString *)arg1 ;
-(NSString *)delegateName;
-(unsigned long long)deltaTxCellularBytes;
-(unsigned)_deltaRxOutOfOrderBytes;
-(NSString *)snapshotAppStateString;
-(unsigned)snapshotAppState;
-(id)_tcpDescriptorDictionaryForm:(nstat_tcp_descriptor*)arg1 ;
-(NSString *)descriptorDescription;
-(NSString *)snapshotReasonString;
-(void)setSnapshotScreenStateOn:(BOOL)arg1 ;
-(BOOL)failedRouteValuesLookup;
@end

