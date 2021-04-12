/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitWeeklySummaryDetail : PBCodable <NSCopying> {

	long long _mostRecentGoal;
	long long _numTimesGoalAchieved;
	long long _selectedGoal;
	SCD_Struct_HD3 _has;

}

@property (assign,nonatomic) BOOL hasMostRecentGoal; 
@property (assign,nonatomic) long long mostRecentGoal;                    //@synthesize mostRecentGoal=_mostRecentGoal - In the implementation block
@property (assign,nonatomic) BOOL hasNumTimesGoalAchieved; 
@property (assign,nonatomic) long long numTimesGoalAchieved;              //@synthesize numTimesGoalAchieved=_numTimesGoalAchieved - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedGoal; 
@property (assign,nonatomic) long long selectedGoal;                      //@synthesize selectedGoal=_selectedGoal - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMostRecentGoal:(long long)arg1 ;
-(void)setHasMostRecentGoal:(BOOL)arg1 ;
-(BOOL)hasMostRecentGoal;
-(void)setNumTimesGoalAchieved:(long long)arg1 ;
-(void)setHasNumTimesGoalAchieved:(BOOL)arg1 ;
-(BOOL)hasNumTimesGoalAchieved;
-(void)setSelectedGoal:(long long)arg1 ;
-(void)setHasSelectedGoal:(BOOL)arg1 ;
-(BOOL)hasSelectedGoal;
-(long long)mostRecentGoal;
-(long long)numTimesGoalAchieved;
-(long long)selectedGoal;
@end

