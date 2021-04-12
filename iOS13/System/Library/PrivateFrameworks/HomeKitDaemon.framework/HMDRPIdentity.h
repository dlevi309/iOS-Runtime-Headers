/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)identityWithRPIdentity:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDescription;
-(HMFKey *)deviceIRK;
-(id)logIdentifier;
-(id)initWithDeviceIRK:(id)arg1 ;
-(BOOL)isEqualToRPIndentity:(id)arg1 ;
@end

