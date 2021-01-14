/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFCreateConfigurationOrganizationRequest : DMFTaskRequest {

	NSString* _organizationIdentifier;
	NSString* _organizationDisplayName;
	NSString* _organizationType;

}

@property (nonatomic,copy) NSString * organizationIdentifier;               //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * organizationDisplayName;              //@synthesize organizationDisplayName=_organizationDisplayName - In the implementation block
@property (nonatomic,copy) NSString * organizationType;                     //@synthesize organizationType=_organizationType - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(NSString *)organizationIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOrganizationType:(NSString *)arg1 ;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(NSString *)organizationType;
-(id)initWithCoder:(id)arg1 ;
-(void)setOrganizationDisplayName:(NSString *)arg1 ;
-(NSString *)organizationDisplayName;
@end

