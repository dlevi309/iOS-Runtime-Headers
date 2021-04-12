/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFFetchConfigurationOrganizationsResultObject : CATTaskResultObject {

	NSDictionary* _organizationsByIdentifier;

}

@property (nonatomic,retain) NSDictionary * organizationsByIdentifier;              //@synthesize organizationsByIdentifier=_organizationsByIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)organizationsByIdentifier;
-(void)setOrganizationsByIdentifier:(NSDictionary *)arg1 ;
@end

