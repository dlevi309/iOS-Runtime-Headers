/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)displayName;
-(NSString *)organization;
-(NSString *)payloadDescription;
-(long long)payloadVersion;
-(id)initWithType:(id)arg1 identifier:(id)arg2 payloadVersion:(long long)arg3 displayName:(id)arg4 organization:(id)arg5 payloadDescription:(id)arg6 ;
@end

