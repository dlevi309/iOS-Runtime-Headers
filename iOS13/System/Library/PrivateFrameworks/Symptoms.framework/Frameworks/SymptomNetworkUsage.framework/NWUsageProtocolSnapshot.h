/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/


#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
@class NSDate, NSString, NSUUID, NSDictionary, NSData;

@interface NWUsageProtocolSnapshot : NSObject {

	double _startStamp;
	double _snapStamp;
	unsigned _flags;
	update_subset_for_deltas _prev_items;
	nstat_msg_src_update_convenient _nstat_update;
	BOOL _isADaemon;
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
	NSDate* _flowStartTimestamp;
	NSDate* _flowSnapshotTimestamp;
	unsigned long long _flowStartContinuousTime;
	double _flowDuration;
	unsigned long long _uniqueProcessID;
	NSString* _processName;
	unsigned long long _eupid;
	NSUUID* _uuid;
	NSUUID* _euuid;
	NSUUID* _vuuid;
	NSString* _attributedEntity;
	NSString* _delegateName;
	NSDictionary* _lookupResults;
	NSData* _localAddress;
	NSData* _remoteAddress;
	unsigned long long _networkActivityMapStartTime;
	unsigned long long _networkActivityMapPart1;
	unsigned long long _networkActivityMapPart2;

}

