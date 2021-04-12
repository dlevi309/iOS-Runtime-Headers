/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FindMyDeviceUI.framework/FindMyDeviceUI
*/


@interface FMDUIFMIPSettingsCache : NSObject {

	BOOL _fmipStateAvailable;
	BOOL _lowBatteryLocateStateAvailable;
	BOOL _lowBatteryLocateEnabled;
	unsigned long long _fmipState;

}

@property (assign,nonatomic) BOOL fmipStateAvailable;                          //@synthesize fmipStateAvailable=_fmipStateAvailable - In the implementation block
@property (assign,nonatomic) unsigned long long fmipState;                     //@synthesize fmipState=_fmipState - In the implementation block
@property (assign,nonatomic) BOOL lowBatteryLocateStateAvailable;              //@synthesize lowBatteryLocateStateAvailable=_lowBatteryLocateStateAvailable - In the implementation block
@property (assign,nonatomic) BOOL lowBatteryLocateEnabled;                     //@synthesize lowBatteryLocateEnabled=_lowBatteryLocateEnabled - In the implementation block
@property (nonatomic,readonly) BOOL fmipEnabled; 
@property (nonatomic,readonly) BOOL fmipStateChangeInProgress; 
+(id)sharedInstance;
-(id)init;
-(BOOL)fmipEnabled;
-(BOOL)fmipStateAvailable;
-(unsigned long long)fmipState;
-(BOOL)fmipStateChangeInProgress;
-(BOOL)lowBatteryLocateEnabled;
-(BOOL)lowBatteryLocateStateAvailable;
-(void)_loadFMIPState;
-(void)_loadLowBatteryState;
-(void)setLowBatteryLocateEnabled:(BOOL)arg1 ;
-(void)setLowBatteryLocateStateAvailable:(BOOL)arg1 ;
-(void)setFmipState:(unsigned long long)arg1 ;
-(void)setFmipStateAvailable:(BOOL)arg1 ;
@end

