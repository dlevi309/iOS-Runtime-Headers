/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface DMFProvisioningProfile : NSObject <NSCopying, NSSecureCoding> {

	NSString* _UUID;
	NSString* _name;
	NSDate* _expirationDate;

}

@property (nonatomic,copy,readonly) NSString * UUID;                      //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithUUID:(id)arg1 name:(id)arg2 expirationDate:(id)arg3 ;
-(NSString *)name;
-(id)description;
-(NSDate *)expirationDate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

