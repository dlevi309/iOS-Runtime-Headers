/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/

#import <BluetoothSettings/BTSDevice.h>

@class BluetoothDevice;

@interface BTSDeviceClassic : BTSDevice {

	BluetoothDevice* _device;
	BOOL ctkdDevice;

}

@property (nonatomic,__weak,readonly) BluetoothDevice * device;              //@synthesize device=_device - In the implementation block
+(id)deviceWithDevice:(id)arg1 ;
-(BOOL)connected;
-(id)initWithDevice:(id)arg1 ;
-(void)disconnect;
-(id)productName;
-(BOOL)paired;
-(BOOL)magicPaired;
-(void)unpair;
-(BOOL)connect;
-(BOOL)ancsAuthorized;
-(BluetoothDevice *)device;
-(BOOL)setUserName:(id)arg1 ;
-(id)name;
-(id)identifier;
-(BOOL)isLimitedConnectivityDevice;
-(id)classicDevice;
-(BOOL)isHealthDevice;
-(void)setCtkdDevice:(BOOL)arg1 ;
-(BOOL)isCTKDDevice;
-(BOOL)isMyDevice;
-(BOOL)cloudPaired;
-(BOOL)isApplePencil:(int*)arg1 ;
-(BOOL)supportsANCS;
-(BOOL)isTemporaryPairedDevice;
@end

