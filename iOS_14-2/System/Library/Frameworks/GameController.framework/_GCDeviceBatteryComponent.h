/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

@class GCDeviceBattery;


@protocol _GCDeviceBatteryComponent <_GCDeviceComponent>
@property (nonatomic,copy) id deviceBatteryServiceConnectedHandler; 
@property (nonatomic,copy) id deviceBatteryComponentBatteryUpdatedHandler; 
@property (nonatomic,readonly) GCDeviceBattery * battery; 
@required
-(GCDeviceBattery *)battery;
-(id)deviceBatteryServiceConnectedHandler;
-(void)setDeviceBatteryServiceConnectedHandler:(/*^block*/id)arg1;
-(id)deviceBatteryComponentBatteryUpdatedHandler;
-(void)setDeviceBatteryComponentBatteryUpdatedHandler:(/*^block*/id)arg1;

@end

