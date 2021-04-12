/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithString:(id)arg1 ;
-(unsigned short)groupID;
-(NSUUID *)organizationUUID;
-(id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 ;
-(BOOL)isEqualToGroupIdentifier:(id)arg1 ;
@end

