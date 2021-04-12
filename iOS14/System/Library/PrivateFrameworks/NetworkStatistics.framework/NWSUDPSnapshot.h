/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWSProtocolSnapshot.h>

@class NSString, NSData;

@interface NWSUDPSnapshot : NWSProtocolSnapshot {

	NSString* _processName;
	NSString* _uuid;
	NSString* _euuid;
	NSString* _vuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;
	nstat_udp_descriptor _descriptor;
	unsigned _provider;
	unsigned long long _eventFlags;

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
-(id)flowStartTimestamp;
-(unsigned long long)networkActivityMapPart2;
-(unsigned long long)eventFlags;
-(BOOL)interfaceCompanionLink;
-(BOOL)interfaceWired;
-(unsigned long long)uniqueProcessID;
-(id)provider;
-(id)remoteAddress;
-(unsigned long long)flowStartContinuousTime;
-(BOOL)interfaceAWDL;
-(BOOL)interfaceWifi;
-(id)localAddress;
-(id)processName;
-(BOOL)interfaceLoopback;
-(id)traditionalDictionary;
-(BOOL)interfaceCellular;
-(id)euuid;
-(BOOL)countsIncludeHeaderOverhead;
-(int)epid;
-(unsigned)trafficClass;
-(unsigned long long)networkActivityMapPart1;
-(id)description;
-(id)initWithCounts:(const nstat_counts*)arg1 UDPDescriptor:(nstat_udp_descriptor*)arg2 sourceIdent:(unsigned long long)arg3 events:(unsigned long long)arg4 seqno:(unsigned long long)arg5 provider:(unsigned)arg6 ;
@end

