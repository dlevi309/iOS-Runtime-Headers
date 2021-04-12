/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@class BCBatteryDevice;

@interface CSBatteryChargingInfo : NSObject {

	BOOL _chargingWithInternalWirelessAccessory;
	BCBatteryDevice* _batteryDevice;

}

@property (assign,getter=isChargingWithInternalWirelessAccessory,nonatomic) BOOL chargingWithInternalWirelessAccessory;              //@synthesize chargingWithInternalWirelessAccessory=_chargingWithInternalWirelessAccessory - In the implementation block
@property (nonatomic,retain) BCBatteryDevice * batteryDevice;                                                                        //@synthesize batteryDevice=_batteryDevice - In the implementation block
-(void)setChargingWithInternalWirelessAccessory:(BOOL)arg1 ;
-(void)setBatteryDevice:(BCBatteryDevice *)arg1 ;
-(BCBatteryDevice *)batteryDevice;
-(BOOL)isChargingWithInternalWirelessAccessory;
@end

