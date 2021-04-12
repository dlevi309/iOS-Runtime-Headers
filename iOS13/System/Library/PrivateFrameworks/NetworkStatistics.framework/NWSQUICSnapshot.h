/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWSProtocolSnapshot.h>

@class NSString, NSData;

@interface NWSQUICSnapshot : NWSProtocolSnapshot {

	NSString* _processName;
	NSString* _uuid;
	NSString* _euuid;
	NSString* _vuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;
	nstat_tcp_descriptor _descriptor;
	unsigned _provider;
	unsigned long long _eventFlags;
	double _rttMinimum;
	double _rttAverage;
	double _rttVariation;

}

@property (readonly) double rttMinimum;                //@synthesize rttMinimum=_rttMinimum - In the implementation block
@property (readonly) double rttAverage;                //@synthesize rttAverage=_rttAverage - In the implementation block
@property (readonly) double rttVariation;              //@synthesize rttVariation=_rttVariation - In the implementation block
-(id)description;
-(id)processName;
-(id)uuid;
-(id)provider;
-(id)localAddress;
-(id)remoteAddress;
-(int)processID;
-(unsigned)trafficClass;
-(unsigned)interfaceIndex;
-(int)epid;
-(id)euuid;
-(unsigned long long)eventFlags;
-(double)rttMinimum;
-(double)rttAverage;
-(double)rttVariation;
-(unsigned)receiveBufferSize;
-(unsigned)receiveBufferUsed;
-(unsigned long long)uniqueProcessID;
-(unsigned long long)eupid;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceLoopback;
-(BOOL)interfaceCellular;
-(BOOL)interfaceWired;
-(BOOL)interfaceAWDL;
-(BOOL)interfaceExpensive;
-(BOOL)interfaceCompanionLink;
-(id)vuuid;
-(unsigned long long)networkActivityMapStartTime;
-(unsigned long long)networkActivityMapPart1;
-(unsigned long long)networkActivityMapPart2;
-(unsigned long long)flowStartContinuousTime;
-(double)flowDuration;
-(id)flowStartTimestamp;
-(id)traditionalDictionary;
-(id)initWithCounts:(const nstat_counts*)arg1 QUICDescriptor:(nstat_tcp_descriptor*)arg2 sourceIdent:(unsigned long long)arg3 events:(unsigned long long)arg4 seqno:(unsigned long long)arg5 provider:(unsigned)arg6 ;
-(BOOL)interfaceWifi;
-(BOOL)countsIncludeHeaderOverhead;
@end

