/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@interface PowerStateRelay : NSObject {

	int powerStateToken;
	int screenStateToken;
	int thermalPressureToken;
	unsigned _batteryService;
	unsigned _batteryNotification;
	IONotificationPortRef _batteryPort;
	BOOL _pluggedIn;
	BOOL _screenNotDark;
	BOOL _batteryExternalPowerIsConnected;
	BOOL _batteryIsCharging;
	BOOL _batteryFullyCharged;
	BOOL _batteryAtWarnLevel;
	BOOL _batteryAtCriticalLevel;
	unsigned _batteryCurrentCapacity;
	unsigned _batteryMaximumCapacity;
	unsigned _batteryDesignCapacity;
	unsigned _batteryAbsoluteCapacity;
	unsigned _batteryVoltage;
	unsigned _batteryTimeRemaining;
	double _batteryPercentage;
	long long _thermalPressure;

}

@property (assign) BOOL pluggedIn;                                    //@synthesize pluggedIn=_pluggedIn - In the implementation block
@property (assign) BOOL screenNotDark;                                //@synthesize screenNotDark=_screenNotDark - In the implementation block
@property (assign) double batteryPercentage;                          //@synthesize batteryPercentage=_batteryPercentage - In the implementation block
@property (assign) unsigned batteryCurrentCapacity;                   //@synthesize batteryCurrentCapacity=_batteryCurrentCapacity - In the implementation block
@property (assign) unsigned batteryMaximumCapacity;                   //@synthesize batteryMaximumCapacity=_batteryMaximumCapacity - In the implementation block
@property (assign) unsigned batteryDesignCapacity;                    //@synthesize batteryDesignCapacity=_batteryDesignCapacity - In the implementation block
@property (assign) unsigned batteryAbsoluteCapacity;                  //@synthesize batteryAbsoluteCapacity=_batteryAbsoluteCapacity - In the implementation block
@property (assign) unsigned batteryVoltage;                           //@synthesize batteryVoltage=_batteryVoltage - In the implementation block
@property (assign) unsigned batteryTimeRemaining;                     //@synthesize batteryTimeRemaining=_batteryTimeRemaining - In the implementation block
@property (assign) BOOL batteryExternalPowerIsConnected;              //@synthesize batteryExternalPowerIsConnected=_batteryExternalPowerIsConnected - In the implementation block
@property (assign) BOOL batteryIsCharging;                            //@synthesize batteryIsCharging=_batteryIsCharging - In the implementation block
@property (assign) BOOL batteryFullyCharged;                          //@synthesize batteryFullyCharged=_batteryFullyCharged - In the implementation block
@property (assign) BOOL batteryAtWarnLevel;                           //@synthesize batteryAtWarnLevel=_batteryAtWarnLevel - In the implementation block
@property (assign) BOOL batteryAtCriticalLevel;                       //@synthesize batteryAtCriticalLevel=_batteryAtCriticalLevel - In the implementation block
@property (assign) long long thermalPressure;                         //@synthesize thermalPressure=_thermalPressure - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)defaultRelay;
-(id)init;
-(void)dealloc;
-(void)setBatteryPercentage:(double)arg1 ;
-(void)setBatteryCurrentCapacity:(unsigned)arg1 ;
-(void)setBatteryMaximumCapacity:(unsigned)arg1 ;
-(void)setBatteryDesignCapacity:(unsigned)arg1 ;
-(void)setBatteryAbsoluteCapacity:(unsigned)arg1 ;
-(void)setBatteryVoltage:(unsigned)arg1 ;
-(void)setBatteryTimeRemaining:(unsigned)arg1 ;
-(void)setBatteryExternalPowerIsConnected:(BOOL)arg1 ;
-(void)setBatteryIsCharging:(BOOL)arg1 ;
-(void)setBatteryFullyCharged:(BOOL)arg1 ;
-(void)setBatteryAtWarnLevel:(BOOL)arg1 ;
-(void)setBatteryAtCriticalLevel:(BOOL)arg1 ;
-(long long)thermalPressure;
-(void)setThermalPressure:(long long)arg1 ;
-(double)batteryPercentage;
-(unsigned)batteryCurrentCapacity;
-(unsigned)batteryMaximumCapacity;
-(unsigned)batteryDesignCapacity;
-(unsigned)batteryAbsoluteCapacity;
-(unsigned)batteryVoltage;
-(unsigned)batteryTimeRemaining;
-(BOOL)batteryExternalPowerIsConnected;
-(BOOL)batteryIsCharging;
-(BOOL)batteryFullyCharged;
-(BOOL)batteryAtWarnLevel;
-(BOOL)batteryAtCriticalLevel;
-(BOOL)pluggedIn;
-(BOOL)screenNotDark;
-(void)setPluggedIn:(BOOL)arg1 ;
-(void)setScreenNotDark:(BOOL)arg1 ;
-(void)enableIOKitBatteryLevelNotifications;
-(id)thermalPressureLevelToString:(long long)arg1 ;
-(void)disableIOKitBatteryLevelNotifications;
-(id)getBatteryProperties;
-(void)updateBatteryValuesFromPowerSourceDictionary:(id)arg1 ;
-(void)handleBatteryNotification;
@end

