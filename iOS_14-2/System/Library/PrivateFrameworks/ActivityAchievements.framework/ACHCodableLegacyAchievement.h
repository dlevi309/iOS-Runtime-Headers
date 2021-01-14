/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
*/

#import <ActivityAchievements/ActivityAchievements-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface ACHCodableLegacyAchievement : PBCodable <NSCopying> {

	long long _achievementType;
	double _completedDate;
	double _doubleValue;
	long long _intValue;
	long long _workoutActivityType;
	NSString* _definitionIdentifier;
	NSData* _uuid;
	BOOL _alerted;
	SCD_Struct_AC6 _has;

}

@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasAchievementType; 
@property (assign,nonatomic) long long achievementType;                    //@synthesize achievementType=_achievementType - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedDate; 
@property (assign,nonatomic) double completedDate;                         //@synthesize completedDate=_completedDate - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                           //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasIntValue; 
@property (assign,nonatomic) long long intValue;                           //@synthesize intValue=_intValue - In the implementation block
@property (assign,nonatomic) BOOL hasAlerted; 
@property (assign,nonatomic) BOOL alerted;                                 //@synthesize alerted=_alerted - In the implementation block
@property (nonatomic,readonly) BOOL hasDefinitionIdentifier; 
@property (nonatomic,retain) NSString * definitionIdentifier;              //@synthesize definitionIdentifier=_definitionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasWorkoutActivityType; 
@property (assign,nonatomic) long long workoutActivityType;                //@synthesize workoutActivityType=_workoutActivityType - In the implementation block
-(id)dictionaryRepresentation;
-(double)doubleValue;
-(NSData *)uuid;
-(double)completedDate;
-(void)setCompletedDate:(double)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(BOOL)hasUuid;
-(void)mergeFrom:(id)arg1 ;
-(void)setIntValue:(long long)arg1 ;
-(void)setHasIntValue:(BOOL)arg1 ;
-(BOOL)hasIntValue;
-(BOOL)alerted;
-(void)setWorkoutActivityType:(long long)arg1 ;
-(BOOL)hasDoubleValue;
-(id)description;
-(void)setAlerted:(BOOL)arg1 ;
-(long long)workoutActivityType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(long long)intValue;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUuid:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDefinitionIdentifier:(NSString *)arg1 ;
-(NSString *)definitionIdentifier;
-(void)setAchievementType:(long long)arg1 ;
-(void)setHasAchievementType:(BOOL)arg1 ;
-(BOOL)hasAchievementType;
-(void)setHasCompletedDate:(BOOL)arg1 ;
-(BOOL)hasCompletedDate;
-(void)setHasAlerted:(BOOL)arg1 ;
-(BOOL)hasAlerted;
-(BOOL)hasDefinitionIdentifier;
-(void)setHasWorkoutActivityType:(BOOL)arg1 ;
-(BOOL)hasWorkoutActivityType;
-(long long)achievementType;
@end

