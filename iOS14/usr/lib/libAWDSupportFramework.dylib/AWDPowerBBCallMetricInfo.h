/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDPowerBBCallMetricInfo : PBCodable <NSCopying> {

	SCD_Struct_AW21* _rxTxDurations;
	SCD_Struct_AW21* _sleepStateDurations;
	unsigned _callDuration;
	unsigned _powerMicroWatt;
	unsigned _threshold;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasThreshold; 
@property (assign,nonatomic) unsigned threshold;                                         //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) BOOL hasCallDuration; 
@property (assign,nonatomic) unsigned callDuration;                                      //@synthesize callDuration=_callDuration - In the implementation block
@property (nonatomic,readonly) unsigned long long sleepStateDurationsCount; 
@property (nonatomic,readonly) unsigned* sleepStateDurations; 
@property (nonatomic,readonly) unsigned long long rxTxDurationsCount; 
@property (nonatomic,readonly) unsigned* rxTxDurations; 
@property (assign,nonatomic) BOOL hasPowerMicroWatt; 
@property (assign,nonatomic) unsigned powerMicroWatt;                                    //@synthesize powerMicroWatt=_powerMicroWatt - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned)threshold;
-(void)mergeFrom:(id)arg1 ;
-(void)setCallDuration:(unsigned)arg1 ;
-(BOOL)hasCallDuration;
-(void)setHasCallDuration:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)callDuration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setThreshold:(unsigned)arg1 ;
-(void)setHasThreshold:(BOOL)arg1 ;
-(BOOL)hasThreshold;
-(void)setRxTxDurations:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setSleepStateDurations:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasPowerMicroWatt;
-(unsigned)powerMicroWatt;
-(unsigned long long)sleepStateDurationsCount;
-(void)clearSleepStateDurations;
-(unsigned)sleepStateDurationsAtIndex:(unsigned long long)arg1 ;
-(void)addSleepStateDurations:(unsigned)arg1 ;
-(unsigned long long)rxTxDurationsCount;
-(void)clearRxTxDurations;
-(unsigned)rxTxDurationsAtIndex:(unsigned long long)arg1 ;
-(void)addRxTxDurations:(unsigned)arg1 ;
-(unsigned*)sleepStateDurations;
-(unsigned*)rxTxDurations;
@end

