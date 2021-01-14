/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <DeviceManagement/DMFControlGroupIdentifier.h>

@class DMFControlGroupIdentifier;

@interface DMFControlSessionIdentifier : DMFControlGroupIdentifier {

	unsigned short _port;
	unsigned _leaderIP;

}

@property (nonatomic,readonly) unsigned leaderIP;                                        //@synthesize leaderIP=_leaderIP - In the implementation block
@property (nonatomic,readonly) unsigned short port;                                      //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) DMFControlGroupIdentifier * groupIdentifier; 
+(BOOL)supportsSecureCoding;
-(unsigned short)port;
-(id)initWithString:(id)arg1 ;
-(DMFControlGroupIdentifier *)groupIdentifier;
-(unsigned)leaderIP;
-(void)encodeWithCoder:(id)arg1 ;
-(id)stringValue;
-(id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 ;
-(id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 leaderIP:(unsigned)arg3 port:(unsigned short)arg4 ;
-(BOOL)isEqualToControlSessionIdentifier:(id)arg1 ;
-(id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 leaderIP:(unsigned)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

