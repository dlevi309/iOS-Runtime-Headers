/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDFitnessMachineDataCharacteristicBase.h>
#import <libobjc.A.dylib/HDDatumRendering.h>

@class HDFitnessMachineCharacteristicDoubleField, HDFitnessMachineCharacteristicUInt24Field, HDFitnessMachineCharacteristicInt16Field, HDFitnessMachineCharacteristicUInt16Field, HDFitnessMachineCharacteristicUInt8Field, NSDate;

@interface HDIndoorBikeData : HDFitnessMachineDataCharacteristicBase <HDDatumRendering> {

	HDFitnessMachineCharacteristicDoubleField* _instantaneousSpeedField;
	HDFitnessMachineCharacteristicDoubleField* _averageSpeedField;
	HDFitnessMachineCharacteristicDoubleField* _instantaneousCadenceField;
	HDFitnessMachineCharacteristicDoubleField* _averageCadenceField;
	HDFitnessMachineCharacteristicUInt24Field* _totalDistanceField;
	HDFitnessMachineCharacteristicInt16Field* _resistanceLevelField;
	HDFitnessMachineCharacteristicInt16Field* _instantaneousPowerField;
	HDFitnessMachineCharacteristicInt16Field* _averagePowerField;
	HDFitnessMachineCharacteristicUInt16Field* _totalEnergyField;
	HDFitnessMachineCharacteristicUInt16Field* _energyPerHourField;
	HDFitnessMachineCharacteristicUInt8Field* _energyPerMinuteField;
	HDFitnessMachineCharacteristicUInt8Field* _heartRateField;
	HDFitnessMachineCharacteristicUInt8Field* _metabolicEquivalentField;
	HDFitnessMachineCharacteristicUInt16Field* _elapsedTimeField;
	HDFitnessMachineCharacteristicUInt16Field* _remainingTimeField;

}

@property (nonatomic,readonly) NSDate * updateTime; 
@property (nonatomic,readonly) BOOL instantaneousSpeedIsSet; 
@property (nonatomic,readonly) double instantaneousSpeed; 
@property (nonatomic,readonly) BOOL averageSpeedIsSet; 
@property (nonatomic,readonly) double averageSpeed; 
@property (nonatomic,readonly) BOOL instantaneousCadenceIsSet; 
@property (nonatomic,readonly) double instantaneousCadence; 
@property (nonatomic,readonly) BOOL averageCadenceIsSet; 
@property (nonatomic,readonly) double averageCadence; 
@property (nonatomic,readonly) BOOL totalDistanceIsSet; 
@property (nonatomic,readonly) unsigned totalDistance; 
@property (nonatomic,readonly) BOOL resistanceLevelIsSet; 
@property (nonatomic,readonly) short resistanceLevel; 
@property (nonatomic,readonly) BOOL instantaneousPowerIsSet; 
@property (nonatomic,readonly) short instantaneousPower; 
@property (nonatomic,readonly) BOOL averagePowerIsSet; 
@property (nonatomic,readonly) short averagePower; 
@property (nonatomic,readonly) BOOL totalEnergyIsSet; 
@property (nonatomic,readonly) unsigned short totalEnergy; 
@property (nonatomic,readonly) BOOL energyPerHourIsSet; 
@property (nonatomic,readonly) unsigned short energyPerHour; 
@property (nonatomic,readonly) BOOL energyPerMinuteIsSet; 
@property (nonatomic,readonly) unsigned char energyPerMinute; 
@property (nonatomic,readonly) BOOL heartRateIsSet; 
@property (nonatomic,readonly) unsigned char heartRate; 
@property (nonatomic,readonly) BOOL metabolicEquivalentIsSet; 
@property (nonatomic,readonly) unsigned char metabolicEquivalent; 
@property (nonatomic,readonly) BOOL elapsedTimeIsSet; 
@property (nonatomic,readonly) unsigned short elapsedTime; 
@property (nonatomic,readonly) BOOL remainingTimeIsSet; 
@property (nonatomic,readonly) unsigned short remainingTime; 
+(id)uuid;
+(unsigned char)flagFieldLength;
-(id)description;
-(id)_init;
-(unsigned)totalDistance;
-(unsigned short)elapsedTime;
-(short)averagePower;
-(unsigned short)remainingTime;
-(double)averageSpeed;
-(unsigned char)heartRate;
-(unsigned short)totalEnergy;
-(double)instantaneousSpeed;
-(double)instantaneousCadence;
-(short)instantaneousPower;
-(short)resistanceLevel;
-(id)allFields;
-(BOOL)instantaneousSpeedIsSet;
-(BOOL)averageSpeedIsSet;
-(BOOL)totalDistanceIsSet;
-(BOOL)resistanceLevelIsSet;
-(BOOL)instantaneousPowerIsSet;
-(BOOL)averagePowerIsSet;
-(BOOL)totalEnergyIsSet;
-(BOOL)energyPerHourIsSet;
-(unsigned short)energyPerHour;
-(BOOL)energyPerMinuteIsSet;
-(unsigned char)energyPerMinute;
-(BOOL)heartRateIsSet;
-(BOOL)metabolicEquivalentIsSet;
-(unsigned char)metabolicEquivalent;
-(BOOL)elapsedTimeIsSet;
-(BOOL)remainingTimeIsSet;
-(id)generateDatums:(id)arg1 ;
-(BOOL)instantaneousCadenceIsSet;
-(BOOL)averageCadenceIsSet;
-(double)averageCadence;
@end

