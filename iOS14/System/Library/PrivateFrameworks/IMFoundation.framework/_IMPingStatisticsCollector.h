/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class _IMPingPacketData, NSMutableArray, NSMutableString, IMPingStatistics;

@interface _IMPingStatisticsCollector : NSObject {

	_IMPingPacketData* _timestampArray[160];
	NSMutableArray* _roundTriptimes;
	NSMutableString* _stringToWriteToFile;
	IMPingStatistics* _stats;

}
-(id)init;
-(double)_computeMedianTime:(id)arg1 ;
-(double)_computeStandardDeviation:(id)arg1 numPings:(int)arg2 averageRTT:(double)arg3 ;
-(void)addEchoPacket:(int)arg1 packetTimestamp:(timeval)arg2 error:(int)arg3 ;
-(timeval)timeSentForPacket:(int)arg1 ;
-(void)addEchoReplyPacket:(int)arg1 ;
-(void)timeoutOldSequenceNumbers:(double)arg1 ;
-(BOOL)logStatsToFile:(id)arg1 error:(id*)arg2 ;
-(id)pingStatsForLastNSeconds:(double)arg1 ;
-(id)pingStats;
-(void)dealloc;
@end

