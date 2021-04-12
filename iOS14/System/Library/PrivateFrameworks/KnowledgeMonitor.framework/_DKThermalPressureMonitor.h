/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)loadState;
-(void)saveState;
-(void)synchronouslyReflectCurrentValue;
-(int)thermalPressureToken;
-(int)peakPowerPressureToken;
-(void)setLastThermalPressureLevel:(int)arg1 ;
-(void)setThermalPressureToken:(int)arg1 ;
-(int)lastThermalPressureLevel;
-(void)start;
-(void)setCurrentPeakPowerPressureLevel:(unsigned)arg1 ;
-(void)stop;
-(void)deactivate;
-(BOOL)initialized;
-(void)setCurrentThermalLevel:(int)arg1 ;
-(void)getThermalPressureLevelWithToken:(int)arg1 ;
-(void)getPeakPowerPressureLevelWithToken:(int)arg1 ;
-(void)setInitialized:(BOOL)arg1 ;
-(void)setPeakPowerPressureToken:(int)arg1 ;
-(void)dealloc;
-(void)setPeakPowerPressureLevel:(BOOL)arg1 ;
-(BOOL)peakPowerPressureLevel;
@end

