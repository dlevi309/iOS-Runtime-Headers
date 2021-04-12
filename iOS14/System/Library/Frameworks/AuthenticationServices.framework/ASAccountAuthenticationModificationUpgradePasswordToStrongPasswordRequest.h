/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <AuthenticationServices/ASAccountAuthenticationModificationRequest.h>

@class NSString, ASCredentialServiceIdentifier, NSDictionary, NSExtension;

@interface ASAccountAuthenticationModificationUpgradePasswordToStrongPasswordRequest : ASAccountAuthenticationModificationRequest {

	NSString* _user;
	ASCredentialServiceIdentifier* _serviceIdentifier;
	NSDictionary* _userInfo;
	NSString* _password;
	NSExtension* _extension;

}

@property (nonatomic,readonly) NSString * password;                                            //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSExtension * extension;                                        //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) NSString * user;                                                //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) ASCredentialServiceIdentifier * serviceIdentifier;              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo;                                        //@synthesize userInfo=_userInfo - In the implementation block
-(NSDictionary *)userInfo;
-(id)initWithUser:(id)arg1 password:(id)arg2 extension:(id)arg3 serviceIdentifier:(id)arg4 userInfo:(id)arg5 ;
-(NSString *)password;
-(ASCredentialServiceIdentifier *)serviceIdentifier;
-(NSExtension *)extension;
-(NSString *)user;
-(id)initWithUser:(id)arg1 serviceIdentifier:(id)arg2 userInfo:(id)arg3 ;
@end

