/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDFitnessMachineDataCharacteristicBase.h>
#import <libobjc.A.dylib/HDDatumRendering.h>

@class HDFitnessMachineCharacteristicDoubleField, HDFitnessMachineCharacteristicUInt24Field, HDFitnessMachineCharacteristicUInt16Field, HDFitnessMachineCharacteristicUInt8Field, NSDate;

@interface HDTreadmillData : HDFitnessMachineDataCharacteristicBase <HDDatumRendering> {

	HDFitnessMachineCharacteristicDoubleField* _instantaneousSpeedField;
	HDFitnessMachineCharacteristicDoubleField* _averageSpeedField;
	HDFitnessMachineCharacteristicUInt24Field* _totalDistanceField;
	HDFitnessMachineCharacteristicDoubleField* _inclinationField;
	HDFitnessMachineCharacteristicDoubleField* _rampSettingField;
	HDFitnessMachineCharacteristicDoubleField* _positiveElevationGainField;
	HDFitnessMachineCharacteristicDoubleField* _negativeElevationGainField;
	HDFitnessMachineCharacteristicDoubleField* _instantaneousPaceField;
	HDFitnessMachineCharacteristicDoubleField* _averagePaceField;
	HDFitnessMachineCharacteristicUInt16Field* _totalEnergyField;
	HDFitnessMachineCharacteristicUInt16Field* _energyPerHourField;
	HDFitnessMachineCharacteristicUInt8Field* _energyPerMinuteField;
	HDFitnessMachineCharacteristicUInt8Field* _heartRateField;
	HDFitnessMachineCharacteristicUInt8Field* _metabolicEquivalentField;
	HDFitnessMachineCharacteristicUInt16Field* _elapsedTimeField;
	HDFitnessMachineCharacteristicUInt16Field* _remainingTimeField;
	HDFitnessMachineCharacteristicUInt16Field* _forceOnBeltField;
	HDFitnessMachineCharacteristicUInt16Field* _powerOutputField;

}

@property (nonatomic,readonly) NSDate * updateTime; 
@property (nonatomic,readonly) BOOL instantaneousSpeedIsSet; 
@property (nonatomic,readonly) double instantaneousSpeed; 
@property (nonatomic,readonly) BOOL averageSpeedIsSet; 
@property (nonatomic,readonly) double averageSpeed; 
@property (nonatomic,readonly) BOOL totalDistanceIsSet; 
@property (nonatomic,readonly) unsigned totalDistance; 
@property (nonatomic,readonly) BOOL inclinationIsSet; 
@property (nonatomic,readonly) double inclination; 
@property (nonatomic,readonly) BOOL rampSettingIsSet; 
@property (nonatomic,readonly) double rampSetting; 
@property (nonatomic,readonly) BOOL positiveElevationGainIsSet; 
@property (nonatomic,readonly) double positiveElevationGain; 
@property (nonatomic,readonly) BOOL negativeElevationGainIsSet; 
@property (nonatomic,readonly) double negativeElevationGain; 
@property (nonatomic,readonly) BOOL instantaneousPaceIsSet; 
@property (nonatomic,readonly) double instantaneousPace; 
@property (nonatomic,readonly) BOOL averagePaceIsSet; 
@property (nonatomic,readonly) double averagePace; 
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
@property (nonatomic,readonly) BOOL forceOnBeltIsSet; 
@property (nonatomic,readonly) unsigned short forceOnBelt; 
@property (nonatomic,readonly) BOOL powerOutputIsSet; 
@property (nonatomic,readonly) unsigned short powerOutput; 
+(id)uuid;
+(unsigned char)flagFieldLength;
+(id)unitTest_fakeTreadmillDataForDistance:(unsigned)arg1 energy:(unsigned short)arg2 elapsedTime:(unsigned short)arg3 ;
-(id)description;
-(id)_init;
-(unsigned)totalDistance;
-(unsigned short)elapsedTime;
-(unsigned short)remainingTime;
-(double)averageSpeed;
-(unsigned char)heartRate;
-(unsigned short)totalEnergy;
-(double)instantaneousSpeed;
-(double)inclination;
-(id)allFields;
-(BOOL)instantaneousSpeedIsSet;
-(BOOL)averageSpeedIsSet;
-(BOOL)totalDistanceIsSet;
-(BOOL)positiveElevationGainIsSet;
-(double)positiveElevationGain;
-(BOOL)negativeElevationGainIsSet;
-(double)negativeElevationGain;
-(BOOL)inclinationIsSet;
-(BOOL)rampSettingIsSet;
-(double)rampSetting;
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
-(BOOL)instantaneousPaceIsSet;
-(double)instantaneousPace;
-(BOOL)averagePaceIsSet;
-(double)averagePace;
-(BOOL)forceOnBeltIsSet;
-(unsigned short)forceOnBelt;
-(BOOL)powerOutputIsSet;
-(unsigned short)powerOutput;
@end
