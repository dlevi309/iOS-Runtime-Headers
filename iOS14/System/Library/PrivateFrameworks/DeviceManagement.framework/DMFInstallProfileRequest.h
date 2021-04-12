/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSData;

@interface DMFInstallProfileRequest : DMFTaskRequest {

	unsigned long long _style;
	unsigned long long _type;
	NSString* _managingProfileIdentifier;
	NSData* _profileData;
	NSString* _personaID;

}

@property (assign,nonatomic) unsigned long long style;                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * managingProfileIdentifier;              //@synthesize managingProfileIdentifier=_managingProfileIdentifier - In the implementation block
@property (nonatomic,copy) NSData * profileData;                              //@synthesize profileData=_profileData - In the implementation block
@property (nonatomic,copy) NSString * personaID;                              //@synthesize personaID=_personaID - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isPermittedOnUserConnection;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)setPersonaID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)personaID;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)managingProfileIdentifier;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(void)setManagingProfileIdentifier:(NSString *)arg1 ;
-(NSData *)profileData;
-(void)setProfileData:(NSData *)arg1 ;
@end

