/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ASCodableCloudKitSample;

@interface ASCodableCloudKitWorkout : PBCodable <NSCopying> {

	long long _amm;
	double _duration;
	double _goalInCanonicalUnit;
	long long _goalType;
	double _totalBasalEnergyBurnedInCanonicalUnit;
	double _totalDistanceInCanonicalUnit;
	double _totalEnergyBurnedInCanonicalUnit;
	long long _type;
	NSString* _bundleID;
	NSString* _deviceManufacturer;
	NSString* _deviceModel;
	ASCodableCloudKitSample* _sample;
	BOOL _isIndoorWorkout;
	BOOL _isWatchWorkout;
	SCD_Struct_AS9 _has;

}

@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) ASCodableCloudKitSample * sample;                           //@synthesize sample=_sample - In the implementation block
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
@property (assign,nonatomic) BOOL hasGoalInCanonicalUnit; 
@property (assign,nonatomic) double goalInCanonicalUnit;                                 //@synthesize goalInCanonicalUnit=_goalInCanonicalUnit - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                                        //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL hasIsWatchWorkout; 
@property (assign,nonatomic) BOOL isWatchWorkout;                                        //@synthesize isWatchWorkout=_isWatchWorkout - In the implementation block
@property (assign,nonatomic) BOOL hasIsIndoorWorkout; 
@property (assign,nonatomic) BOOL isIndoorWorkout;                                       //@synthesize isIndoorWorkout=_isIndoorWorkout - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceManufacturer; 
@property (nonatomic,retain) NSString * deviceManufacturer;                              //@synthesize deviceManufacturer=_deviceManufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceModel; 
@property (nonatomic,retain) NSString * deviceModel;                                     //@synthesize deviceModel=_deviceModel - In the implementation block
@property (assign,nonatomic) BOOL hasAmm; 
@property (assign,nonatomic) long long amm;                                              //@synthesize amm=_amm - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(double)duration;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasBundleID;
-(void)setDuration:(double)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(void)setSample:(ASCodableCloudKitSample *)arg1 ;
-(ASCodableCloudKitSample *)sample;
-(BOOL)hasDeviceModel;
-(void)setGoalType:(long long)arg1 ;
-(long long)goalType;
-(void)setAmm:(long long)arg1 ;
-(long long)amm;
-(BOOL)isIndoorWorkout;
-(BOOL)isWatchWorkout;
-(void)setIsWatchWorkout:(BOOL)arg1 ;
-(void)setIsIndoorWorkout:(BOOL)arg1 ;
-(NSString *)deviceManufacturer;
-(void)setDeviceManufacturer:(NSString *)arg1 ;
-(void)setTotalEnergyBurnedInCanonicalUnit:(double)arg1 ;
-(void)setTotalBasalEnergyBurnedInCanonicalUnit:(double)arg1 ;
-(void)setTotalDistanceInCanonicalUnit:(double)arg1 ;
-(void)setGoalInCanonicalUnit:(double)arg1 ;
-(BOOL)hasTotalEnergyBurnedInCanonicalUnit;
-(BOOL)isAmm;
-(double)totalEnergyBurnedInCanonicalUnit;
-(BOOL)hasTotalBasalEnergyBurnedInCanonicalUnit;
-(double)totalBasalEnergyBurnedInCanonicalUnit;
-(BOOL)hasTotalDistanceInCanonicalUnit;
-(double)totalDistanceInCanonicalUnit;
-(BOOL)hasGoalInCanonicalUnit;
-(double)goalInCanonicalUnit;
-(BOOL)hasSample;
-(void)setHasAmm:(BOOL)arg1 ;
-(BOOL)hasAmm;
-(void)setHasTotalEnergyBurnedInCanonicalUnit:(BOOL)arg1 ;
-(void)setHasTotalBasalEnergyBurnedInCanonicalUnit:(BOOL)arg1 ;
-(void)setHasTotalDistanceInCanonicalUnit:(BOOL)arg1 ;
-(void)setHasGoalType:(BOOL)arg1 ;
-(BOOL)hasGoalType;
-(void)setHasGoalInCanonicalUnit:(BOOL)arg1 ;
-(void)setHasIsWatchWorkout:(BOOL)arg1 ;
-(BOOL)hasIsWatchWorkout;
-(void)setHasIsIndoorWorkout:(BOOL)arg1 ;
-(BOOL)hasIsIndoorWorkout;
-(BOOL)hasDeviceManufacturer;
@end

