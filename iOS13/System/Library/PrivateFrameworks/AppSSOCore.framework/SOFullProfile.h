/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)extensionData;
-(void)setExtensionData:(NSDictionary *)arg1 ;
-(id)copyProfileForClient;
-(id)copyProfile;
-(id)initWithProfileData:(id)arg1 ;
-(void)removeURLPrefix:(id)arg1 ;
-(void)setExtensionTeamIdentifier:(NSString *)arg1 ;
-(NSString *)extensionTeamIdentifier;
@end

