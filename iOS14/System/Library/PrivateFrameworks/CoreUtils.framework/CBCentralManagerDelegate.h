/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol CBCentralManagerDelegate <NSObject>
@optional
-(void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
-(void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
-(void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
-(void)centralManager:(id)arg1 connectionEventDidOccur:(long long)arg2 forPeripheral:(id)arg3;
-(void)centralManager:(id)arg1 didUpdateANCSAuthorizationForPeripheral:(id)arg2;
-(void)centralManager:(id)arg1 willRestoreState:(id)arg2;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;

@required
-(void)centralManagerDidUpdateState:(id)arg1;

@end

