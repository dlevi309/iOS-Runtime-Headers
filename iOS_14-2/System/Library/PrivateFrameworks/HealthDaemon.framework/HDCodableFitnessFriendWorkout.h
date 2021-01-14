/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, HDCodableSample;

@interface HDCodableFitnessFriendWorkout : PBCodable <HDDecoding, NSCopying> {

	long long _amm;
	double _duration;
	double _goal;
	long long _goalType;
	long long _isIndoorWorkout;
	long long _isWatchWorkout;
	double _totalBasalEnergyBurnedInCanonicalUnit;
	double _totalDistanceInCanonicalUnit;
	double _totalEnergyBurnedInCanonicalUnit;
	long long _type;
	NSString* _bundleID;
	NSString* _deviceManufacturer;
	NSString* _deviceModel;
	NSData* _friendUUID;
	HDCodableSample* _sample;
	NSString* _scwi;
	SCD_Struct_HD38 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;                                   //@synthesize sample=_sample - In the implementation block
@property (nonatomic,readonly) BOOL hasFriendUUID; 
@property (nonatomic,retain) NSData * friendUUID;                                        //@synthesize friendUUID=_friendUUID - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) long long type;                                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasTotalEnergyBurnedInCanonicalUnit; 
@property (assign,nonatomic) double totalEnergyBurnedInCanonicalUnit;                    //@synthesize totalEnergyBurnedInCanonicalUnit=_totalEnergyBurnedInCanonicalUnit - In the implementation block
@property (assign,nonatomic) BOOL hasTotalBasalEnergyBurnedInCanonicalUnit; 
@property (assign,nonatomic) double totalBasalEnergyBurnedInCanonicalUnit;               //@synthesize totalBasalEnergyBurnedInCanonicalUnit=_totalBasalEnergyBurnedInCanonicalUnit - In the implementation block
@property (assign,nonatomic) BOOL hasTotalDistanceInCanonicalUnit; 
@property (assign,nonatomic) double totalDistanceInCanonicalUnit;                        //@synthesize totalDistanceInCanonicalUnit=_totalDistanceInCanonicalUnit - In the implementation block
@property (assign,nonatomic) BOOL hasGoalType; 
@property (assign,nonatomic) long long goalType;                                         //@synthesize goalType=_goalType - In the implementation block
@property (assign,nonatomic) BOOL hasGoal; 
@property (assign,nonatomic) double goal;                                                //@synthesize goal=_goal - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                                        //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL hasIsWatchWorkout; 
@property (assign,nonatomic) long long isWatchWorkout;                                   //@synthesize isWatchWorkout=_isWatchWorkout - In the implementation block
@property (assign,nonatomic) BOOL hasIsIndoorWorkout; 
@property (assign,nonatomic) long long isIndoorWorkout;                                  //@synthesize isIndoorWorkout=_isIndoorWorkout - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceManufacturer; 
@property (nonatomic,retain) NSString * deviceManufacturer;                              //@synthesize deviceManufacturer=_deviceManufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                                     //@synthesize deviceModel=_deviceModel - In the implementation block
@property (assign,nonatomic) BOOL hasAmm; 
@property (assign,nonatomic) long long amm;                                              //@synthesize amm=_amm - In the implementation block
@property (nonatomic,readonly) BOOL hasScwi; 
@property (nonatomic,retain) NSString * scwi;                                            //@synthesize scwi=_scwi - In the implementation block
-(long long)amm;
-(id)dictionaryRepresentation;
-(void)setDeviceModel:(NSString *)arg1 ;
-(double)goal;
-(NSString *)scwi;
-(NSString *)deviceModel;
-(BOOL)hasBundleID;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(HDCodableSample *)sample;
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)hasDeviceModel;
-(void)setScwi:(NSString *)arg1 ;
-(void)setAmm:(long long)arg1 ;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSData *)friendUUID;
-(void)setFriendUUID:(NSData *)arg1 ;
-(BOOL)hasAmm;
-(long long)isIndoorWorkout;
-(long long)isWatchWorkout;
-(void)setIsWatchWorkout:(long long)arg1 ;
-(void)setIsIndoorWorkout:(long long)arg1 ;
-(NSString *)deviceManufacturer;
-(void)setDeviceManufacturer:(NSString *)arg1 ;
-(void)setGoal:(double)arg1 ;
-(long long)goalType;
-(NSString *)description;
-(NSString *)bundleID;
-(BOOL)hasGoal;
-(BOOL)hasScwi;
-(long long)type;
-(unsigned long long)hash;
-(void)setSample:(HDCodableSample *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setGoalType:(long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)hasSample;
-(void)setTotalEnergyBurnedInCanonicalUnit:(double)arg1 ;
-(void)setTotalBasalEnergyBurnedInCanonicalUnit:(double)arg1 ;
-(void)setTotalDistanceInCanonicalUnit:(double)arg1 ;
-(BOOL)hasFriendUUID;
-(BOOL)hasTotalEnergyBurnedInCanonicalUnit;
-(double)totalEnergyBurnedInCanonicalUnit;
-(BOOL)hasTotalBasalEnergyBurnedInCanonicalUnit;
-(double)totalBasalEnergyBurnedInCanonicalUnit;
-(BOOL)hasTotalDistanceInCanonicalUnit;
-(double)totalDistanceInCanonicalUnit;
-(BOOL)hasDeviceManufacturer;
-(void)setHasTotalEnergyBurnedInCanonicalUnit:(BOOL)arg1 ;
-(void)setHasTotalDistanceInCanonicalUnit:(BOOL)arg1 ;
-(void)setHasGoalType:(BOOL)arg1 ;
-(BOOL)hasGoalType;
-(void)setHasGoal:(BOOL)arg1 ;
-(void)setHasTotalBasalEnergyBurnedInCanonicalUnit:(BOOL)arg1 ;
-(void)setHasIsWatchWorkout:(BOOL)arg1 ;
-(BOOL)hasIsWatchWorkout;
-(void)setHasIsIndoorWorkout:(BOOL)arg1 ;
-(BOOL)hasIsIndoorWorkout;
-(void)setHasAmm:(BOOL)arg1 ;
@end

