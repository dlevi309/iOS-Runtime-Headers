/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWSProtocolSnapshot.h>

@class NSString, NSData;

@interface NWSTCPSnapshot : NWSProtocolSnapshot {

	NSString* _congestionAlgorithm;
	NSString* _processName;
	NSString* _uuid;
	NSString* _euuid;
	NSString* _vuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;
	nstat_tcp_descriptor _descriptor;
	unsigned _provider;
	unsigned long long _eventFlags;

}

@property (readonly) double rttMinimum; 
@property (readonly) double rttAverage; 
@property (readonly) double rttVariation; 
@property (readonly) unsigned rxDuplicateBytes; 
@property (readonly) unsigned rxOutOfOrderBytes; 
@property (readonly) unsigned txRetransmittedBytes; 
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
@property (readonly) unsigned connectAttempts; 
@property (readonly) unsigned connectSuccesses; 
-(id)description;
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
-(unsigned long long)eventFlags;
-(unsigned)connectAttempts;
-(unsigned)connectSuccesses;
-(unsigned)rxDuplicateBytes;
-(unsigned)txRetransmittedBytes;
-(double)rttMinimum;
-(double)rttAverage;
-(double)rttVariation;
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
-(id)traditionalDictionary;
-(BOOL)interfaceWifi;
-(BOOL)countsIncludeHeaderOverhead;
-(id)initWithCounts:(const nstat_counts*)arg1 TCPDescriptor:(nstat_tcp_descriptor*)arg2 sourceIdent:(unsigned long long)arg3 events:(unsigned long long)arg4 seqno:(unsigned long long)arg5 provider:(unsigned)arg6 ;
@end

