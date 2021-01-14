/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


#import <PowerUI/PowerUI-Structs.h>
@interface PowerUIBluetoothHandler : NSObject
-(id)init;
-(int)isAppleAudioDeviceWrapperWithDevice:(BTDeviceImplRef)arg1 withBool:(unsigned*)arg2 ;
-(int)getDeviceIDWrapperWithDevice:(BTDeviceImplRef)arg1 withVendorIdSource:(unsigned*)arg2 withVendorId:(unsigned*)arg3 withProductId:(unsigned*)arg4 withVersionId:(unsigned*)arg5 ;
-(int)deviceConnectWrapper:(BTDeviceImplRef)arg1 ;
-(int)sendCustomMessageWrapperWithManager:(BTAccessoryManagerImplRef)arg1 withMessageType:(int)arg2 withDeviceHandle:(BTDeviceImplRef)arg3 withData:(char*)arg4 withDataSize:(unsigned long long)arg5 ;
-(id)getAddressStringForDevice:(BTDeviceImplRef)arg1 ;
-(BTDeviceImplRef)getDeviceForAddressString:(id)arg1 forSession:(BTSessionImplRef)arg2 ;
-(BOOL)isDeviceConnected:(BTDeviceImplRef)arg1 forSession:(BTSessionImplRef)arg2 ;
@end

