/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKThermalPressureMonitor : _DKMonitor {

	BOOL _initialized;
	BOOL _peakPowerPressureLevel;
	int _thermalPressureToken;
	int _lastThermalPressureLevel;
	int _peakPowerPressureToken;

}

@property (assign,nonatomic) BOOL initialized;                          //@synthesize initialized=_initialized - In the implementation block
@property (assign,nonatomic) int thermalPressureToken;                  //@synthesize thermalPressureToken=_thermalPressureToken - In the implementation block
@property (assign,nonatomic) int lastThermalPressureLevel;              //@synthesize lastThermalPressureLevel=_lastThermalPressureLevel - In the implementation block
@property (assign,nonatomic) int peakPowerPressureToken;                //@synthesize peakPowerPressureToken=_peakPowerPressureToken - In the implementation block
@property (assign,nonatomic) BOOL peakPowerPressureLevel;               //@synthesize peakPowerPressureLevel=_peakPowerPressureLevel - In the implementation block
+(id)entitlements;
+(id)eventStream;
-(void)dealloc;
-(BOOL)initialized;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(void)deactivate;
-(void)setInitialized:(BOOL)arg1 ;
-(id)loadState;
-(void)saveState;
-(int)thermalPressureToken;
-(void)getThermalPressureLevelWithToken:(int)arg1 ;
-(void)getPeakPowerPressureLevelWithToken:(int)arg1 ;
-(void)setCurrentThermalLevel:(int)arg1 ;
-(void)setCurrentPeakPowerPressureLevel:(unsigned)arg1 ;
-(void)setThermalPressureToken:(int)arg1 ;
-(int)lastThermalPressureLevel;
-(void)setLastThermalPressureLevel:(int)arg1 ;
-(int)peakPowerPressureToken;
-(void)setPeakPowerPressureToken:(int)arg1 ;
-(BOOL)peakPowerPressureLevel;
-(void)setPeakPowerPressureLevel:(BOOL)arg1 ;
@end

