/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_HD40 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)duration;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)walking;
-(unsigned)unknown;
-(unsigned)running;
-(unsigned)cycling;
-(unsigned)automotive;
-(void)setDuration:(unsigned)arg1 ;
-(void)setRunning:(unsigned)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setUnknown:(unsigned)arg1 ;
-(BOOL)hasUnknown;
-(unsigned)heartRate;
-(void)setBriskMinutes:(unsigned)arg1 ;
-(unsigned)briskMinutes;
-(BOOL)hasBriskMinutes;
-(void)setOther:(unsigned)arg1 ;
-(unsigned)other;
-(void)setHasOther:(BOOL)arg1 ;
-(BOOL)hasOther;
-(void)setHasBriskMinutes:(BOOL)arg1 ;
-(unsigned)workout;
-(void)setWalking:(unsigned)arg1 ;
-(void)setCycling:(unsigned)arg1 ;
-(void)setAutomotive:(unsigned)arg1 ;
-(void)setWorkout:(unsigned)arg1 ;
-(void)setActiveCalories:(unsigned)arg1 ;
-(void)setHeartRate:(unsigned)arg1 ;
-(unsigned)activeCalories;
-(void)setHasWalking:(BOOL)arg1 ;
-(BOOL)hasWalking;
-(void)setHasAutomotive:(BOOL)arg1 ;
-(BOOL)hasAutomotive;
-(void)setHasCycling:(BOOL)arg1 ;
-(BOOL)hasCycling;
-(void)setHasRunning:(BOOL)arg1 ;
-(BOOL)hasRunning;
-(void)setHasWorkout:(BOOL)arg1 ;
-(BOOL)hasWorkout;
-(void)setHasHeartRate:(BOOL)arg1 ;
-(BOOL)hasHeartRate;
-(void)setHasActiveCalories:(BOOL)arg1 ;
-(BOOL)hasActiveCalories;
-(void)setHasUnknown:(BOOL)arg1 ;
@end

