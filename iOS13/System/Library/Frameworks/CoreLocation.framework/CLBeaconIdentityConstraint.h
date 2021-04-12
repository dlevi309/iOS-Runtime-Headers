/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSNumber *)major;
-(NSNumber *)minor;
-(id)_initWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 ;
-(id)initWithUUID:(id)arg1 ;
-(id)initWithUUID:(id)arg1 major:(unsigned short)arg2 ;
-(id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 ;
@end

