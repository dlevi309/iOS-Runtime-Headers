/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDWiFiMetricsManagerBTCoexModeChange, AWDWiFiMetricsManagerBTCoexStats, AWDWiFiMetricsManagerChipCounters, NSMutableArray;

@interface AWDWiFiMetricsManagerOneStatsAssociationInfo : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDWiFiMetricsManagerBTCoexModeChange* _btCoexModeChange;
	AWDWiFiMetricsManagerBTCoexStats* _btCoexStats;
	AWDWiFiMetricsManagerChipCounters* _chipCounters;
	NSMutableArray* _chipCountersPerSlices;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasChipCounters; 
@property (nonatomic,retain) AWDWiFiMetricsManagerChipCounters * chipCounters;                      //@synthesize chipCounters=_chipCounters - In the implementation block
@property (nonatomic,readonly) BOOL hasBtCoexStats; 
@property (nonatomic,retain) AWDWiFiMetricsManagerBTCoexStats * btCoexStats;                        //@synthesize btCoexStats=_btCoexStats - In the implementation block
@property (nonatomic,readonly) BOOL hasBtCoexModeChange; 
@property (nonatomic,retain) AWDWiFiMetricsManagerBTCoexModeChange * btCoexModeChange;              //@synthesize btCoexModeChange=_btCoexModeChange - In the implementation block
@property (nonatomic,retain) NSMutableArray * chipCountersPerSlices;                                //@synthesize chipCountersPerSlices=_chipCountersPerSlices - In the implementation block
+(Class)chipCountersPerSliceType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setChipCounters:(AWDWiFiMetricsManagerChipCounters *)arg1 ;
-(void)setBtCoexStats:(AWDWiFiMetricsManagerBTCoexStats *)arg1 ;
-(void)setBtCoexModeChange:(AWDWiFiMetricsManagerBTCoexModeChange *)arg1 ;
-(void)setChipCountersPerSlices:(NSMutableArray *)arg1 ;
-(void)addChipCountersPerSlice:(id)arg1 ;
-(unsigned long long)chipCountersPerSlicesCount;
-(void)clearChipCountersPerSlices;
-(id)chipCountersPerSliceAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasChipCounters;
-(BOOL)hasBtCoexStats;
-(BOOL)hasBtCoexModeChange;
-(AWDWiFiMetricsManagerChipCounters *)chipCounters;
-(AWDWiFiMetricsManagerBTCoexStats *)btCoexStats;
-(AWDWiFiMetricsManagerBTCoexModeChange *)btCoexModeChange;
-(NSMutableArray *)chipCountersPerSlices;
@end

