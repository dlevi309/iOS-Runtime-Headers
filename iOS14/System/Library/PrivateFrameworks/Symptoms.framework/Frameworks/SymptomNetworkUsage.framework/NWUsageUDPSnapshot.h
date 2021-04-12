/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/

#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
#import <SymptomNetworkUsage/NWUsageProtocolSnapshot.h>

@class NSString, NSDate, NSUUID, NSData;

@interface NWUsageUDPSnapshot : NWUsageProtocolSnapshot {

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
	nstat_udp_descriptor* _descriptor;

}
-(unsigned)receiveBufferUsed;
-(id)vuuid;
-(unsigned long long)eupid;
-(unsigned)receiveBufferSize;
-(int)processID;
-(unsigned)interfaceIndex;
-(unsigned long long)networkActivityMapStartTime;
-(id)uuid;
-(BOOL)interfaceExpensive;
-(double)flowDuration;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceCellularViaFallback;
-(id)flowStartTimestamp;
-(BOOL)flowUsesChannels;
-(unsigned long long)networkActivityMapPart2;
-(BOOL)interfaceWired;
-(unsigned long long)uniqueProcessID;
-(void)setFlowSnapshotTimeIntervalSinceReferenceDate:(double)arg1 ;
-(id)provider;
-(id)remoteAddress;
-(unsigned long long)flowStartContinuousTime;
-(BOOL)interfaceAWDL;
-(id)localAddress;
-(id)processName;
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

