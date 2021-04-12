/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)destination;
-(NSUUID *)deviceIdentifier;
-(BOOL)isLocal;
-(id)privateDescription;
-(id)initWithDestination:(id)arg1 ;
-(id)initWithDeviceIdentifier:(id)arg1 ;
@end

