/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFKey;

@interface HMDRPIdentity : HMFObject <NSCopying, NSSecureCoding> {

	HMFKey* _deviceIRK;

}

@property (copy,readonly) HMFKey * deviceIRK;              //@synthesize deviceIRK=_deviceIRK - In the implementation block
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)identityWithRPIdentity:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)logIdentifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(HMFKey *)deviceIRK;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDeviceIRK:(id)arg1 ;
-(BOOL)isEqualToRPIndentity:(id)arg1 ;
@end

