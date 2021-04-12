/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
*/

#import <IOUSBHost/IOUSBHost-Structs.h>
#import <IOUSBHost/IOUSBHostObject.h>

@interface IOUSBHostDevice : IOUSBHostObject

@property (readonly) const IOUSBDeviceDescriptor* deviceDescriptor; 
@property (readonly) const IOUSBBOSDescriptor* capabilityDescriptors; 
@property (readonly) const IOUSBConfigurationDescriptor* configurationDescriptor; 
+(CFDictionaryRef)createMatchingDictionaryWithVendorID:(id)arg1 productID:(id)arg2 bcdDevice:(id)arg3 deviceClass:(id)arg4 deviceSubclass:(id)arg5 deviceProtocol:(id)arg6 speed:(id)arg7 productIDArray:(id)arg8 ;
-(BOOL)resetWithError:(id*)arg1 ;
-(const IOUSBDeviceDescriptor*)deviceDescriptor;
-(BOOL)configureWithValue:(unsigned long long)arg1 matchInterfaces:(BOOL)arg2 error:(id*)arg3 ;
-(const IOUSBConfigurationDescriptor*)configurationDescriptorWithIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(const IOUSBConfigurationDescriptor*)configurationDescriptorWithConfigurationValue:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)configureWithValue:(unsigned long long)arg1 error:(id*)arg2 ;
-(const IOUSBBOSDescriptor*)capabilityDescriptors;
-(const IOUSBConfigurationDescriptor*)configurationDescriptor;
-(BOOL)allocateDownstreamBusCurrentWithWakeUnits:(unsigned long long*)arg1 sleepUnits:(unsigned long long*)arg2 error:(id*)arg3 ;
@end

