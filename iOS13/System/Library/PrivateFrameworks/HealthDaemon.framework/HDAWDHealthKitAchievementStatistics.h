/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_HD11 _has;

}

@property (assign,nonatomic) BOOL hasConsecutiveStandingHoursGoalsMet; 
@property (assign,nonatomic) long long consecutiveStandingHoursGoalsMet;                       //@synthesize consecutiveStandingHoursGoalsMet=_consecutiveStandingHoursGoalsMet - In the implementation block
@property (assign,nonatomic) BOOL hasConsecutiveBriskMinuteGoalsMet; 
@property (assign,nonatomic) long long consecutiveBriskMinuteGoalsMet;                         //@synthesize consecutiveBriskMinuteGoalsMet=_consecutiveBriskMinuteGoalsMet - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentCalorieGoalConsecutiveCompleteDays; 
@property (assign,nonatomic) long long currentCalorieGoalConsecutiveCompleteDays;              //@synthesize currentCalorieGoalConsecutiveCompleteDays=_currentCalorieGoalConsecutiveCompleteDays - In the implementation block
@property (assign,nonatomic) BOOL hasConsecutiveCompleteDays; 
@property (assign,nonatomic) long long consecutiveCompleteDays;                                //@synthesize consecutiveCompleteDays=_consecutiveCompleteDays - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
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

