/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface HMUserCloudShareRepairInfo : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	long long _version;

}

@property (copy,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) long long version;                     //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)initWithIdentifier:(id)arg1 version:(long long)arg2 ;
-(long long)version;
@end

