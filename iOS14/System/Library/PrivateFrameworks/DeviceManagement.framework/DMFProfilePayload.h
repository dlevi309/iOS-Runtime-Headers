/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DMFProfilePayload : NSObject <NSCopying, NSSecureCoding> {

	NSString* _type;
	NSString* _identifier;
	long long _payloadVersion;
	NSString* _displayName;
	NSString* _organization;
	NSString* _payloadDescription;

}

@property (nonatomic,copy,readonly) NSString * type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long payloadVersion;                        //@synthesize payloadVersion=_payloadVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * organization;                    //@synthesize organization=_organization - In the implementation block
@property (nonatomic,copy,readonly) NSString * payloadDescription;              //@synthesize payloadDescription=_payloadDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithType:(id)arg1 identifier:(id)arg2 payloadVersion:(long long)arg3 displayName:(id)arg4 organization:(id)arg5 payloadDescription:(id)arg6 ;
-(id)description;
-(long long)payloadVersion;
-(NSString *)payloadDescription;
-(NSString *)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSString *)organization;
-(BOOL)isEqual:(id)arg1 ;
@end

