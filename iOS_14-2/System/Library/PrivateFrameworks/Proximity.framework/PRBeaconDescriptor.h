/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

#import <Proximity/Proximity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSNumber;

@interface PRBeaconDescriptor : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _UUID;
	NSNumber* _major;
	NSNumber* _minor;
	unsigned long long _macAddress;

}

@property (copy,readonly) NSUUID * UUID;                       //@synthesize UUID=_UUID - In the implementation block
@property (readonly) NSNumber * major;                         //@synthesize major=_major - In the implementation block
@property (readonly) NSNumber * minor;                         //@synthesize minor=_minor - In the implementation block
@property (assign) unsigned long long macAddress;              //@synthesize macAddress=_macAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)UUID;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)minor;
-(void)setMacAddress:(unsigned long long)arg1 ;
-(unsigned long long)macAddress;
-(id)_initWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 ;
-(id)initWithUUID:(id)arg1 major:(unsigned short)arg2 ;
-(id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)major;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithUUID:(id)arg1 ;
@end

