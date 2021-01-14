/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/_HMDDeviceHandle.h>

@class NSUUID;

@interface _HMDLocalDeviceHandle : _HMDDeviceHandle {

	NSUUID* _deviceIdentifier;

}

@property (copy,readonly) NSUUID * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isValidDestination:(id)arg1 ;
-(BOOL)isLocal;
-(NSUUID *)deviceIdentifier;
-(id)privateDescription;
-(id)initWithDeviceIdentifier:(id)arg1 ;
-(id)initWithDestination:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)destination;
-(BOOL)isEqual:(id)arg1 ;
@end

