/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDActivityAWDActivityExerciseMinuteHour : PBCodable <NSCopying> {

	long long _exerciseMinutes;
	long long _hourSinceMidnight;
	SCD_Struct_HD12 _has;

}

@property (assign,nonatomic) BOOL hasHourSinceMidnight; 
@property (assign,nonatomic) long long hourSinceMidnight;              //@synthesize hourSinceMidnight=_hourSinceMidnight - In the implementation block
@property (assign,nonatomic) BOOL hasExerciseMinutes; 
@property (assign,nonatomic) long long exerciseMinutes;                //@synthesize exerciseMinutes=_exerciseMinutes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHourSinceMidnight:(long long)arg1 ;
-(void)setHasHourSinceMidnight:(BOOL)arg1 ;
-(BOOL)hasHourSinceMidnight;
-(void)setExerciseMinutes:(long long)arg1 ;
-(void)setHasExerciseMinutes:(BOOL)arg1 ;
-(BOOL)hasExerciseMinutes;
-(long long)hourSinceMidnight;
-(long long)exerciseMinutes;
@end

