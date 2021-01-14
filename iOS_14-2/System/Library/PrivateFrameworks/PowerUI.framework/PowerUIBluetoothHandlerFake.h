/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <PowerUI/PowerUI-Structs.h>
#import <PowerUI/PowerUIBluetoothHandler.h>

@class NSString;

@interface PowerUIBluetoothHandlerFake : PowerUIBluetoothHandler {

	BOOL _fakeDeviceConnected;
	BTDeviceImplRef _fakeDevice;
	NSString* _fakeDeviceAddress;

}

@property (assign,nonatomic) BTDeviceImplRef fakeDevice;                //@synthesize fakeDevice=_fakeDevice - In the implementation block
@property (nonatomic,retain) NSString * fakeDeviceAddress;              //@synthesize fakeDeviceAddress=_fakeDeviceAddress - In the implementation block
@property (assign,nonatomic) BOOL fakeDeviceConnected;                  //@synthesize fakeDeviceConnected=_fakeDeviceConnected - In the implementation block
-(void)dealloc;
-(id)init:(id)arg1 ;
-(int)isAppleAudioDeviceWrapperWithDevice:(BTDeviceImplRef)arg1 withBool:(unsigned*)arg2 ;
-(int)getDeviceIDWrapperWithDevice:(BTDeviceImplRef)arg1 withVendorIdSource:(unsigned*)arg2 withVendorId:(unsigned*)arg3 withProductId:(unsigned*)arg4 withVersionId:(unsigned*)arg5 ;
-(int)deviceConnectWrapper:(BTDeviceImplRef)arg1 ;
-(int)sendCustomMessageWrapperWithManager:(BTAccessoryManagerImplRef)arg1 withMessageType:(int)arg2 withDeviceHandle:(BTDeviceImplRef)arg3 withData:(char*)arg4 withDataSize:(unsigned long long)arg5 ;
-(id)getAddressStringForDevice:(BTDeviceImplRef)arg1 ;
-(BTDeviceImplRef)getDeviceForAddressString:(id)arg1 forSession:(BTSessionImplRef)arg2 ;
-(BOOL)isDeviceConnected:(BTDeviceImplRef)arg1 forSession:(BTSessionImplRef)arg2 ;
-(BTDeviceImplRef)fakeDevice;
-(void)setFakeDevice:(BTDeviceImplRef)arg1 ;
-(NSString *)fakeDeviceAddress;
-(void)setFakeDeviceAddress:(NSString *)arg1 ;
-(BOOL)fakeDeviceConnected;
-(void)setFakeDeviceConnected:(BOOL)arg1 ;
@end

