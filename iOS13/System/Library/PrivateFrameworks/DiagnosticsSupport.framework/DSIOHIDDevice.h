/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
*/


#import <DiagnosticsSupport/DiagnosticsSupport-Structs.h>
@interface DSIOHIDDevice : NSObject {

	IOHIDManagerRef _manager;
	IOHIDDeviceRef _device;

}
+(id)deviceWithDeviceIdentifier:(SCD_Struct_DS2)arg1 ;
-(void)dealloc;
-(id)serialNumber;
-(id)_sharedSerialQueue;
-(id)initWithDeviceIdentifier:(SCD_Struct_DS2)arg1 ;
-(id)stringFromHIDReport:(long long)arg1 ;
@end

