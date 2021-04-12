/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(unsigned)threshold;
-(void)setThreshold:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)callDuration;
-(void)setCallDuration:(unsigned)arg1 ;
-(BOOL)hasCallDuration;
-(void)setHasCallDuration:(BOOL)arg1 ;
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

