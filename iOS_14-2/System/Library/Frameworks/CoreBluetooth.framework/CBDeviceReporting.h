/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

@class NSArray;


@protocol CBDeviceReporting
@property (nonatomic,copy) id deviceFoundHandler; 
@property (nonatomic,copy) id deviceLostHandler; 
@property (copy,readonly) NSArray * discoveredDevices; 
@required
-(void)setDeviceFoundHandler:(/*^block*/id)arg1;
-(id)deviceFoundHandler;
-(void)setDeviceLostHandler:(/*^block*/id)arg1;
-(id)deviceLostHandler;
-(NSArray *)discoveredDevices;

@end

