/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDLibnetcoreCellularFallbackReport : PBCodable <NSCopying> {

	SCD_Struct_AW15* _networkEvents;
	SCD_Struct_AW24* _timeToNetworkEventsMsecs;
	unsigned long long _fallbackTimerMsecs;
	NSMutableArray* _dataUsageSnapshotsAtNetworkEvents;
	int _denyReason;
	NSMutableArray* _primaryInterfaceAttemptStatisticsReports;
	BOOL _fellback;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasFellback; 
@property (assign,nonatomic) BOOL fellback;                                                          //@synthesize fellback=_fellback - In the implementation block
@property (assign,nonatomic) BOOL hasDenyReason; 
@property (assign,nonatomic) int denyReason;                                                         //@synthesize denyReason=_denyReason - In the implementation block
@property (assign,nonatomic) BOOL hasFallbackTimerMsecs; 
@property (assign,nonatomic) unsigned long long fallbackTimerMsecs;                                  //@synthesize fallbackTimerMsecs=_fallbackTimerMsecs - In the implementation block
@property (nonatomic,readonly) unsigned long long networkEventsCount; 
@property (nonatomic,readonly) int* networkEvents; 
@property (nonatomic,readonly) unsigned long long timeToNetworkEventsMsecsCount; 
@property (nonatomic,readonly) unsigned long long* timeToNetworkEventsMsecs; 
@property (nonatomic,retain) NSMutableArray * primaryInterfaceAttemptStatisticsReports;              //@synthesize primaryInterfaceAttemptStatisticsReports=_primaryInterfaceAttemptStatisticsReports - In the implementation block
@property (nonatomic,retain) NSMutableArray * dataUsageSnapshotsAtNetworkEvents;                     //@synthesize dataUsageSnapshotsAtNetworkEvents=_dataUsageSnapshotsAtNetworkEvents - In the implementation block
+(Class)primaryInterfaceAttemptStatisticsReportsType;
+(Class)dataUsageSnapshotsAtNetworkEventsType;
-(id)dictionaryRepresentation;
-(unsigned long long)networkEventsCount;
-(unsigned long long)timeToNetworkEventsMsecsCount;
-(NSMutableArray *)primaryInterfaceAttemptStatisticsReports;
-(void)setFellback:(BOOL)arg1 ;
-(int)StringAsDenyReason:(id)arg1 ;
-(NSMutableArray *)dataUsageSnapshotsAtNetworkEvents;
-(unsigned long long*)timeToNetworkEventsMsecs;
-(id)networkEventsAsString:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)dataUsageSnapshotsAtNetworkEventsAtIndex:(unsigned long long)arg1 ;
-(int)denyReason;
-(void)clearDataUsageSnapshotsAtNetworkEvents;
-(BOOL)hasFellback;
-(BOOL)hasFallbackTimerMsecs;
-(void)setPrimaryInterfaceAttemptStatisticsReports:(NSMutableArray *)arg1 ;
-(unsigned long long)timeToNetworkEventsMsecsAtIndex:(unsigned long long)arg1 ;
-(void)setDataUsageSnapshotsAtNetworkEvents:(NSMutableArray *)arg1 ;
-(id)denyReasonAsString:(int)arg1 ;
-(id)description;
-(void)clearTimeToNetworkEventsMsecs;
-(int)networkEventsAtIndex:(unsigned long long)arg1 ;
-(void)setFallbackTimerMsecs:(unsigned long long)arg1 ;
-(void)addNetworkEvents:(int)arg1 ;
-(void)clearNetworkEvents;
-(BOOL)hasDenyReason;
-(void)setHasFallbackTimerMsecs:(BOOL)arg1 ;
-(void)setHasFellback:(BOOL)arg1 ;
-(unsigned long long)fallbackTimerMsecs;
-(unsigned long long)hash;
-(unsigned long long)primaryInterfaceAttemptStatisticsReportsCount;
-(void)setTimeToNetworkEventsMsecs:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)fellback;
-(void)setDenyReason:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int*)networkEvents;
-(void)addPrimaryInterfaceAttemptStatisticsReports:(id)arg1 ;
-(int)StringAsNetworkEvents:(id)arg1 ;
-(void)setHasDenyReason:(BOOL)arg1 ;
-(void)addTimeToNetworkEventsMsecs:(unsigned long long)arg1 ;
-(void)clearPrimaryInterfaceAttemptStatisticsReports;
-(id)primaryInterfaceAttemptStatisticsReportsAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setNetworkEvents:(int*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addDataUsageSnapshotsAtNetworkEvents:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)dataUsageSnapshotsAtNetworkEventsCount;
@end

