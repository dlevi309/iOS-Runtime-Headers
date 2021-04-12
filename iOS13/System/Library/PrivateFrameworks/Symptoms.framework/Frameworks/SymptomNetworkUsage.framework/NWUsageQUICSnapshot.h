/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/

#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
#import <SymptomNetworkUsage/NWUsageUDPSnapshot.h>

@class NSString, NSDate, NSUUID, NSData;

@interface NWUsageQUICSnapshot : NWUsageUDPSnapshot {

	NSString* _processName;
	NSDate* _startTimestamp;
	NSDate* _snapshotTimestamp;
	NSUUID* _uuid;
	NSUUID* _euuid;
	NSUUID* _vuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;
	nstat_tcp_descriptor* _descriptor;
	unsigned _rxDuplicateBytes;
	unsigned _rxOutOfOrderBytes;
	unsigned _txRetransmittedBytes;

}

@property (readonly) double rttMinimum; 
@property (readonly) double rttAverage; 
@property (readonly) double rttVariation; 
@property (readonly) unsigned rxDuplicateBytes;                  //@synthesize rxDuplicateBytes=_rxDuplicateBytes - In the implementation block
@property (readonly) unsigned rxOutOfOrderBytes;                 //@synthesize rxOutOfOrderBytes=_rxOutOfOrderBytes - In the implementation block
@property (readonly) unsigned txRetransmittedBytes;              //@synthesize txRetransmittedBytes=_txRetransmittedBytes - In the implementation block
-(id)processName;
-(id)uuid;
-(id)provider;
-(id)localAddress;
-(id)remoteAddress;
-(int)processID;
-(unsigned)trafficClass;
-(unsigned)interfaceIndex;
-(unsigned)rxOutOfOrderBytes;
-(int)epid;
-(id)euuid;
-(unsigned)rxDuplicateBytes;
-(id)initWithUpdate:(const nstat_msg_src_update_convenient*)arg1 startTime:(double)arg2 flowFlags:(unsigned)arg3 previously:(update_subset_for_deltas*)arg4 ;
-(id)descriptorDescription;
-(unsigned)txRetransmittedBytes;
-(double)rttMinimum;
-(double)rttAverage;
-(double)rttVariation;
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
-(id)vuuid;
-(unsigned long long)networkActivityMapStartTime;
-(unsigned long long)networkActivityMapPart1;
-(unsigned long long)networkActivityMapPart2;
-(unsigned long long)flowStartContinuousTime;
-(double)flowDuration;
-(id)flowStartTimestamp;
-(id)flowSnapshotTimestamp;
@end