@property (readonly) unsigned _flow_flags;                                            //@synthesize _flow_flags=__flow_flags - In the implementation block
@property (readonly) const update_subset_for_deltas* _update_delta_ptr; 
@property (readonly) const nstat_msg_src_update_convenient* _update_ptr; 
@property (retain) NSString * attributedEntity;                                       //@synthesize attributedEntity=_attributedEntity - In the implementation block
@property (assign) int attributionReason;                                             //@synthesize attributionReason=_attributionReason - In the implementation block
@property (assign) int snapshotReason;                                                //@synthesize snapshotReason=_snapshotReason - In the implementation block
@property (assign) BOOL isADaemon;                                                    //@synthesize isADaemon=_isADaemon - In the implementation block
@property (retain) NSString * delegateName;                                           //@synthesize delegateName=_delegateName - In the implementation block
@property (retain) NSDictionary * lookupResults;                                      //@synthesize lookupResults=_lookupResults - In the implementation block
@property (assign) unsigned startAppState;                                            //@synthesize startAppState=_startAppState - In the implementation block
@property (assign) BOOL startScreenStateOn;                                           //@synthesize startScreenStateOn=_startScreenStateOn - In the implementation block
@property (assign) unsigned snapshotAppState;                                         //@synthesize snapshotAppState=_snapshotAppState - In the implementation block
@property (assign) BOOL snapshotScreenStateOn;                                        //@synthesize snapshotScreenStateOn=_snapshotScreenStateOn - In the implementation block
@property (readonly) unsigned long long flowIdentifier; 
@property (readonly) NSDate * flowStartTimestamp;                                     //@synthesize flowStartTimestamp=_flowStartTimestamp - In the implementation block
@property (readonly) NSDate * flowSnapshotTimestamp;                                  //@synthesize flowSnapshotTimestamp=_flowSnapshotTimestamp - In the implementation block
@property (readonly) unsigned long long flowStartContinuousTime;                      //@synthesize flowStartContinuousTime=_flowStartContinuousTime - In the implementation block
@property (readonly) double flowDuration;                                             //@synthesize flowDuration=_flowDuration - In the implementation block
@property (readonly) NSString * snapshotReasonString; 
@property (readonly) unsigned long long eventFlags; 
@property (readonly) NSString * flowType; 
@property (readonly) unsigned long long rxPackets; 
@property (readonly) unsigned long long txPackets; 
@property (readonly) unsigned long long rxBytes; 
@property (readonly) unsigned long long txBytes; 
@property (readonly) unsigned long long rxCellularBytes; 
@property (readonly) unsigned long long rxWiFiBytes; 
@property (readonly) unsigned long long rxWiredBytes; 
@property (readonly) unsigned long long txCellularBytes; 
@property (readonly) unsigned long long txWiFiBytes; 
@property (readonly) unsigned long long txWiredBytes; 
@property (readonly) unsigned long long deltaRxPackets; 
@property (readonly) unsigned long long deltaRxBytes; 
@property (readonly) unsigned long long deltaTxPackets; 
@property (readonly) unsigned long long deltaTxBytes; 
@property (readonly) unsigned long long deltaRxCellularBytes; 
@property (readonly) unsigned long long deltaRxWiFiBytes; 
@property (readonly) unsigned long long deltaRxWiredBytes; 
@property (readonly) unsigned long long deltaTxCellularBytes; 
@property (readonly) unsigned long long deltaTxWiFiBytes; 
@property (readonly) unsigned long long deltaTxWiredBytes; 
@property (readonly) unsigned interfaceIndex;                                         //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (readonly) unsigned receiveBufferSize;                                      //@synthesize receiveBufferSize=_receiveBufferSize - In the implementation block
@property (readonly) unsigned receiveBufferUsed;                                      //@synthesize receiveBufferUsed=_receiveBufferUsed - In the implementation block
@property (readonly) unsigned trafficClass;                                           //@synthesize trafficClass=_trafficClass - In the implementation block
@property (readonly) unsigned long long uniqueProcessID;                              //@synthesize uniqueProcessID=_uniqueProcessID - In the implementation block
@property (readonly) int processID;                                                   //@synthesize processID=_processID - In the implementation block
@property (readonly) NSString * processName;                                          //@synthesize processName=_processName - In the implementation block
@property (readonly) unsigned long long eupid;                                        //@synthesize eupid=_eupid - In the implementation block
@property (readonly) int epid;                                                        //@synthesize epid=_epid - In the implementation block
@property (readonly) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (readonly) NSUUID * euuid;                                                  //@synthesize euuid=_euuid - In the implementation block
@property (readonly) NSUUID * vuuid;                                                  //@synthesize vuuid=_vuuid - In the implementation block
@property (readonly) BOOL attributedEntityIsBundleName; 
@property (readonly) BOOL attributedEntityIsProcessName; 
@property (readonly) NSString * attributionReasonString; 
@property (readonly) BOOL failedConsistencyChecks; 
@property (readonly) BOOL failedNegativeDeltaCheck; 
@property (readonly) BOOL failedTCPMultipleInterfaceCheck; 
@property (readonly) BOOL failedRxCountCheck; 
@property (readonly) NSString * countsDescription; 
@property (readonly) NSString * savedCountsDescription; 
@property (readonly) NSString * descriptorDescription; 
@property (readonly) NSString * verboseDescription; 
@property (readonly) BOOL startAppStateIsForeground; 
@property (readonly) NSString * startAppStateString; 
@property (readonly) BOOL snapshotAppStateIsForeground; 
@property (readonly) NSString * snapshotAppStateString; 
@property (readonly) NSData * localAddress;                                           //@synthesize localAddress=_localAddress - In the implementation block
@property (readonly) NSData * remoteAddress;                                          //@synthesize remoteAddress=_remoteAddress - In the implementation block
@property (readonly) BOOL interfaceUnknown;                                           //@synthesize interfaceUnknown=_interfaceUnknown - In the implementation block
@property (readonly) BOOL interfaceLoopback;                                          //@synthesize interfaceLoopback=_interfaceLoopback - In the implementation block
@property (readonly) BOOL interfaceCellular;                                          //@synthesize interfaceCellular=_interfaceCellular - In the implementation block
@property (readonly) BOOL interfaceCellularViaFallback;                               //@synthesize interfaceCellularViaFallback=_interfaceCellularViaFallback - In the implementation block
@property (readonly) BOOL interfaceWiFi;                                              //@synthesize interfaceWiFi=_interfaceWiFi - In the implementation block
@property (readonly) BOOL interfaceWired;                                             //@synthesize interfaceWired=_interfaceWired - In the implementation block
@property (readonly) BOOL interfaceAWDL;                                              //@synthesize interfaceAWDL=_interfaceAWDL - In the implementation block
@property (readonly) BOOL interfaceExpensive;                                         //@synthesize interfaceExpensive=_interfaceExpensive - In the implementation block
@property (readonly) BOOL interfaceCompanionLink;                                     //@synthesize interfaceCompanionLink=_interfaceCompanionLink - In the implementation block
@property (readonly) BOOL flowUsesChannels;                                           //@synthesize flowUsesChannels=_flowUsesChannels - In the implementation block
@property (readonly) BOOL hasTraffic;                                                 //@synthesize hasTraffic=_hasTraffic - In the implementation block
@property (readonly) BOOL hasTrafficDelta;                                            //@synthesize hasTrafficDelta=_hasTrafficDelta - In the implementation block
@property (readonly) BOOL hasWiFiTraffic;                                             //@synthesize hasWiFiTraffic=_hasWiFiTraffic - In the implementation block
@property (readonly) BOOL hasWiFiTrafficDelta;                                        //@synthesize hasWiFiTrafficDelta=_hasWiFiTrafficDelta - In the implementation block
@property (readonly) BOOL hasCellTraffic;                                             //@synthesize hasCellTraffic=_hasCellTraffic - In the implementation block
@property (readonly) BOOL hasCellTrafficDelta;                                        //@synthesize hasCellTrafficDelta=_hasCellTrafficDelta - In the implementation block
@property (readonly) BOOL hasWiredTraffic;                                            //@synthesize hasWiredTraffic=_hasWiredTraffic - In the implementation block
@property (readonly) BOOL hasWiredTrafficDelta;                                       //@synthesize hasWiredTrafficDelta=_hasWiredTrafficDelta - In the implementation block
@property (readonly) unsigned long long networkActivityMapStartTime;                  //@synthesize networkActivityMapStartTime=_networkActivityMapStartTime - In the implementation block
@property (readonly) unsigned long long networkActivityMapPart1;                      //@synthesize networkActivityMapPart1=_networkActivityMapPart1 - In the implementation block
@property (readonly) unsigned long long networkActivityMapPart2;                      //@synthesize networkActivityMapPart2=_networkActivityMapPart2 - In the implementation block
+(void)initialize;
+(double)_intervalWithContinuousTime:(unsigned long long)arg1 ;
+(id)_dateWithContinuousTime:(unsigned long long)arg1 ;
+(double)_referenceIntervalWithContinuousTime:(unsigned long long)arg1 ;
-(id)description;
-(NSString *)processName;
-(NSUUID *)uuid;
-(NSData *)localAddress;
-(NSData *)remoteAddress;
-(int)processID;
-(unsigned)trafficClass;
-(unsigned)interfaceIndex;
-(unsigned)_rxOutOfOrderBytes;
-(int)epid;
-(NSUUID *)euuid;
-(id)briefDescription;
-(NSString *)verboseDescription;
-(unsigned long long)eventFlags;
-(unsigned long long)flowIdentifier;
-(NSString *)flowType;
-(unsigned long long)rxBytes;
-(unsigned long long)rxPackets;
-(unsigned long long)txBytes;
-(unsigned long long)txPackets;
-(unsigned)_rxDuplicateBytes;
-(const nstat_msg_src_update_convenient*)_update_ptr;
-(id)_createNSUUIDForBytes:(unsigned char)arg1 ;
-(unsigned)_txRetransmittedBytes;
-(unsigned)_deltaRxDuplicateBytes;
-(unsigned)_deltaRxOutOfOrderBytes;
-(unsigned)_deltaTxRetransmittedBytes;
-(double)_rttMinimum;
-(double)_rttAverage;
-(double)_rttVariation;
-(id)initWithUpdate:(const nstat_msg_src_update_convenient*)arg1 startTime:(double)arg2 flowFlags:(unsigned)arg3 previously:(update_subset_for_deltas*)arg4 ;
-(NSString *)descriptorDescription;
-(BOOL)flowUsesChannels;
-(unsigned)receiveBufferSize;
-(unsigned)receiveBufferUsed;
-(unsigned long long)uniqueProcessID;
-(unsigned long long)eupid;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceLoopback;
-(BOOL)interfaceCellular;
-(BOOL)interfaceCellularViaFallback;
-(BOOL)interfaceWiFi;
-(BOOL)interfaceWired;
-(BOOL)interfaceAWDL;
-(BOOL)interfaceExpensive;
-(BOOL)interfaceCompanionLink;
-(NSUUID *)vuuid;
-(unsigned long long)networkActivityMapStartTime;
-(unsigned long long)networkActivityMapPart1;
-(unsigned long long)networkActivityMapPart2;
-(unsigned long long)flowStartContinuousTime;
-(double)flowDuration;
-(NSDate *)flowStartTimestamp;
-(NSDate *)flowSnapshotTimestamp;
-(NSString *)attributedEntity;
-(void)setAttributedEntity:(NSString *)arg1 ;
-(int)attributionReason;
-(void)setAttributionReason:(int)arg1 ;
-(BOOL)isADaemon;
-(void)setIsADaemon:(BOOL)arg1 ;
-(NSString *)delegateName;
-(void)setDelegateName:(NSString *)arg1 ;
-(unsigned)startAppState;
-(void)setStartAppState:(unsigned)arg1 ;
-(BOOL)startScreenStateOn;
-(void)setStartScreenStateOn:(BOOL)arg1 ;
-(void)setSnapshotReason:(int)arg1 ;
-(void)setAttribution:(id)arg1 derivation:(int)arg2 delegateName:(id)arg3 isADaemon:(BOOL)arg4 ;
-(void)setAppState:(unsigned)arg1 screenStateOn:(BOOL)arg2 startAppState:(unsigned)arg3 startScreenStateOn:(BOOL)arg4 ;
-(void)setLookupResults:(NSDictionary *)arg1 ;
-(void)runConsistencyChecks;
-(NSString *)snapshotReasonString;
-(BOOL)failedConsistencyChecks;
-(unsigned long long)rxCellularBytes;
-(unsigned long long)txCellularBytes;
-(unsigned long long)rxWiFiBytes;
-(unsigned long long)txWiFiBytes;
-(unsigned long long)rxWiredBytes;
-(unsigned long long)txWiredBytes;
-(unsigned long long)deltaRxBytes;
-(unsigned long long)deltaTxBytes;
-(unsigned long long)deltaRxCellularBytes;
-(unsigned long long)deltaTxCellularBytes;
-(unsigned long long)deltaRxWiFiBytes;
-(unsigned long long)deltaTxWiFiBytes;
-(unsigned long long)deltaRxWiredBytes;
-(unsigned long long)deltaTxWiredBytes;
-(const update_subset_for_deltas*)_update_delta_ptr;
-(NSString *)countsDescription;
-(NSString *)savedCountsDescription;
-(unsigned long long)_byteOverheadForPacketCount:(unsigned long long)arg1 ;
-(unsigned long long)_adjustedByteCount:(unsigned long long)arg1 otherBytes:(unsigned long long)arg2 packets:(unsigned long long)arg3 ;
-(unsigned)snapshotAppState;
-(unsigned long long)_deltaForCurrentBytes:(unsigned long long)arg1 otherBytes:(unsigned long long)arg2 packets:(unsigned long long)arg3 prevBytes:(unsigned long long)arg4 prevOtherBytes:(unsigned long long)arg5 prevPackets:(unsigned long long)arg6 ;
-(BOOL)isSimpleInterface:(unsigned)arg1 ;
-(BOOL)noBluetoothUseExpected:(unsigned)arg1 ;
-(BOOL)fixedInterfaceUseExpected:(unsigned)arg1 ;
-(void)setSnapshotAppState:(unsigned)arg1 ;
-(void)setSnapshotScreenStateOn:(BOOL)arg1 ;
-(BOOL)startAppStateIsForeground;
-(NSString *)startAppStateString;
-(BOOL)snapshotAppStateIsForeground;
-(NSString *)snapshotAppStateString;
-(unsigned long long)deltaRxPackets;
-(unsigned long long)deltaTxPackets;
-(BOOL)failedNegativeDeltaCheck;
-(BOOL)failedTCPMultipleInterfaceCheck;
-(BOOL)failedRxCountCheck;
-(NSString *)attributionReasonString;
-(BOOL)attributedEntityIsBundleName;
-(BOOL)attributedEntityIsProcessName;
-(int)snapshotReason;
-(NSDictionary *)lookupResults;
-(BOOL)snapshotScreenStateOn;
-(BOOL)hasTraffic;
-(BOOL)hasTrafficDelta;
-(BOOL)hasWiFiTraffic;
-(BOOL)hasWiFiTrafficDelta;
-(BOOL)hasCellTraffic;
-(BOOL)hasCellTrafficDelta;
-(BOOL)hasWiredTraffic;
-(BOOL)hasWiredTrafficDelta;
-(unsigned)_flow_flags;
@end

