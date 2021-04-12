/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitActivityRingEvent : PBCodable <NSCopying> {

	unsigned long long _eventTimestamp;
	unsigned long long _timestamp;
	unsigned _activeSeconds;
	unsigned _age;
	unsigned _biologicalSex;
	unsigned _briskMinutes;
	unsigned _energyBurned;
	unsigned _energyBurnedGoal;
	unsigned _height;
	unsigned _weight;
	SCD_Struct_HD38 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyBurned; 
@property (assign,nonatomic) unsigned energyBurned;                          //@synthesize energyBurned=_energyBurned - In the implementation block
@property (assign,nonatomic) BOOL hasBriskMinutes; 
@property (assign,nonatomic) unsigned briskMinutes;                          //@synthesize briskMinutes=_briskMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasActiveSeconds; 
@property (assign,nonatomic) unsigned activeSeconds;                         //@synthesize activeSeconds=_activeSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyBurnedGoal; 
@property (assign,nonatomic) unsigned energyBurnedGoal;                      //@synthesize energyBurnedGoal=_energyBurnedGoal - In the implementation block
@property (assign,nonatomic) BOOL hasEventTimestamp; 
@property (assign,nonatomic) unsigned long long eventTimestamp;              //@synthesize eventTimestamp=_eventTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasBiologicalSex; 
@property (assign,nonatomic) unsigned biologicalSex;                         //@synthesize biologicalSex=_biologicalSex - In the implementation block
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) unsigned height;                                //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) BOOL hasWeight; 
@property (assign,nonatomic) unsigned weight;                                //@synthesize weight=_weight - In the implementation block
@property (assign,nonatomic) BOOL hasAge; 
@property (assign,nonatomic) unsigned age;                                   //@synthesize age=_age - In the implementation block
-(void)setHeight:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBiologicalSex:(unsigned)arg1 ;
-(void)setWeight:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(unsigned)biologicalSex;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)height;
-(unsigned)weight;
-(void)setEnergyBurned:(unsigned)arg1 ;
-(void)setEnergyBurnedGoal:(unsigned)arg1 ;
-(void)setBriskMinutes:(unsigned)arg1 ;
-(unsigned)energyBurned;
-(unsigned)energyBurnedGoal;
-(unsigned)briskMinutes;
-(id)description;
-(void)setHasHeight:(BOOL)arg1 ;
-(BOOL)hasHeight;
-(void)setAge:(unsigned)arg1 ;
-(void)setEventTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)eventTimestamp;
-(void)setHasEventTimestamp:(BOOL)arg1 ;
-(BOOL)hasEventTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasAge;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasAge:(BOOL)arg1 ;
-(unsigned)age;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasEnergyBurned;
-(BOOL)hasEnergyBurnedGoal;
-(BOOL)hasBriskMinutes;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasWeight;
-(void)setHasEnergyBurned:(BOOL)arg1 ;
-(void)setHasBriskMinutes:(BOOL)arg1 ;
-(void)setActiveSeconds:(unsigned)arg1 ;
-(void)setHasActiveSeconds:(BOOL)arg1 ;
-(BOOL)hasActiveSeconds;
-(void)setHasEnergyBurnedGoal:(BOOL)arg1 ;
-(void)setHasBiologicalSex:(BOOL)arg1 ;
-(BOOL)hasBiologicalSex;
-(void)setHasWeight:(BOOL)arg1 ;
-(unsigned)activeSeconds;
@end

