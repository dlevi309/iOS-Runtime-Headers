/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol OS_dispatch_queue;
#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class NSObject;

@interface PowerStateRelay : NSObject {

	int powerStateToken;
	int screenStateToken;
	int thermalPressureToken;
	int keybagToken;
	NSObject*<OS_dispatch_queue> _powerStateQueue;
	unsigned _batteryService;
	unsigned _batteryNotification;
	IONotificationPortRef _batteryPort;
	BOOL _pluggedIn;
	BOOL _screenNotDark;
	BOOL _screenUnlocked;
	BOOL _batteryExternalPowerIsConnected;
	BOOL _batteryIsCharging;
	BOOL _batteryFullyCharged;
	BOOL _batteryAtWarnLevel;
	BOOL _batteryAtCriticalLevel;
	BOOL _lowPowerModeEnabled;
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
@property (assign) BOOL screenUnlocked;                               //@synthesize screenUnlocked=_screenUnlocked - In the implementation block
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
@property (assign,nonatomic) BOOL lowPowerModeEnabled;                //@synthesize lowPowerModeEnabled=_lowPowerModeEnabled - In the implementation block
+(id)defaultRelay;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setLowPowerModeEnabled:(BOOL)arg1 ;
-(void)updateBatteryValuesFromPowerSourceDictionary:(id)arg1 ;
-(id)init;
-(void)setBatteryVoltage:(unsigned)arg1 ;
-(unsigned)batteryAbsoluteCapacity;
-(void)setBatteryAtWarnLevel:(BOOL)arg1 ;
-(void)setBatteryDesignCapacity:(unsigned)arg1 ;
-(unsigned)batteryMaximumCapacity;
-(void)disableIOKitBatteryLevelNotifications;
-(unsigned)batteryDesignCapacity;
-(unsigned)batteryCurrentCapacity;
-(BOOL)batteryAtCriticalLevel;
-(id)thermalPressureLevelToString:(long long)arg1 ;
-(void)setBatteryAbsoluteCapacity:(unsigned)arg1 ;
-(BOOL)pluggedIn;
-(void)enableIOKitBatteryLevelNotifications;
-(unsigned)batteryVoltage;
-(BOOL)batteryIsCharging;
-(void)setBatteryIsCharging:(BOOL)arg1 ;
-(void)handlePowerStateChange:(id)arg1 ;
-(void)setBatteryTimeRemaining:(unsigned)arg1 ;
-(id)getBatteryProperties;
-(void)setBatteryCurrentCapacity:(unsigned)arg1 ;
-(BOOL)lowPowerModeEnabled;
-(BOOL)screenUnlocked;
-(void)setBatteryPercentage:(double)arg1 ;
-(void)setBatteryExternalPowerIsConnected:(BOOL)arg1 ;
-(double)batteryPercentage;
-(BOOL)batteryAtWarnLevel;
-(BOOL)screenNotDark;
-(void)setPluggedIn:(BOOL)arg1 ;
-(void)setBatteryFullyCharged:(BOOL)arg1 ;
-(void)handleBatteryNotification;
-(void)getCurrentKeybagLockState;
-(void)setBatteryAtCriticalLevel:(BOOL)arg1 ;
-(void)setScreenUnlocked:(BOOL)arg1 ;
-(void)setThermalPressure:(long long)arg1 ;
-(BOOL)batteryFullyCharged;
-(BOOL)batteryExternalPowerIsConnected;
-(void)setScreenNotDark:(BOOL)arg1 ;
-(void)dealloc;
-(void)setBatteryMaximumCapacity:(unsigned)arg1 ;
-(unsigned)batteryTimeRemaining;
-(long long)thermalPressure;
@end

