/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)URIs;
-(NSData *)pushToken;
-(BOOL)isEqualToRegisteredDevice:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)hardwareVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithName:(id)arg1 hardwareVersion:(id)arg2 pushToken:(id)arg3 URIs:(id)arg4 publicDeviceIdentity:(id)arg5 ;
-(NSData *)publicDeviceIdentity;
@end

