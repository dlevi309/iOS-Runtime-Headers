/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
*/

#import <VoiceOverServices/VoiceOverServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/VOSBluetoothConnectableDevice.h>

@class NSString;

@interface VOSBluetoothDevice : NSObject <NSCopying, VOSBluetoothConnectableDevice> {

	NSString* _name;
	NSString* _address;
	BTDeviceImplRef _device;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(long long)compare:(id)arg1 ;
-(id)identifier;
-(id)address;
-(void)disconnect;
-(BTDeviceImplRef)device;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(unsigned)deviceClass;
-(void)connect;
-(BOOL)connected;
-(unsigned)vendorId;
-(unsigned long long)connectedServices;
-(void)setDevice:(BTDeviceImplRef)arg1 ;
-(BOOL)paired;
-(unsigned)productId;
-(void)setPIN:(id)arg1 ;
-(void)unpair;
-(void)_clearName;
-(id)initWithDevice:(BTDeviceImplRef)arg1 address:(id)arg2 ;
-(unsigned)majorClass;
-(unsigned)minorClass;
-(unsigned long long)connectedServicesCount;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(void)connectWithServices:(unsigned)arg1 ;
-(void)acceptSSP:(int)arg1 ;
-(unsigned)authorizedServices;
-(BOOL)isNameCached;
-(BOOL)hasAddress:(id)arg1 ;
-(BOOL)isAppleHIDDevice;
@end

