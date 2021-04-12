/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
*/


#import <DiagnosticsSupport/DiagnosticsSupport-Structs.h>
@interface DSIOHIDDevice : NSObject {

	IOHIDManagerRef _manager;
	IOHIDDeviceRef _device;

}
+(id)deviceWithDeviceIdentifier:(SCD_Struct_DS2)arg1 ;
-(id)serialNumber;
-(id)initWithDeviceIdentifier:(SCD_Struct_DS2)arg1 ;
-(id)_sharedSerialQueue;
-(void)dealloc;
-(id)stringFromHIDReport:(long long)arg1 ;
@end

