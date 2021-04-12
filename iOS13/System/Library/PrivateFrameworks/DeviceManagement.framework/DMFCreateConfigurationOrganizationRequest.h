/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)organizationIdentifier;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(NSString *)organizationType;
-(NSString *)organizationDisplayName;
-(void)setOrganizationDisplayName:(NSString *)arg1 ;
-(void)setOrganizationType:(NSString *)arg1 ;
@end

