/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitCoachingFeatures : PBCodable <NSCopying> {

	unsigned _activeCalories;
	unsigned _automotive;
	unsigned _briskMinutes;
	unsigned _cycling;
	unsigned _duration;
	unsigned _heartRate;
	unsigned _other;
	unsigned _running;
	unsigned _unknown;
	unsigned _walking;
	unsigned _workout;
	SCD_Struct_HD39 _has;

}

@property (assign,nonatomic) BOOL hasWalking; 
@property (assign,nonatomic) unsigned walking;                     //@synthesize walking=_walking - In the implementation block
@property (assign,nonatomic) BOOL hasAutomotive; 
@property (assign,nonatomic) unsigned automotive;                  //@synthesize automotive=_automotive - In the implementation block
@property (assign,nonatomic) BOOL hasCycling; 
@property (assign,nonatomic) unsigned cycling;                     //@synthesize cycling=_cycling - In the implementation block
@property (assign,nonatomic) BOOL hasRunning; 
@property (assign,nonatomic) unsigned running;                     //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) BOOL hasOther; 
@property (assign,nonatomic) unsigned other;                       //@synthesize other=_other - In the implementation block
@property (assign,nonatomic) BOOL hasWorkout; 
@property (assign,nonatomic) unsigned workout;                     //@synthesize workout=_workout - In the implementation block
@property (assign,nonatomic) BOOL hasHeartRate; 
@property (assign,nonatomic) unsigned heartRate;                   //@synthesize heartRate=_heartRate - In the implementation block
@property (assign,nonatomic) BOOL hasActiveCalories; 
@property (assign,nonatomic) unsigned activeCalories;              //@synthesize activeCalories=_activeCalories - In the implementation block
@property (assign,nonatomic) BOOL hasBriskMinutes; 
@property (assign,nonatomic) unsigned briskMinutes;                //@synthesize briskMinutes=_briskMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                    //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasUnknown; 
@property (assign,nonatomic) unsigned unknown;                     //@synthesize unknown=_unknown - In the implementation block
-(id)dictionaryRepresentation;
-(void)setRunning:(unsigned)arg1 ;
-(unsigned)running;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(unsigned)unknown;
-(void)mergeFrom:(id)arg1 ;
-(void)setOther:(unsigned)arg1 ;
-(void)setUnknown:(unsigned)arg1 ;
-(void)setBriskMinutes:(unsigned)arg1 ;
-(unsigned)briskMinutes;
-(id)description;
-(unsigned)workout;
-(unsigned)other;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)cycling;
-(unsigned)walking;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)automotive;
-(BOOL)hasBriskMinutes;
-(BOOL)hasUnknown;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasOther;
-(unsigned)heartRate;
-(void)setWorkout:(unsigned)arg1 ;
-(void)setHasBriskMinutes:(BOOL)arg1 ;
-(void)setWalking:(unsigned)arg1 ;
-(void)setHasWalking:(BOOL)arg1 ;
-(BOOL)hasWalking;
-(void)setAutomotive:(unsigned)arg1 ;
-(void)setHasAutomotive:(BOOL)arg1 ;
-(BOOL)hasAutomotive;
-(void)setCycling:(unsigned)arg1 ;
-(void)setHasCycling:(BOOL)arg1 ;
-(BOOL)hasCycling;
-(void)setHasRunning:(BOOL)arg1 ;
-(BOOL)hasRunning;
-(void)setHasOther:(BOOL)arg1 ;
-(void)setHasWorkout:(BOOL)arg1 ;
-(BOOL)hasWorkout;
-(void)setHeartRate:(unsigned)arg1 ;
-(void)setHasHeartRate:(BOOL)arg1 ;
-(BOOL)hasHeartRate;
-(void)setActiveCalories:(unsigned)arg1 ;
-(void)setHasActiveCalories:(BOOL)arg1 ;
-(BOOL)hasActiveCalories;
-(void)setHasUnknown:(BOOL)arg1 ;
-(unsigned)activeCalories;
@end

