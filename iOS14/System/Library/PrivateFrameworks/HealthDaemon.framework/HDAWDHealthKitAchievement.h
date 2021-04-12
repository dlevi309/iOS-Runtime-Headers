/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDAWDHealthKitAchievement : PBCodable <NSCopying> {

	long long _completedDate;
	long long _value;
	int _achievementType;
	NSString* _definitionIdentifier;
	int _workoutActivityType;
	SCD_Struct_HD10 _has;

}

@property (assign,nonatomic) BOOL hasAchievementType; 
@property (assign,nonatomic) int achievementType;                          //@synthesize achievementType=_achievementType - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedDate; 
@property (assign,nonatomic) long long completedDate;                      //@synthesize completedDate=_completedDate - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) long long value;                              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasDefinitionIdentifier; 
@property (nonatomic,retain) NSString * definitionIdentifier;              //@synthesize definitionIdentifier=_definitionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasWorkoutActivityType; 
@property (assign,nonatomic) int workoutActivityType;                      //@synthesize workoutActivityType=_workoutActivityType - In the implementation block
-(id)dictionaryRepresentation;
-(long long)completedDate;
-(void)setCompletedDate:(long long)arg1 ;
-(BOOL)hasValue;
-(void)mergeFrom:(id)arg1 ;
-(void)setWorkoutActivityType:(int)arg1 ;
-(void)setValue:(long long)arg1 ;
-(id)description;
-(void)setHasValue:(BOOL)arg1 ;
-(int)workoutActivityType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDefinitionIdentifier:(NSString *)arg1 ;
-(NSString *)definitionIdentifier;
-(void)setAchievementType:(int)arg1 ;
-(void)setHasAchievementType:(BOOL)arg1 ;
-(BOOL)hasAchievementType;
-(void)setHasCompletedDate:(BOOL)arg1 ;
-(BOOL)hasCompletedDate;
-(BOOL)hasDefinitionIdentifier;
-(void)setHasWorkoutActivityType:(BOOL)arg1 ;
-(BOOL)hasWorkoutActivityType;
-(int)achievementType;
-(id)achievementTypeAsString:(int)arg1 ;
-(int)StringAsAchievementType:(id)arg1 ;
-(id)workoutActivityTypeAsString:(int)arg1 ;
-(int)StringAsWorkoutActivityType:(id)arg1 ;
@end

