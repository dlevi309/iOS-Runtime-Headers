/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/

#import <BluetoothSettings/BTSDevice.h>

@class CBPeripheral, CBCentralManager;

@interface BTSDeviceLE : BTSDevice {

	CBPeripheral* _peripheral;
	CBCentralManager* _centralManager;
	BOOL healthDevice;
	BOOL ctkdDevice;

}
+(id)deviceWithPeripheral:(id)arg1 manager:(id)arg2 ;
-(id)description;
-(id)name;
-(id)identifier;
-(void)disconnect;
-(BOOL)connect;
-(BOOL)connected;
-(BOOL)paired;
-(BOOL)setUserName:(id)arg1 ;
-(void)unpair;
-(BOOL)cloudPaired;
-(BOOL)ancsAuthorized;
-(BOOL)isLimitedConnectivityDevice;
-(id)classicDevice;
-(BOOL)isHealthDevice;
-(void)setHealthDevice:(BOOL)arg1 ;
-(BOOL)supportsCTKD;
-(void)setCtkdDevice:(BOOL)arg1 ;
-(BOOL)isCTKDDevice;
-(BOOL)isMyDevice;
-(BOOL)isApplePencil:(int*)arg1 ;
-(void)setANCSAuthorization:(BOOL)arg1 ;
-(BOOL)supportsANCS;
-(id)initWithPeripheral:(id)arg1 manager:(id)arg2 ;
@end

