/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDFitnessMachineDataCharacteristicBase.h>
#import <libobjc.A.dylib/HDDatumRendering.h>

@class HDFitnessMachineCharacteristicUInt16Field, HDFitnessMachineCharacteristicUInt8Field, NSDate;

@interface HDStairClimberData : HDFitnessMachineDataCharacteristicBase <HDDatumRendering> {

	HDFitnessMachineCharacteristicUInt16Field* _floorsField;
	HDFitnessMachineCharacteristicUInt16Field* _stepsPerMinuteField;
	HDFitnessMachineCharacteristicUInt16Field* _averageStepRateField;
	HDFitnessMachineCharacteristicUInt16Field* _positiveElevationGainField;
	HDFitnessMachineCharacteristicUInt16Field* _stepCountField;
	HDFitnessMachineCharacteristicUInt16Field* _totalEnergyField;
	HDFitnessMachineCharacteristicUInt16Field* _energyPerHourField;
	HDFitnessMachineCharacteristicUInt8Field* _energyPerMinuteField;
	HDFitnessMachineCharacteristicUInt8Field* _heartRateField;
	HDFitnessMachineCharacteristicUInt8Field* _metabolicEquivalentField;
	HDFitnessMachineCharacteristicUInt16Field* _elapsedTimeField;
	HDFitnessMachineCharacteristicUInt16Field* _remainingTimeField;

}

@property (nonatomic,readonly) NSDate * updateTime; 
@property (nonatomic,readonly) BOOL floorsIsSet; 
@property (nonatomic,readonly) unsigned short floors; 
@property (nonatomic,readonly) BOOL stepsPerMinuteIsSet; 
@property (nonatomic,readonly) unsigned short stepsPerMinute; 
@property (nonatomic,readonly) BOOL averageStepRateIsSet; 
@property (nonatomic,readonly) unsigned short averageStepRate; 
@property (nonatomic,readonly) BOOL positiveElevationGainIsSet; 
@property (nonatomic,readonly) unsigned short positiveElevationGain; 
@property (nonatomic,readonly) BOOL stepCountIsSet; 
@property (nonatomic,readonly) unsigned short stepCount; 
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
-(unsigned short)remainingTime;
-(unsigned short)floors;
-(unsigned short)elapsedTime;
-(id)description;
-(unsigned short)totalEnergy;
-(unsigned short)stepCount;
-(id)_init;
-(unsigned char)heartRate;
-(id)allFields;
-(BOOL)averageStepRateIsSet;
-(unsigned short)averageStepRate;
-(BOOL)positiveElevationGainIsSet;
-(unsigned short)positiveElevationGain;
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
-(BOOL)floorsIsSet;
-(BOOL)stepsPerMinuteIsSet;
-(unsigned short)stepsPerMinute;
-(BOOL)stepCountIsSet;
@end

