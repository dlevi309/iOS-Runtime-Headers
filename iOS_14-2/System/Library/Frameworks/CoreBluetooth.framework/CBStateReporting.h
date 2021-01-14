/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/


@protocol CBStateReporting
@property (nonatomic,readonly) long long bluetoothState; 
@property (nonatomic,copy) id bluetoothStateChangedHandler; 
@required
-(long long)bluetoothState;
-(id)bluetoothStateChangedHandler;
-(void)setBluetoothStateChangedHandler:(/*^block*/id)arg1;

@end

