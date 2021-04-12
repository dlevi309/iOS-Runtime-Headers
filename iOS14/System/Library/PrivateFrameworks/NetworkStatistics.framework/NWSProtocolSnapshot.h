/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
*/

#import <NetworkStatistics/NWSSnapshot.h>

@class NSDate, NSString, NSData;

@interface NWSProtocolSnapshot : NWSSnapshot {

	BOOL _interfaceUnknown;
	BOOL _interfaceLoopback;
	BOOL _interfaceCellular;
	BOOL _interfaceCellularViaFallback;
	BOOL _interfaceWifi;
	BOOL _interfaceWired;
	BOOL _interfaceAWDL;
	BOOL _interfaceExpensive;
	BOOL _interfaceCompanionLink;
	BOOL _countsIncludeHeaderOverhead;
	unsigned _interfaceIndex;
	unsigned _receiveBufferSize;
	unsigned _receiveBufferUsed;
	unsigned _trafficClass;
	int _processID;
	int _epid;
	NSDate* _flowStartTimestamp;
	double _flowDuration;
	unsigned long long _flowStartContinuousTime;
	unsigned long long _uniqueProcessID;
	NSString* _processName;
	unsigned long long _eupid;
	NSString* _uuid;
	NSString* _euuid;
	NSString* _vuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;
	unsigned long long _networkActivityMapStartTime;
	unsigned long long _networkActivityMapPart1;
	unsigned long long _networkActivityMapPart2;
	unsigned long long _eventFlags;

}

@property (readonly) NSDate * flowStartTimestamp;                                 //@synthesize flowStartTimestamp=_flowStartTimestamp - In the implementation block
@property (readonly) double flowDuration;                                         //@synthesize flowDuration=_flowDuration - In the implementation block
@property (readonly) unsigned long long flowStartContinuousTime;                  //@synthesize flowStartContinuousTime=_flowStartContinuousTime - In the implementation block
@property (readonly) unsigned interfaceIndex;                                     //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (readonly) unsigned receiveBufferSize;                                  //@synthesize receiveBufferSize=_receiveBufferSize - In the implementation block
@property (readonly) unsigned receiveBufferUsed;                                  //@synthesize receiveBufferUsed=_receiveBufferUsed - In the implementation block
@property (readonly) unsigned trafficClass;                                       //@synthesize trafficClass=_trafficClass - In the implementation block
@property (readonly) unsigned long long uniqueProcessID;                          //@synthesize uniqueProcessID=_uniqueProcessID - In the implementation block
@property (readonly) int processID;                                               //@synthesize processID=_processID - In the implementation block
@property (readonly) NSString * processName;                                      //@synthesize processName=_processName - In the implementation block
@property (readonly) unsigned long long eupid;                                    //@synthesize eupid=_eupid - In the implementation block
@property (readonly) int epid;                                                    //@synthesize epid=_epid - In the implementation block
@property (readonly) NSString * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (readonly) NSString * euuid;                                            //@synthesize euuid=_euuid - In the implementation block
@property (readonly) NSString * vuuid;                                            //@synthesize vuuid=_vuuid - In the implementation block
@property (readonly) NSData * localAddress;                                       //@synthesize localAddress=_localAddress - In the implementation block
@property (readonly) NSData * remoteAddress;                                      //@synthesize remoteAddress=_remoteAddress - In the implementation block
@property (readonly) BOOL interfaceUnknown;                                       //@synthesize interfaceUnknown=_interfaceUnknown - In the implementation block
@property (readonly) BOOL interfaceLoopback;                                      //@synthesize interfaceLoopback=_interfaceLoopback - In the implementation block
@property (readonly) BOOL interfaceCellular;                                      //@synthesize interfaceCellular=_interfaceCellular - In the implementation block
@property (readonly) BOOL interfaceCellularViaFallback;                           //@synthesize interfaceCellularViaFallback=_interfaceCellularViaFallback - In the implementation block
@property (readonly) BOOL interfaceWifi;                                          //@synthesize interfaceWifi=_interfaceWifi - In the implementation block
@property (readonly) BOOL interfaceWired;                                         //@synthesize interfaceWired=_interfaceWired - In the implementation block
@property (readonly) BOOL interfaceAWDL;                                          //@synthesize interfaceAWDL=_interfaceAWDL - In the implementation block
@property (readonly) BOOL interfaceExpensive;                                     //@synthesize interfaceExpensive=_interfaceExpensive - In the implementation block
@property (readonly) BOOL interfaceCompanionLink;                                 //@synthesize interfaceCompanionLink=_interfaceCompanionLink - In the implementation block
@property (readonly) BOOL countsIncludeHeaderOverhead;                            //@synthesize countsIncludeHeaderOverhead=_countsIncludeHeaderOverhead - In the implementation block
@property (readonly) unsigned long long networkActivityMapStartTime;              //@synthesize networkActivityMapStartTime=_networkActivityMapStartTime - In the implementation block
@property (readonly) unsigned long long networkActivityMapPart1;                  //@synthesize networkActivityMapPart1=_networkActivityMapPart1 - In the implementation block
@property (readonly) unsigned long long networkActivityMapPart2;                  //@synthesize networkActivityMapPart2=_networkActivityMapPart2 - In the implementation block
@property (readonly) unsigned long long eventFlags;                               //@synthesize eventFlags=_eventFlags - In the implementation block
+(void)initialize;
-(unsigned)receiveBufferUsed;
-(NSString *)vuuid;
-(unsigned long long)eupid;
-(unsigned)receiveBufferSize;
-(id)_createNSUUIDForBytes:(unsigned char)arg1 ;
-(int)processID;
-(unsigned)interfaceIndex;
-(unsigned long long)networkActivityMapStartTime;
-(NSString *)uuid;
-(BOOL)interfaceExpensive;
-(double)flowDuration;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceCellularViaFallback;
-(NSDate *)flowStartTimestamp;
-(unsigned long long)networkActivityMapPart2;
-(unsigned long long)eventFlags;
-(BOOL)interfaceCompanionLink;
-(BOOL)interfaceWired;
-(unsigned long long)uniqueProcessID;
-(NSData *)remoteAddress;
-(id)_dateWithContinuousTime:(unsigned long long)arg1 ;
-(unsigned long long)flowStartContinuousTime;
-(BOOL)interfaceAWDL;
-(BOOL)interfaceWifi;
-(NSData *)localAddress;
-(NSString *)processName;
-(BOOL)interfaceLoopback;
-(BOOL)interfaceCellular;
-(NSString *)euuid;
-(BOOL)countsIncludeHeaderOverhead;
-(int)epid;
-(unsigned)trafficClass;
-(unsigned long long)networkActivityMapPart1;
-(double)_intervalWithContinuousTime:(unsigned long long)arg1 ;
-(double)_referenceIntervalWithContinuousTime:(unsigned long long)arg1 ;
@end

