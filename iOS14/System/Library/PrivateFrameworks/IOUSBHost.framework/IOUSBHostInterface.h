/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
*/

#import <IOUSBHost/IOUSBHost-Structs.h>
#import <IOUSBHost/IOUSBHostObject.h>

@interface IOUSBHostInterface : IOUSBHostObject

@property (readonly) double idleTimeout; 
@property (readonly) const IOUSBConfigurationDescriptor* configurationDescriptor; 
@property (readonly) const IOUSBInterfaceDescriptor* interfaceDescriptor; 
+(CFDictionaryRef)createMatchingDictionaryWithVendorID:(id)arg1 productID:(id)arg2 bcdDevice:(id)arg3 interfaceNumber:(id)arg4 configurationValue:(id)arg5 interfaceClass:(id)arg6 interfaceSubclass:(id)arg7 interfaceProtocol:(id)arg8 speed:(id)arg9 productIDArray:(id)arg10 ;
-(double)idleTimeout;
-(const IOUSBConfigurationDescriptor*)configurationDescriptor;
-(const IOUSBInterfaceDescriptor*)interfaceDescriptor;
-(BOOL)setIdleTimeout:(double)arg1 error:(id*)arg2 ;
-(BOOL)selectAlternateSetting:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)copyPipeWithAddress:(unsigned long long)arg1 error:(id*)arg2 ;
@end

