/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSDictionary;

@interface DMFInstallConfigurationRequest : DMFTaskRequest {

	unsigned long long _type;
	NSString* _managingProfileIdentifier;
	NSDictionary* _profile;

}

@property (assign,nonatomic) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * managingProfileIdentifier;              //@synthesize managingProfileIdentifier=_managingProfileIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * profile;                            //@synthesize profile=_profile - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)setProfile:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)managingProfileIdentifier;
-(NSDictionary *)profile;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setManagingProfileIdentifier:(NSString *)arg1 ;
@end

