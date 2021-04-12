/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKDeviceVersionRange;

@interface PKHardwareVersionRange : NSObject <NSSecureCoding, NSCopying> {

	PKDeviceVersionRange* _iphone;
	PKDeviceVersionRange* _watch;
	PKDeviceVersionRange* _ipad;
	PKDeviceVersionRange* _ipod;
	PKDeviceVersionRange* _appletv;

}

@property (nonatomic,readonly) PKDeviceVersionRange * iphone;               //@synthesize iphone=_iphone - In the implementation block
@property (nonatomic,readonly) PKDeviceVersionRange * watch;                //@synthesize watch=_watch - In the implementation block
@property (nonatomic,readonly) PKDeviceVersionRange * ipad;                 //@synthesize ipad=_ipad - In the implementation block
@property (nonatomic,readonly) PKDeviceVersionRange * ipod;                 //@synthesize ipod=_ipod - In the implementation block
@property (nonatomic,readonly) PKDeviceVersionRange * appletv;              //@synthesize appletv=_appletv - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(PKDeviceVersionRange *)ipad;
-(void)encodeWithCoder:(id)arg1 ;
-(PKDeviceVersionRange *)watch;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(PKDeviceVersionRange *)iphone;
-(BOOL)isEqualToHardwareVersionRange:(id)arg1 ;
-(BOOL)matchesDeviceVersion:(id)arg1 ;
-(PKDeviceVersionRange *)appletv;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(PKDeviceVersionRange *)ipod;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

