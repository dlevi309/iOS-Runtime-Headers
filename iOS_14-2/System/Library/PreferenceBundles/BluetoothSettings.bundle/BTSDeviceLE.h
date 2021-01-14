/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)connected;
-(void)disconnect;
-(id)productName;
-(BOOL)paired;
-(void)unpair;
-(BOOL)connect;
-(BOOL)ancsAuthorized;
-(BOOL)setUserName:(id)arg1 ;
-(id)name;
-(id)description;
-(id)identifier;
-(BOOL)isLimitedConnectivityDevice;
-(id)classicDevice;
-(BOOL)isHealthDevice;
-(void)setHealthDevice:(BOOL)arg1 ;
-(BOOL)supportsCTKD;
-(void)setCtkdDevice:(BOOL)arg1 ;
-(BOOL)isCTKDDevice;
-(BOOL)isMyDevice;
-(BOOL)cloudPaired;
-(BOOL)isApplePencil:(int*)arg1 ;
-(void)setANCSAuthorization:(BOOL)arg1 ;
-(BOOL)supportsANCS;
-(id)initWithPeripheral:(id)arg1 manager:(id)arg2 ;
@end

