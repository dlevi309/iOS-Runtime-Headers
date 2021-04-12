/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) BOOL flowIsLocal; 
@property (readonly) BOOL flowIsNonLocal; 
@property (readonly) unsigned connectAttempts; 
@property (readonly) unsigned connectSuccesses; 
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
-(unsigned long long)networkActivityMapPart2;
-(unsigned long long)eventFlags;
-(unsigned)rxOutOfOrderBytes;
-(unsigned)connectAttempts;
-(unsigned)sendBufferSize;
-(BOOL)interfaceCompanionLink;
-(BOOL)interfaceWired;
-(unsigned)txWindow;
-(unsigned)connstatusWriteProbeFailed;
-(unsigned long long)uniqueProcessID;
-(id)provider;
-(id)remoteAddress;
-(NSString *)TCPState;
-(unsigned long long)flowStartContinuousTime;
-(BOOL)interfaceAWDL;
-(BOOL)interfaceWifi;
-(NSString *)congestionAlgorithm;
-(id)localAddress;
-(id)processName;
-(double)rttMinimum;
-(BOOL)readProbeFailed;
-(BOOL)interfaceLoopback;
-(unsigned)txCongestionWindow;
-(unsigned)trafficManagementFlags;
-(BOOL)probeActivated;
-(id)traditionalDictionary;
-(unsigned)connstatusConnProbeFailed;
-(BOOL)interfaceCellular;
-(unsigned)connectSuccesses;
-(id)euuid;
-(unsigned)connstatusReadProbeFailed;
-(BOOL)countsIncludeHeaderOverhead;
-(unsigned)txUnacked;
-(int)epid;
-(unsigned)trafficClass;
-(BOOL)writeProbeFailed;
-(unsigned long long)networkActivityMapPart1;
-(id)description;
-(BOOL)flowIsLocal;
-(BOOL)flowIsNonLocal;
-(id)initWithCounts:(const nstat_counts*)arg1 TCPDescriptor:(nstat_tcp_descriptor*)arg2 sourceIdent:(unsigned long long)arg3 events:(unsigned long long)arg4 seqno:(unsigned long long)arg5 provider:(unsigned)arg6 ;
@end

