/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)name;
-(id)identifier;
-(void)disconnect;
-(BluetoothDevice *)device;
-(id)initWithDevice:(id)arg1 ;
-(BOOL)connect;
-(BOOL)connected;
-(BOOL)magicPaired;
-(BOOL)paired;
-(BOOL)setUserName:(id)arg1 ;
-(void)unpair;
-(BOOL)cloudPaired;
-(BOOL)ancsAuthorized;
-(BOOL)isLimitedConnectivityDevice;
-(id)classicDevice;
-(BOOL)isHealthDevice;
-(void)setCtkdDevice:(BOOL)arg1 ;
-(BOOL)isCTKDDevice;
-(BOOL)isMyDevice;
-(BOOL)isApplePencil:(int*)arg1 ;
-(BOOL)supportsANCS;
-(BOOL)isTemporaryPairedDevice;
@end

