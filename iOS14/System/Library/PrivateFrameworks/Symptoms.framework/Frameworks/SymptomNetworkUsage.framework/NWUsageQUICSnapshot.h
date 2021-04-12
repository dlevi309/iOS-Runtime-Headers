/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/

#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
#import <SymptomNetworkUsage/NWUsageUDPSnapshot.h>

@class NSString, NSDate, NSUUID, NSData;

@interface NWUsageQUICSnapshot : NWUsageUDPSnapshot {

	NSString* _processName;
	NSDate* _startTimestamp;
	NSDate* _snapshotTimestamp;
	double _startTimeInterval;
	double _snapshotTimeInterval;
	NSUUID* _uuid;
	NSUUID* _euuid;
	NSUUID* _vuuid;
	NSUUID* _flowuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;
	nstat_tcp_descriptor* _descriptor;
	unsigned _rxDuplicateBytes;
	unsigned _rxOutOfOrderBytes;
	unsigned _txRetransmittedBytes;

}

@property (nonatomic,readonly) double rttMinimum; 
@property (nonatomic,readonly) double rttAverage; 
@property (nonatomic,readonly) double rttVariation; 
@property (nonatomic,readonly) unsigned rxDuplicateBytes;                  //@synthesize rxDuplicateBytes=_rxDuplicateBytes - In the implementation block
@property (nonatomic,readonly) unsigned rxOutOfOrderBytes;                 //@synthesize rxOutOfOrderBytes=_rxOutOfOrderBytes - In the implementation block
@property (nonatomic,readonly) unsigned txRetransmittedBytes;              //@synthesize txRetransmittedBytes=_txRetransmittedBytes - In the implementation block
-(unsigned)receiveBufferUsed;
-(id)vuuid;
-(double)rttAverage;
-(unsigned long long)eupid;
-(unsigned)receiveBufferSize;
-(double)rttVariation;
-(unsigned)txRetransmittedBytes;
-(int)processID;
-(unsigned)interfaceIndex;
-(unsigned)rxDuplicateBytes;
-(unsigned long long)networkActivityMapStartTime;
-(id)uuid;
-(BOOL)interfaceExpensive;
-(double)flowDuration;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceCellularViaFallback;
-(id)flowStartTimestamp;
-(BOOL)flowUsesChannels;
-(unsigned long long)networkActivityMapPart2;
-(unsigned)rxOutOfOrderBytes;
-(BOOL)interfaceWired;
-(unsigned long long)uniqueProcessID;
-(void)setFlowSnapshotTimeIntervalSinceReferenceDate:(double)arg1 ;
-(id)provider;
-(id)remoteAddress;
-(unsigned long long)flowStartContinuousTime;
-(BOOL)interfaceAWDL;
-(id)localAddress;
-(id)processName;
-(double)rttMinimum;
-(double)flowStartTimeIntervalSince1970;
-(BOOL)interfaceLoopback;
-(BOOL)interfaceCellular;
-(id)euuid;
-(double)flowSnapshotTimeIntervalSince1970;
-(int)epid;
-(unsigned)trafficClass;
-(unsigned long long)networkActivityMapPart1;
-(id)initWithUpdate:(const nstat_msg_src_update_convenient*)arg1 startTime:(double)arg2 flowFlags:(unsigned)arg3 previously:(update_subset_for_deltas*)arg4 ;
-(BOOL)interfaceWiFi;
-(double)flowStartTimeIntervalSinceReferenceDate;
-(BOOL)failedFlowswitchValuesLookup;
-(id)flowSnapshotTimestamp;
-(double)flowSnapshotTimeIntervalSinceReferenceDate;
-(BOOL)failedSkywalkAction;
-(id)flowuuid;
-(id)descriptorDescription;
-(BOOL)failedRouteValuesLookup;
@end

