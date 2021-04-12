/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(NSNumber *)major;
-(NSNumber *)minor;
-(id)_initWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 ;
-(id)initWithUUID:(id)arg1 ;
-(id)initWithUUID:(id)arg1 major:(unsigned short)arg2 ;
-(id)initWithUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 ;
-(unsigned long long)macAddress;
-(void)setMacAddress:(unsigned long long)arg1 ;
@end

