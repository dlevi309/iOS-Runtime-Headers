/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface DMFControlGroupIdentifier : NSObject <NSCopying, NSSecureCoding> {

	unsigned short _groupID;
	NSUUID* _organizationUUID;

}

@property (nonatomic,copy,readonly) NSUUID * organizationUUID;              //@synthesize organizationUUID=_organizationUUID - In the implementation block
@property (nonatomic,readonly) unsigned short groupID;                      //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)initWithString:(id)arg1 ;
-(id)init;
-(unsigned short)groupID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)description;
-(id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 ;
-(BOOL)isEqualToGroupIdentifier:(id)arg1 ;
-(NSUUID *)organizationUUID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

