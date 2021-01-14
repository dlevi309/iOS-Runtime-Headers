/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDDevice, NSDate, NSNumber;

@interface HMDUserManagementOperationTimestamp : HMFObject <NSSecureCoding> {

	HMDDevice* _device;
	NSDate* _timestamp;
	NSNumber* _state;

}

@property (readonly) HMDDevice * device;              //@synthesize device=_device - In the implementation block
@property (readonly) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) NSNumber * state;                //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(HMDDevice *)device;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)state;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDevice:(id)arg1 state:(unsigned long long)arg2 ;
@end

