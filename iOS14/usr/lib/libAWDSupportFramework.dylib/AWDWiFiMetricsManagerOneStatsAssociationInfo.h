/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setBtCoexStats:(AWDWiFiMetricsManagerBTCoexStats *)arg1 ;
-(unsigned long long)timestamp;
-(unsigned long long)chipCountersPerSlicesCount;
-(AWDWiFiMetricsManagerChipCounters *)chipCounters;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)chipCountersPerSlices;
-(id)description;
-(BOOL)hasChipCounters;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)hasBtCoexStats;
-(BOOL)readFrom:(id)arg1 ;
-(id)chipCountersPerSliceAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(AWDWiFiMetricsManagerBTCoexStats *)btCoexStats;
-(void)setBtCoexModeChange:(AWDWiFiMetricsManagerBTCoexModeChange *)arg1 ;
-(void)setChipCountersPerSlices:(NSMutableArray *)arg1 ;
-(BOOL)hasBtCoexModeChange;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setChipCounters:(AWDWiFiMetricsManagerChipCounters *)arg1 ;
-(void)addChipCountersPerSlice:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)clearChipCountersPerSlices;
-(AWDWiFiMetricsManagerBTCoexModeChange *)btCoexModeChange;
-(void)dealloc;
@end

