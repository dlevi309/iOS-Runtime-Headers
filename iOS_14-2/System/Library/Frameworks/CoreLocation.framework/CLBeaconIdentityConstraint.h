/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSNumber;

@interface CLBeaconIdentityConstraint : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSNumber* _major;
	NSNumber* _minor;

}

@property (nonatomic,copy) NSUUID * UUID;                          //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * major;              //@synthesize major=_major - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * minor;              //@synthesize minor=_minor - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)any;
-(NSUUID *)UUID;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)minor;
-(id)_initWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 ;
-(id)initWithUUID:(id)arg1 major:(unsigned short)arg2 ;
-(id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)major;
-(void)setUUID:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithUUID:(id)arg1 ;
@end

