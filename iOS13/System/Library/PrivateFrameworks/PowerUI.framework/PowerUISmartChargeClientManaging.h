/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@protocol PowerUISmartChargeClientManaging <NSObject>
@required
-(id)status;
-(id)initWithClientName:(id)arg1;
-(void)fullChargeDeadlineWithHandler:(/*^block*/id)arg1;
-(void)isSmartChargingCurrentlyEnabledWithHandler:(/*^block*/id)arg1;
-(unsigned long long)isSmartChargingCurrentlyEnabled:(id*)arg1;
-(BOOL)disableSmartCharging:(id*)arg1;
-(void)disableSmartChargingWithHandler:(/*^block*/id)arg1;
-(BOOL)temporarilyDisableSmartCharging:(id*)arg1;
-(void)temporarilyDisableSmartChargingWithHandler:(/*^block*/id)arg1;
-(BOOL)enableSmartCharging:(id*)arg1;
-(void)enableSmartChargingWithHandler:(/*^block*/id)arg1;
-(BOOL)temporarilyEnableCharging:(id*)arg1;
-(void)temporarilyEnableChargingWithHandler:(/*^block*/id)arg1;
-(id)fullChargeDeadline:(id*)arg1;
-(id)powerLogStatus;

@end

