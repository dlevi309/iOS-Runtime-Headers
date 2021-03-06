/*
* Generated on Thursday, January 14, 2021 at 2:28:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDNWAccumulator;

@interface AWDNWDeviceReport : PBCodable <NSCopying> {

	unsigned _batteryAbsoluteCapacity;
	AWDNWAccumulator* _batteryAccumulator;
	unsigned _batteryCurrentCapacity;
	unsigned _batteryDesignCapacity;
	unsigned _batteryMaximumCapacity;
	unsigned _batteryPercentage;
	unsigned _batteryTimeRemaining;
	unsigned _batteryVoltage;
	int _cellularMode;
	int _motionState;
	int _thermalPressure;
	BOOL _batteryAtCriticalLevel;
	BOOL _batteryAtWarnLevel;
	BOOL _batteryExternalPowerIsConnected;
	BOOL _batteryFullyCharged;
	BOOL _batteryIsCharging;
	BOOL _devicePluggedIn;
	BOOL _deviceScreenOn;
	SCD_Struct_AW30 _has;

}

@property (assign,nonatomic) BOOL hasBatteryPercentage; 
@property (assign,nonatomic) unsigned batteryPercentage;                           //@synthesize batteryPercentage=_batteryPercentage - In the implementation block
@property (assign,nonatomic) BOOL hasBatteryCurrentCapacity; 
@property (assign,nonatomic) unsigned batteryCurrentCapacity;                      //@synthesize batteryCurrentCapacity=_batteryCurrentCapacity - In the implementation block
@property (assign,nonatomic) BOOL hasBatteryMaximumCapacity; 
@property (assign,nonatomic) unsigned batteryMaximumCapacity;                      //@synthesize batteryMaximumCapacity=_batteryMaximumCapacity - In the implementation block
@property (assign,nonatomic) BOOL hasBatteryDesignCapacity; 
@property (assign,nonatomic) unsigned batteryDesignCapacity;                       //@synthesize batteryDesignCapacity=_batteryDesignCapacity - In the implementation block
@property (assign,nonatomic) BOOL hasBatteryAbsoluteCapacity; 
@property (assign,nonatomic) unsigned batteryAbsoluteCapacity;                     //@synthesize batteryAbsoluteCapacity=_batteryAbsoluteCapacity - In the implementation block
@property (assign,nonatomic) BOOL hasBatteryVoltage; 
@property (assign,nonatomic) unsigned batteryVoltage;                              //@synthesize batteryVoltage=_batteryVoltage - In the implementation block
@property (assign,nonatomic) BOOL hasBatteryTimeRemaining; 
@property (assign,nonatomic) unsigned batteryTimeRemaining;                        //@synthesize batteryTimeRemaining=_batteryTimeRemaining - In the implementation block
@property (assign,nonatomic) BOOL hasBatteryExternalPowerIsConnected; 
@property (assign,nonatomic) BOOL batteryExternalPowerIsConnected;                 //@synthesize batteryExternalPowerIsConnected=_batteryExternalPowerIsConnected - In the implementation block
@property (assign,nonatomic) BOOL hasBatteryIsCharging; 
@property (assign,nonatomic) BOOL batteryIsCharging;                               //@synthesize batteryIsCharging=_batteryIsCharging - In the implementation block
@property (assign,nonatomic) BOOL hasBatteryFullyCharged; 
@property (assign,nonatomic) BOOL batteryFullyCharged;                             //@synthesize batteryFullyCharged=_batteryFullyCharged - In the implementation block
@property (assign,nonatomic) BOOL hasBatteryAtWarnLevel; 
@property (assign,nonatomic) BOOL batteryAtWarnLevel;                              //@synthesize batteryAtWarnLevel=_batteryAtWarnLevel - In the implementation block
@property (assign,nonatomic) BOOL hasBatteryAtCriticalLevel; 
@property (assign,nonatomic) BOOL batteryAtCriticalLevel;                          //@synthesize batteryAtCriticalLevel=_batteryAtCriticalLevel - In the implementation block
@property (assign,nonatomic) BOOL hasDevicePluggedIn; 
@property (assign,nonatomic) BOOL devicePluggedIn;                                 //@synthesize devicePluggedIn=_devicePluggedIn - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceScreenOn; 
@property (assign,nonatomic) BOOL deviceScreenOn;                                  //@synthesize deviceScreenOn=_deviceScreenOn - In the implementation block
@property (assign,nonatomic) BOOL hasMotionState; 
@property (assign,nonatomic) int motionState;                                      //@synthesize motionState=_motionState - In the implementation block
@property (assign,nonatomic) BOOL hasThermalPressure; 
@property (assign,nonatomic) int thermalPressure;                                  //@synthesize thermalPressure=_thermalPressure - In the implementation block
@property (assign,nonatomic) BOOL hasCellularMode; 
@property (assign,nonatomic) int cellularMode;                                     //@synthesize cellularMode=_cellularMode - In the implementation block
@property (nonatomic,readonly) BOOL hasBatteryAccumulator; 
@property (nonatomic,retain) AWDNWAccumulator * batteryAccumulator;                //@synthesize batteryAccumulator=_batteryAccumulator - In the implementation block
-(id)dictionaryRepresentation;
-(void)setBatteryVoltage:(unsigned)arg1 ;
-(unsigned)batteryAbsoluteCapacity;
-(void)setBatteryAtWarnLevel:(BOOL)arg1 ;
-(void)setBatteryDesignCapacity:(unsigned)arg1 ;
-(unsigned)batteryMaximumCapacity;
-(int)cellularMode;
-(void)mergeFrom:(id)arg1 ;
-(void)setCellularMode:(int)arg1 ;
-(unsigned)batteryDesignCapacity;
-(unsigned)batteryCurrentCapacity;
-(BOOL)batteryAtCriticalLevel;
-(BOOL)deviceScreenOn;
-(void)setBatteryAccumulator:(AWDNWAccumulator *)arg1 ;
-(void)setBatteryAbsoluteCapacity:(unsigned)arg1 ;
-(void)setHasBatteryPercentage:(BOOL)arg1 ;
-(BOOL)hasBatteryPercentage;
-(void)setHasBatteryCurrentCapacity:(BOOL)arg1 ;
-(BOOL)hasBatteryCurrentCapacity;
-(void)setHasBatteryMaximumCapacity:(BOOL)arg1 ;
-(BOOL)hasBatteryMaximumCapacity;
-(void)setHasBatteryDesignCapacity:(BOOL)arg1 ;
-(BOOL)hasBatteryDesignCapacity;
-(BOOL)hasBatteryVoltage;
-(void)setHasBatteryAbsoluteCapacity:(BOOL)arg1 ;
-(BOOL)hasBatteryAbsoluteCapacity;
-(void)setHasBatteryVoltage:(BOOL)arg1 ;
-(void)setHasBatteryTimeRemaining:(BOOL)arg1 ;
-(BOOL)hasBatteryTimeRemaining;
-(void)setHasBatteryExternalPowerIsConnected:(BOOL)arg1 ;
-(BOOL)hasBatteryExternalPowerIsConnected;
-(void)setHasBatteryIsCharging:(BOOL)arg1 ;
-(BOOL)hasBatteryIsCharging;
-(void)setHasBatteryFullyCharged:(BOOL)arg1 ;
-(BOOL)hasBatteryFullyCharged;
-(void)setHasBatteryAtWarnLevel:(BOOL)arg1 ;
-(BOOL)hasBatteryAtWarnLevel;
-(void)setHasBatteryAtCriticalLevel:(BOOL)arg1 ;
-(BOOL)hasBatteryAtCriticalLevel;
-(void)setHasDevicePluggedIn:(BOOL)arg1 ;
-(BOOL)hasDevicePluggedIn;
-(void)setHasDeviceScreenOn:(BOOL)arg1 ;
-(BOOL)hasDeviceScreenOn;
-(void)setHasMotionState:(BOOL)arg1 ;
-(BOOL)hasMotionState;
-(id)motionStateAsString:(int)arg1 ;
-(int)StringAsMotionState:(id)arg1 ;
-(void)setHasThermalPressure:(BOOL)arg1 ;
-(BOOL)hasThermalPressure;
-(id)thermalPressureAsString:(int)arg1 ;
-(int)StringAsThermalPressure:(id)arg1 ;
-(void)setDeviceScreenOn:(BOOL)arg1 ;
-(int)motionState;
-(BOOL)hasBatteryAccumulator;
-(AWDNWAccumulator *)batteryAccumulator;
-(id)description;
-(unsigned)batteryVoltage;
-(BOOL)batteryIsCharging;
-(void)setBatteryIsCharging:(BOOL)arg1 ;
-(void)setHasCellularMode:(BOOL)arg1 ;
-(BOOL)hasCellularMode;
-(id)cellularModeAsString:(int)arg1 ;
-(int)StringAsCellularMode:(id)arg1 ;
-(void)setBatteryTimeRemaining:(unsigned)arg1 ;
-(void)setBatteryCurrentCapacity:(unsigned)arg1 ;
-(void)setBatteryPercentage:(unsigned)arg1 ;
-(unsigned long long)hash;
-(void)setBatteryExternalPowerIsConnected:(BOOL)arg1 ;
-(unsigned)batteryPercentage;
-(BOOL)batteryAtWarnLevel;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDevicePluggedIn:(BOOL)arg1 ;
-(void)setBatteryFullyCharged:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMotionState:(int)arg1 ;
-(void)setBatteryAtCriticalLevel:(BOOL)arg1 ;
-(void)setThermalPressure:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)batteryFullyCharged;
-(BOOL)batteryExternalPowerIsConnected;
-(BOOL)devicePluggedIn;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setBatteryMaximumCapacity:(unsigned)arg1 ;
-(unsigned)batteryTimeRemaining;
-(int)thermalPressure;
@end

