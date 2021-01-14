/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
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
-(BOOL)connected;
-(void)disconnect;
-(long long)compare:(id)arg1 ;
-(unsigned long long)connectedServices;
-(BOOL)paired;
-(void)unpair;
-(void)connect;
-(unsigned)deviceClass;
-(BTDeviceImplRef)device;
-(unsigned)vendorId;
-(id)name;
-(NSString *)description;
-(id)address;
-(int)type;
-(unsigned)productId;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(unsigned long long)hash;
-(void)setPIN:(id)arg1 ;
-(void)setDevice:(BTDeviceImplRef)arg1 ;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)authorizedServices;
-(unsigned)majorClass;
-(void)acceptSSP:(int)arg1 ;
-(id)initWithDevice:(BTDeviceImplRef)arg1 address:(id)arg2 ;
-(void)_clearName;
-(unsigned)minorClass;
-(unsigned long long)connectedServicesCount;
-(void)connectWithServices:(unsigned)arg1 ;
-(BOOL)connecting;
-(BOOL)isNameCached;
-(BOOL)hasAddress:(id)arg1 ;
-(BOOL)isAppleHIDDevice;
@end

