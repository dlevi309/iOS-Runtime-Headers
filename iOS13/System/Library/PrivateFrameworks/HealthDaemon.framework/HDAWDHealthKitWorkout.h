/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitWorkout : PBCodable <NSCopying> {

	long long _durationMs;
	long long _endDate;
	long long _startDate;
	unsigned long long _timestamp;
	long long _totalDistance;
	long long _totalEnergyBurned;
	long long _totalSteps;
	int _activityType;
	SCD_Struct_HD8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasActivityType; 
@property (assign,nonatomic) int activityType;                          //@synthesize activityType=_activityType - In the implementation block
@property (assign,nonatomic) BOOL hasDurationMs; 
@property (assign,nonatomic) long long durationMs;                      //@synthesize durationMs=_durationMs - In the implementation block
@property (assign,nonatomic) BOOL hasTotalEnergyBurned; 
@property (assign,nonatomic) long long totalEnergyBurned;               //@synthesize totalEnergyBurned=_totalEnergyBurned - In the implementation block
@property (assign,nonatomic) BOOL hasTotalDistance; 
@property (assign,nonatomic) long long totalDistance;                   //@synthesize totalDistance=_totalDistance - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) long long startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) long long endDate;                         //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasTotalSteps; 
@property (assign,nonatomic) long long totalSteps;                      //@synthesize totalSteps=_totalSteps - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)startDate;
-(long long)endDate;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(int)activityType;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStartDate:(long long)arg1 ;
-(void)setEndDate:(long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setActivityType:(int)arg1 ;
-(long long)totalDistance;
-(void)setTotalDistance:(long long)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(long long)durationMs;
-(void)setDurationMs:(long long)arg1 ;
-(void)setHasDurationMs:(BOOL)arg1 ;
-(BOOL)hasDurationMs;
-(BOOL)hasActivityType;
-(long long)totalEnergyBurned;
-(void)setTotalEnergyBurned:(long long)arg1 ;
-(void)setHasActivityType:(BOOL)arg1 ;
-(id)activityTypeAsString:(int)arg1 ;
-(int)StringAsActivityType:(id)arg1 ;
-(void)setHasTotalEnergyBurned:(BOOL)arg1 ;
-(BOOL)hasTotalEnergyBurned;
-(void)setHasTotalDistance:(BOOL)arg1 ;
-(BOOL)hasTotalDistance;
-(void)setTotalSteps:(long long)arg1 ;
-(void)setHasTotalSteps:(BOOL)arg1 ;
-(BOOL)hasTotalSteps;
-(long long)totalSteps;
@end

