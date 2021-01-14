/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@protocol PowerUISmartChargeClientManagingAudioAccessories <NSObject>
@required
-(void)fullChargeDeadlineForDevice:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)unfilteredDeadlineForDevice:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)isSmartChargingCurrentlyEnabledForDevice:(id)arg1 withHandler:(/*^block*/id)arg2;
-(id)initWithClientName:(id)arg1;
-(void)updateOBCDeadline:(id)arg1 forDevice:(id)arg2 withHandler:(/*^block*/id)arg3;
-(unsigned long long)isSmartChargingCurrentlyEnabledForDevice:(id)arg1 withError:(id*)arg2;
-(BOOL)disableSmartChargingForDevice:(id)arg1 withError:(id*)arg2;
-(void)disableSmartChargingForDevice:(id)arg1 withHandler:(/*^block*/id)arg2;
-(BOOL)temporarilyDisableSmartChargingForDevice:(id)arg1 withError:(id*)arg2;
-(void)temporarilyDisableSmartChargingForDevice:(id)arg1 withHandler:(/*^block*/id)arg2;
-(BOOL)enableSmartChargingForDevice:(id)arg1 withError:(id*)arg2;
-(void)enableSmartChargingForDevice:(id)arg1 withHandler:(/*^block*/id)arg2;
-(BOOL)temporarilyEnableChargingForDevice:(id)arg1 withError:(id*)arg2;
-(void)temporarilyEnableChargingForDevice:(id)arg1 withHandler:(/*^block*/id)arg2;
-(id)fullChargeDeadlineForDevice:(id)arg1 withError:(id*)arg2;
-(id)unfilteredDeadlineForDevice:(id)arg1 withError:(id*)arg2;
-(BOOL)connectAndDisableOBCforDevice:(id)arg1 withError:(id*)arg2;
-(void)connectAndDisableOBCforDevice:(id)arg1 withHandler:(/*^block*/id)arg2;
-(BOOL)updateOBCDeadline:(id)arg1 forDevice:(id)arg2 withError:(id*)arg3;

@end

