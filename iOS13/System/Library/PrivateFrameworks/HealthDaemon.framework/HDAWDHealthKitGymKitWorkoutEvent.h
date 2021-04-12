/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDAWDHealthKitGymKitWorkoutEvent : PBCodable <NSCopying> {

	long long _timeToBeginExperience;
	unsigned long long _timestamp;
	long long _workoutEndErrorCode;
	int _fitnessMachineType;
	NSString* _manufacturer;
	SCD_Struct_HD11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFitnessMachineType; 
@property (assign,nonatomic) int fitnessMachineType;                       //@synthesize fitnessMachineType=_fitnessMachineType - In the implementation block
@property (nonatomic,readonly) BOOL hasManufacturer; 
@property (nonatomic,retain) NSString * manufacturer;                      //@synthesize manufacturer=_manufacturer - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToBeginExperience; 
@property (assign,nonatomic) long long timeToBeginExperience;              //@synthesize timeToBeginExperience=_timeToBeginExperience - In the implementation block
@property (assign,nonatomic) BOOL hasWorkoutEndErrorCode; 
@property (assign,nonatomic) long long workoutEndErrorCode;                //@synthesize workoutEndErrorCode=_workoutEndErrorCode - In the implementation block
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
-(NSString *)manufacturer;
-(void)setManufacturer:(NSString *)arg1 ;
-(BOOL)hasManufacturer;
-(int)fitnessMachineType;
-(void)setFitnessMachineType:(int)arg1 ;
-(void)setHasFitnessMachineType:(BOOL)arg1 ;
-(BOOL)hasFitnessMachineType;
-(id)fitnessMachineTypeAsString:(int)arg1 ;
-(int)StringAsFitnessMachineType:(id)arg1 ;
-(void)setTimeToBeginExperience:(long long)arg1 ;
-(void)setHasTimeToBeginExperience:(BOOL)arg1 ;
-(BOOL)hasTimeToBeginExperience;
-(void)setWorkoutEndErrorCode:(long long)arg1 ;
-(void)setHasWorkoutEndErrorCode:(BOOL)arg1 ;
-(BOOL)hasWorkoutEndErrorCode;
-(long long)timeToBeginExperience;
-(long long)workoutEndErrorCode;
@end

