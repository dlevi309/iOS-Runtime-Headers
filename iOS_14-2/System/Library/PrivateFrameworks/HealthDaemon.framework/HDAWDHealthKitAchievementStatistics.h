/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitAchievementStatistics : PBCodable <NSCopying> {

	long long _consecutiveBriskMinuteGoalsMet;
	long long _consecutiveCompleteDays;
	long long _consecutiveStandingHoursGoalsMet;
	long long _currentCalorieGoalConsecutiveCompleteDays;
	SCD_Struct_HD10 _has;

}

@property (assign,nonatomic) BOOL hasConsecutiveStandingHoursGoalsMet; 
@property (assign,nonatomic) long long consecutiveStandingHoursGoalsMet;                       //@synthesize consecutiveStandingHoursGoalsMet=_consecutiveStandingHoursGoalsMet - In the implementation block
@property (assign,nonatomic) BOOL hasConsecutiveBriskMinuteGoalsMet; 
@property (assign,nonatomic) long long consecutiveBriskMinuteGoalsMet;                         //@synthesize consecutiveBriskMinuteGoalsMet=_consecutiveBriskMinuteGoalsMet - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentCalorieGoalConsecutiveCompleteDays; 
@property (assign,nonatomic) long long currentCalorieGoalConsecutiveCompleteDays;              //@synthesize currentCalorieGoalConsecutiveCompleteDays=_currentCalorieGoalConsecutiveCompleteDays - In the implementation block
@property (assign,nonatomic) BOOL hasConsecutiveCompleteDays; 
@property (assign,nonatomic) long long consecutiveCompleteDays;                                //@synthesize consecutiveCompleteDays=_consecutiveCompleteDays - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConsecutiveStandingHoursGoalsMet:(long long)arg1 ;
-(void)setHasConsecutiveStandingHoursGoalsMet:(BOOL)arg1 ;
-(BOOL)hasConsecutiveStandingHoursGoalsMet;
-(void)setConsecutiveBriskMinuteGoalsMet:(long long)arg1 ;
-(void)setHasConsecutiveBriskMinuteGoalsMet:(BOOL)arg1 ;
-(BOOL)hasConsecutiveBriskMinuteGoalsMet;
-(void)setCurrentCalorieGoalConsecutiveCompleteDays:(long long)arg1 ;
-(void)setHasCurrentCalorieGoalConsecutiveCompleteDays:(BOOL)arg1 ;
-(BOOL)hasCurrentCalorieGoalConsecutiveCompleteDays;
-(void)setConsecutiveCompleteDays:(long long)arg1 ;
-(void)setHasConsecutiveCompleteDays:(BOOL)arg1 ;
-(BOOL)hasConsecutiveCompleteDays;
-(long long)consecutiveStandingHoursGoalsMet;
-(long long)consecutiveBriskMinuteGoalsMet;
-(long long)currentCalorieGoalConsecutiveCompleteDays;
-(long long)consecutiveCompleteDays;
@end

