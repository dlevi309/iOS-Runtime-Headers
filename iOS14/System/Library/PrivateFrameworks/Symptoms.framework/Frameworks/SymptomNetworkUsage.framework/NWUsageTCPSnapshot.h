/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/

#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
#import <SymptomNetworkUsage/NWUsageProtocolSnapshot.h>

@class NSString, NSDate, NSUUID, NSData;

@interface NWUsageTCPSnapshot : NWUsageProtocolSnapshot {

	NSString* _congestionAlgorithm;
	NSDate* _startTimestamp;
	NSDate* _snapshotTimestamp;
	double _startTimeInterval;
	double _snapshotTimeInterval;
	NSString* _processName;
	NSUUID* _uuid;
	NSUUID* _euuid;
	NSUUID* _vuuid;
	NSUUID* _flowuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;
	const nstat_tcp_descriptor* _descriptor;

}

@property (nonatomic,readonly) double rttMinimum; 
@property (nonatomic,readonly) double rttAverage; 
@property (nonatomic,readonly) double rttVariation; 
@property (nonatomic,readonly) unsigned rxDuplicateBytes; 
@property (nonatomic,readonly) unsigned rxOutOfOrderBytes; 
@property (nonatomic,readonly) unsigned txRetransmittedBytes; 
@property (nonatomic,readonly) unsigned deltaRxDuplicateBytes; 
@property (nonatomic,readonly) unsigned deltaRxOutOfOrderBytes; 
@property (nonatomic,readonly) unsigned deltaTxRetransmittedBytes; 
@property (nonatomic,readonly) NSString * TCPState; 
@property (nonatomic,readonly) unsigned sendBufferSize; 
@property (nonatomic,readonly) unsigned sendBufferUsed; 
@property (nonatomic,readonly) unsigned txUnacked; 
@property (nonatomic,readonly) unsigned txWindow; 
@property (nonatomic,readonly) unsigned txCongestionWindow; 
@property (nonatomic,readonly) unsigned trafficManagementFlags; 
@property (nonatomic,readonly) NSString * congestionAlgorithm; 
@property (nonatomic,readonly) BOOL probeActivated; 
@property (nonatomic,readonly) BOOL connProbeFailed; 
@property (nonatomic,readonly) BOOL readProbeFailed; 
@property (nonatomic,readonly) BOOL writeProbeFailed; 
-(unsigned)receiveBufferUsed;
-(id)vuuid;
-(unsigned)connstatusProbeActivated;
-(double)rttAverage;
-(unsigned long long)eupid;
-(unsigned)receiveBufferSize;
-(double)rttVariation;
-(unsigned)txRetransmittedBytes;
-(unsigned)sendBufferUsed;
-(int)processID;
-(unsigned)interfaceIndex;
-(unsigned)rxDuplicateBytes;
-(unsigned long long)networkActivityMapStartTime;
-(id)uuid;
-(BOOL)connProbeFailed;
-(BOOL)interfaceExpensive;
-(double)flowDuration;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceCellularViaFallback;
-(id)flowStartTimestamp;
-(BOOL)flowUsesChannels;
-(unsigned long long)networkActivityMapPart2;
-(unsigned)rxOutOfOrderBytes;
-(unsigned)sendBufferSize;
-(BOOL)interfaceCompanionLink;
-(BOOL)interfaceWired;
-(unsigned)txWindow;
-(unsigned)connstatusWriteProbeFailed;
-(unsigned long long)uniqueProcessID;
-(void)setFlowSnapshotTimeIntervalSinceReferenceDate:(double)arg1 ;
-(id)provider;
-(id)remoteAddress;
-(NSString *)TCPState;
-(unsigned long long)flowStartContinuousTime;
-(BOOL)interfaceAWDL;
-(NSString *)congestionAlgorithm;
-(id)localAddress;
-(id)processName;
-(double)rttMinimum;
-(double)flowStartTimeIntervalSince1970;
-(BOOL)readProbeFailed;
-(BOOL)interfaceLoopback;
-(unsigned)txCongestionWindow;
-(unsigned)trafficManagementFlags;
-(BOOL)probeActivated;
-(unsigned)connstatusConnProbeFailed;
-(BOOL)interfaceCellular;
-(id)euuid;
-(double)flowSnapshotTimeIntervalSince1970;
-(unsigned)connstatusReadProbeFailed;
-(unsigned)txUnacked;
-(int)epid;
-(unsigned)trafficClass;
-(BOOL)writeProbeFailed;
-(unsigned long long)networkActivityMapPart1;
-(id)initWithUpdate:(const nstat_msg_src_update_convenient*)arg1 startTime:(double)arg2 flowFlags:(unsigned)arg3 previously:(update_subset_for_deltas*)arg4 ;
-(unsigned)deltaRxOutOfOrderBytes;
-(BOOL)interfaceWiFi;
-(double)flowStartTimeIntervalSinceReferenceDate;
-(BOOL)failedFlowswitchValuesLookup;
-(id)flowSnapshotTimestamp;
-(double)flowSnapshotTimeIntervalSinceReferenceDate;
-(BOOL)failedSkywalkAction;
-(id)flowuuid;
-(unsigned)deltaTxRetransmittedBytes;
-(unsigned)deltaRxDuplicateBytes;
-(id)descriptorDescription;
-(BOOL)failedRouteValuesLookup;
@end

