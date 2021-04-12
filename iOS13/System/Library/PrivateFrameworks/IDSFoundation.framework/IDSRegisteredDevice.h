/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSArray;

@interface IDSRegisteredDevice : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _hardwareVersion;
	NSData* _pushToken;
	NSArray* _URIs;
	NSData* _publicDeviceIdentity;

}

@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * hardwareVersion;                 //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (nonatomic,readonly) NSData * pushToken;                         //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,readonly) NSArray * URIs;                             //@synthesize URIs=_URIs - In the implementation block
@property (nonatomic,readonly) NSData * publicDeviceIdentity;              //@synthesize publicDeviceIdentity=_publicDeviceIdentity - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)registeredDeviceFromDependentRegistrationDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)pushToken;
-(NSString *)hardwareVersion;
-(id)initWithName:(id)arg1 hardwareVersion:(id)arg2 pushToken:(id)arg3 URIs:(id)arg4 publicDeviceIdentity:(id)arg5 ;
-(NSData *)publicDeviceIdentity;
-(BOOL)isEqualToRegisteredDevice:(id)arg1 ;
-(NSArray *)URIs;
@end

