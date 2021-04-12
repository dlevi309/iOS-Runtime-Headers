/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDPowerBatteryMetrics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _cycleCountKey;
	unsigned _durationDispOn;
	unsigned _durationPartialDispOff;
	unsigned _durationPartialDispOn;
	unsigned _energyChargedMicroWatt;
	unsigned _energyConsumedDisplayOffMicroWatt;
	unsigned _energyConsumedDisplayOnMicroWatt;
	unsigned _energyConsumedPartailDispOnMicrowatt;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyConsumedDisplayOnMicroWatt; 
@property (assign,nonatomic) unsigned energyConsumedDisplayOnMicroWatt;                  //@synthesize energyConsumedDisplayOnMicroWatt=_energyConsumedDisplayOnMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyConsumedDisplayOffMicroWatt; 
@property (assign,nonatomic) unsigned energyConsumedDisplayOffMicroWatt;                 //@synthesize energyConsumedDisplayOffMicroWatt=_energyConsumedDisplayOffMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyChargedMicroWatt; 
@property (assign,nonatomic) unsigned energyChargedMicroWatt;                            //@synthesize energyChargedMicroWatt=_energyChargedMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasCycleCountKey; 
@property (assign,nonatomic) unsigned cycleCountKey;                                     //@synthesize cycleCountKey=_cycleCountKey - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyConsumedPartailDispOnMicrowatt; 
@property (assign,nonatomic) unsigned energyConsumedPartailDispOnMicrowatt;              //@synthesize energyConsumedPartailDispOnMicrowatt=_energyConsumedPartailDispOnMicrowatt - In the implementation block
@property (assign,nonatomic) BOOL hasDurationDispOn; 
@property (assign,nonatomic) unsigned durationDispOn;                                    //@synthesize durationDispOn=_durationDispOn - In the implementation block
@property (assign,nonatomic) BOOL hasDurationPartialDispOn; 
@property (assign,nonatomic) unsigned durationPartialDispOn;                             //@synthesize durationPartialDispOn=_durationPartialDispOn - In the implementation block
@property (assign,nonatomic) BOOL hasDurationPartialDispOff; 
@property (assign,nonatomic) unsigned durationPartialDispOff;                            //@synthesize durationPartialDispOff=_durationPartialDispOff - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEnergyConsumedDisplayOnMicroWatt:(unsigned)arg1 ;
-(void)setEnergyConsumedDisplayOffMicroWatt:(unsigned)arg1 ;
-(void)setEnergyConsumedPartailDispOnMicrowatt:(unsigned)arg1 ;
-(void)setEnergyChargedMicroWatt:(unsigned)arg1 ;
-(void)setDurationDispOn:(unsigned)arg1 ;
-(void)setDurationPartialDispOn:(unsigned)arg1 ;
-(void)setDurationPartialDispOff:(unsigned)arg1 ;
-(void)setCycleCountKey:(unsigned)arg1 ;
-(void)setHasEnergyConsumedDisplayOnMicroWatt:(BOOL)arg1 ;
-(BOOL)hasEnergyConsumedDisplayOnMicroWatt;
-(void)setHasEnergyConsumedDisplayOffMicroWatt:(BOOL)arg1 ;
-(BOOL)hasEnergyConsumedDisplayOffMicroWatt;
-(void)setHasEnergyChargedMicroWatt:(BOOL)arg1 ;
-(BOOL)hasEnergyChargedMicroWatt;
-(void)setHasCycleCountKey:(BOOL)arg1 ;
-(BOOL)hasCycleCountKey;
-(void)setHasEnergyConsumedPartailDispOnMicrowatt:(BOOL)arg1 ;
-(BOOL)hasEnergyConsumedPartailDispOnMicrowatt;
-(void)setHasDurationDispOn:(BOOL)arg1 ;
-(BOOL)hasDurationDispOn;
-(void)setHasDurationPartialDispOn:(BOOL)arg1 ;
-(BOOL)hasDurationPartialDispOn;
-(void)setHasDurationPartialDispOff:(BOOL)arg1 ;
-(BOOL)hasDurationPartialDispOff;
-(unsigned)energyConsumedDisplayOnMicroWatt;
-(unsigned)energyConsumedDisplayOffMicroWatt;
-(unsigned)energyChargedMicroWatt;
-(unsigned)cycleCountKey;
-(unsigned)energyConsumedPartailDispOnMicrowatt;
-(unsigned)durationDispOn;
-(unsigned)durationPartialDispOn;
-(unsigned)durationPartialDispOff;
@end

