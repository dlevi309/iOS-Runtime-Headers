/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@protocol PowerUISmartChargeClientManaging <NSObject>
@required
-(BOOL)enableSmartCharging:(id*)arg1;
-(void)temporarilyDisableSmartChargingWithHandler:(/*^block*/id)arg1;
-(BOOL)temporarilyEnableCharging:(id*)arg1;
-(unsigned long long)isSmartChargingCurrentlyEnabled:(id*)arg1;
-(id)simulateCurrentOutputAsOfDate:(id)arg1 overrideAllSignals:(BOOL)arg2 withError:(id*)arg3;
-(void)fullChargeDeadlineWithHandler:(/*^block*/id)arg1;
-(void)resetDevelopmentMode;
-(void)temporarilyEnableChargingWithHandler:(/*^block*/id)arg1;
-(void)isOBCSupportedWithHandler:(/*^block*/id)arg1;
-(BOOL)temporarilyDisableSmartCharging:(id*)arg1;
-(void)enableSmartChargingWithHandler:(/*^block*/id)arg1;
-(void)isOBCEngagedAsDesktopDeviceWithHandler:(/*^block*/id)arg1;
-(BOOL)isOBCEngaged:(BOOL*)arg1 asDesktopDevice:(BOOL*)arg2 chargingOverrideAllowed:(BOOL*)arg3 withError:(id*)arg4;
-(void)enterDevelopmentMode;
-(id)fullChargeDeadline:(id*)arg1;
-(id)initWithClientName:(id)arg1;
-(BOOL)isOBCSupported;
-(void)isOBCEngagedWithHandler:(/*^block*/id)arg1;
-(BOOL)isOBCEngagedAsDesktopDevice:(BOOL*)arg1 chargingOverrideAllowed:(BOOL*)arg2 withError:(id*)arg3;
-(BOOL)isOBCEngaged:(id*)arg1;
-(id)powerLogStatus;
-(id)status;
-(BOOL)disableSmartCharging:(id*)arg1;
-(void)disableSmartChargingWithHandler:(/*^block*/id)arg1;
-(void)isSmartChargingCurrentlyEnabledWithHandler:(/*^block*/id)arg1;

@end

