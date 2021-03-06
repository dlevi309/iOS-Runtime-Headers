/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFRemoveProvisioningProfileRequest : DMFTaskRequest {

	NSString* _profileIdentifier;
	NSString* _managingProfileIdentifier;

}

@property (nonatomic,copy) NSString * profileIdentifier;                      //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (nonatomic,copy) NSString * managingProfileIdentifier;              //@synthesize managingProfileIdentifier=_managingProfileIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(NSString *)profileIdentifier;
-(void)setProfileIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)managingProfileIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)setManagingProfileIdentifier:(NSString *)arg1 ;
@end

