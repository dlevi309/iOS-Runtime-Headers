/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@protocol PowerUISmartChargeManagingAudioAccessories <NSObject>
@required
-(void)fullChargeDeadlineForDevice:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)client:(id)arg1 connectAndDisableOBCforDevice:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)unfilteredDeadlineForDevice:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)isSmartChargingCurrentlyEnabledForDevice:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)client:(id)arg1 setState:(unsigned long long)arg2 forDevice:(id)arg3 withHandler:(/*^block*/id)arg4;
-(void)client:(id)arg1 updateOBCDeadline:(id)arg2 forDevice:(id)arg3 withHandler:(/*^block*/id)arg4;

@end

