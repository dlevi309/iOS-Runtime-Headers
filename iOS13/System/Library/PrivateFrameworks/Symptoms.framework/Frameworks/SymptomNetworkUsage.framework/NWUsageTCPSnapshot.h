/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/

#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
#import <SymptomNetworkUsage/NWUsageProtocolSnapshot.h>

@class NSString, NSDate, NSUUID, NSData;

@interface NWUsageTCPSnapshot : NWUsageProtocolSnapshot {

	NSString* _congestionAlgorithm;
	NSDate* _startTimestamp;
	NSDate* _snapshotTimestamp;
	NSString* _processName;
	NSUUID* _uuid;
	NSUUID* _euuid;
	NSUUID* _vuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;
	const nstat_tcp_descriptor* _descriptor;

}

@property (readonly) double rttMinimum; 
@property (readonly) double rttAverage; 
@property (readonly) double rttVariation; 
@property (readonly) unsigned rxDuplicateBytes; 
@property (readonly) unsigned rxOutOfOrderBytes; 
@property (readonly) unsigned txRetransmittedBytes; 
@property (readonly) unsigned deltaRxDuplicateBytes; 
@property (readonly) unsigned deltaRxOutOfOrderBytes; 
@property (readonly) unsigned deltaTxRetransmittedBytes; 
@property (readonly) NSString * TCPState; 
@property (readonly) unsigned sendBufferSize; 
@property (readonly) unsigned sendBufferUsed; 
@property (readonly) unsigned txUnacked; 
@property (readonly) unsigned txWindow; 
@property (readonly) unsigned txCongestionWindow; 
@property (readonly) unsigned trafficManagementFlags; 
@property (readonly) NSString * congestionAlgorithm; 
@property (readonly) BOOL probeActivated; 
@property (readonly) BOOL connProbeFailed; 
@property (readonly) BOOL readProbeFailed; 
@property (readonly) BOOL writeProbeFailed; 
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
-(unsigned)deltaRxDuplicateBytes;
-(unsigned)deltaRxOutOfOrderBytes;
-(unsigned)deltaTxRetransmittedBytes;
-(double)rttMinimum;
-(double)rttAverage;
-(double)rttVariation;
-(BOOL)flowUsesChannels;
-(unsigned)sendBufferSize;
-(unsigned)sendBufferUsed;
-(unsigned)receiveBufferSize;
-(unsigned)receiveBufferUsed;
-(unsigned)txUnacked;
-(unsigned)txWindow;
-(unsigned)txCongestionWindow;
-(unsigned)trafficManagementFlags;
-(unsigned long long)uniqueProcessID;
-(unsigned long long)eupid;
-(unsigned)connstatusProbeActivated;
-(unsigned)connstatusConnProbeFailed;
-(unsigned)connstatusReadProbeFailed;
-(unsigned)connstatusWriteProbeFailed;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceLoopback;
-(BOOL)interfaceCellular;
-(BOOL)interfaceCellularViaFallback;
-(BOOL)interfaceWiFi;
-(BOOL)interfaceWired;
-(BOOL)interfaceAWDL;
-(BOOL)interfaceExpensive;
-(BOOL)interfaceCompanionLink;
-(NSString *)TCPState;
-(id)vuuid;
-(NSString *)congestionAlgorithm;
-(BOOL)probeActivated;
-(BOOL)connProbeFailed;
-(BOOL)readProbeFailed;
-(BOOL)writeProbeFailed;
-(unsigned long long)networkActivityMapStartTime;
-(unsigned long long)networkActivityMapPart1;
-(unsigned long long)networkActivityMapPart2;
-(unsigned long long)flowStartContinuousTime;
-(double)flowDuration;
-(id)flowStartTimestamp;
-(id)flowSnapshotTimestamp;
@end

