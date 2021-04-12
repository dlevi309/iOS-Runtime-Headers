/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ASCodableCloudKitSample, NSData;

@interface ASCodableCloudKitActivitySnapshot : PBCodable <NSCopying> {

	double _activeHours;
	double _activeHoursGoal;
	long long _amm;
	double _briskMinutes;
	double _briskMinutesGoal;
	double _energyBurned;
	double _energyBurnedGoal;
	double _mmg;
	double _mmv;
	double _pushCount;
	long long _snapshotIndex;
	double _stepCount;
	long long _timeZoneOffsetFromUTCForNoon;
	double _walkingAndRunningDistance;
	long long _wheelchairUse;
	ASCodableCloudKitSample* _sample;
	NSData* _sourceUUID;
	SCD_Struct_AS6 _has;

}

@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) ASCodableCloudKitSample * sample;                    //@synthesize sample=_sample - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceUUID; 
@property (nonatomic,retain) NSData * sourceUUID;                                 //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (assign,nonatomic) BOOL hasSnapshotIndex; 
@property (assign,nonatomic) long long snapshotIndex;                             //@synthesize snapshotIndex=_snapshotIndex - In the implementation block
@property (assign,nonatomic) BOOL hasTimeZoneOffsetFromUTCForNoon; 
@property (assign,nonatomic) long long timeZoneOffsetFromUTCForNoon;              //@synthesize timeZoneOffsetFromUTCForNoon=_timeZoneOffsetFromUTCForNoon - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyBurned; 
@property (assign,nonatomic) double energyBurned;                                 //@synthesize energyBurned=_energyBurned - In the implementation block
@property (assign,nonatomic) BOOL hasEnergyBurnedGoal; 
@property (assign,nonatomic) double energyBurnedGoal;                             //@synthesize energyBurnedGoal=_energyBurnedGoal - In the implementation block
@property (assign,nonatomic) BOOL hasBriskMinutes; 
@property (assign,nonatomic) double briskMinutes;                                 //@synthesize briskMinutes=_briskMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasBriskMinutesGoal; 
@property (assign,nonatomic) double briskMinutesGoal;                             //@synthesize briskMinutesGoal=_briskMinutesGoal - In the implementation block
@property (assign,nonatomic) BOOL hasActiveHours; 
@property (assign,nonatomic) double activeHours;                                  //@synthesize activeHours=_activeHours - In the implementation block
@property (assign,nonatomic) BOOL hasActiveHoursGoal; 
@property (assign,nonatomic) double activeHoursGoal;                              //@synthesize activeHoursGoal=_activeHoursGoal - In the implementation block
@property (assign,nonatomic) BOOL hasWalkingAndRunningDistance; 
@property (assign,nonatomic) double walkingAndRunningDistance;                    //@synthesize walkingAndRunningDistance=_walkingAndRunningDistance - In the implementation block
@property (assign,nonatomic) BOOL hasStepCount; 
@property (assign,nonatomic) double stepCount;                                    //@synthesize stepCount=_stepCount - In the implementation block
@property (assign,nonatomic) BOOL hasPushCount; 
@property (assign,nonatomic) double pushCount;                                    //@synthesize pushCount=_pushCount - In the implementation block
@property (assign,nonatomic) BOOL hasWheelchairUse; 
@property (assign,nonatomic) long long wheelchairUse;                             //@synthesize wheelchairUse=_wheelchairUse - In the implementation block
@property (assign,nonatomic) BOOL hasMmv; 
@property (assign,nonatomic) double mmv;                                          //@synthesize mmv=_mmv - In the implementation block
@property (assign,nonatomic) BOOL hasMmg; 
@property (assign,nonatomic) double mmg;                                          //@synthesize mmg=_mmg - In the implementation block
@property (assign,nonatomic) BOOL hasAmm; 
@property (assign,nonatomic) long long amm;                                       //@synthesize amm=_amm - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)stepCount;
-(void)setSample:(ASCodableCloudKitSample *)arg1 ;
-(ASCodableCloudKitSample *)sample;
-(long long)wheelchairUse;
-(void)setAmm:(long long)arg1 ;
-(void)setMmv:(double)arg1 ;
-(void)setMmg:(double)arg1 ;
-(void)setEnergyBurned:(double)arg1 ;
-(void)setEnergyBurnedGoal:(double)arg1 ;
-(void)setBriskMinutes:(double)arg1 ;
-(void)setBriskMinutesGoal:(double)arg1 ;
-(void)setActiveHours:(double)arg1 ;
-(void)setActiveHoursGoal:(double)arg1 ;
-(void)setStepCount:(double)arg1 ;
-(void)setWalkingAndRunningDistance:(double)arg1 ;
-(void)setPushCount:(double)arg1 ;
-(void)setWheelchairUse:(long long)arg1 ;
-(void)setTimeZoneOffsetFromUTCForNoon:(long long)arg1 ;
-(long long)snapshotIndex;
-(long long)amm;
-(double)mmv;
-(double)mmg;
-(double)energyBurned;
-(double)energyBurnedGoal;
-(double)briskMinutes;
-(double)briskMinutesGoal;
-(double)activeHours;
-(double)activeHoursGoal;
-(double)walkingAndRunningDistance;
-(double)pushCount;
-(NSData *)sourceUUID;
-(void)setSourceUUID:(NSData *)arg1 ;
-(void)setSnapshotIndex:(long long)arg1 ;
-(long long)timeZoneOffsetFromUTCForNoon;
-(BOOL)hasEnergyBurned;
-(BOOL)hasEnergyBurnedGoal;
-(BOOL)hasBriskMinutes;
-(BOOL)hasBriskMinutesGoal;
-(BOOL)hasActiveHours;
-(BOOL)hasActiveHoursGoal;
-(BOOL)hasStepCount;
-(BOOL)hasPushCount;
-(BOOL)hasWalkingAndRunningDistance;
-(BOOL)hasWheelchairUse;
-(void)setHasPushCount:(BOOL)arg1 ;
-(BOOL)hasSample;
-(BOOL)hasSourceUUID;
-(void)setHasSnapshotIndex:(BOOL)arg1 ;
-(BOOL)hasSnapshotIndex;
-(void)setHasTimeZoneOffsetFromUTCForNoon:(BOOL)arg1 ;
-(BOOL)hasTimeZoneOffsetFromUTCForNoon;
-(void)setHasEnergyBurned:(BOOL)arg1 ;
-(void)setHasEnergyBurnedGoal:(BOOL)arg1 ;
-(void)setHasBriskMinutes:(BOOL)arg1 ;
-(void)setHasBriskMinutesGoal:(BOOL)arg1 ;
-(void)setHasActiveHours:(BOOL)arg1 ;
-(void)setHasActiveHoursGoal:(BOOL)arg1 ;
-(void)setHasWalkingAndRunningDistance:(BOOL)arg1 ;
-(void)setHasStepCount:(BOOL)arg1 ;
-(void)setHasWheelchairUse:(BOOL)arg1 ;
-(void)setHasMmv:(BOOL)arg1 ;
-(BOOL)hasMmv;
-(void)setHasMmg:(BOOL)arg1 ;
-(BOOL)hasMmg;
-(void)setHasAmm:(BOOL)arg1 ;
-(BOOL)hasAmm;
@end

