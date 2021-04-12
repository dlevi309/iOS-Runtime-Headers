/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
*/

#import <AppSSOCore/AppSSOCore-Structs.h>
#import <AppSSOCore/SOProfile.h>

@class NSString, NSDictionary;

@interface SOFullProfile : SOProfile {

	NSString* _extensionTeamIdentifier;
	NSDictionary* _extensionData;

}

@property (nonatomic,retain) NSString * extensionTeamIdentifier;              //@synthesize extensionTeamIdentifier=_extensionTeamIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * extensionData;                    //@synthesize extensionData=_extensionData - In the implementation block
-(id)initWithProfileData:(id)arg1 ;
-(id)copyProfile;
-(id)description;
-(void)removeURLPrefix:(id)arg1 ;
-(void)setExtensionData:(NSDictionary *)arg1 ;
-(NSString *)extensionTeamIdentifier;
-(id)copyProfileForClient;
-(void)setExtensionTeamIdentifier:(NSString *)arg1 ;
-(NSDictionary *)extensionData;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

