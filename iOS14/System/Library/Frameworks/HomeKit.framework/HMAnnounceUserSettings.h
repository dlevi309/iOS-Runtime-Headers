/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMAnnounceUserSettings : HMFObject <NSSecureCoding> {

	unsigned long long _deviceNotificationMode;

}

@property (readonly) unsigned long long deviceNotificationMode;              //@synthesize deviceNotificationMode=_deviceNotificationMode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(id)privateDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)deviceNotificationMode;
-(id)initWithDeviceNotificationMode:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

