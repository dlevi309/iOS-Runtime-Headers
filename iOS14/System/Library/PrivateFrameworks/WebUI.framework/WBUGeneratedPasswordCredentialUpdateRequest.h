/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
*/


@class NSString, NSURLProtectionSpace, NSURL;

@interface WBUGeneratedPasswordCredentialUpdateRequest : NSObject {

	BOOL _shouldSaveNewCredential;
	NSString* _username;
	NSString* _generatedPassword;
	NSString* _lastGeneratedPassword;
	NSURLProtectionSpace* _protectionSpace;
	NSURL* _urlForCredential;

}

@property (nonatomic,copy,readonly) NSString * username;                            //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * generatedPassword;                   //@synthesize generatedPassword=_generatedPassword - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastGeneratedPassword;               //@synthesize lastGeneratedPassword=_lastGeneratedPassword - In the implementation block
@property (nonatomic,readonly) NSURLProtectionSpace * protectionSpace;              //@synthesize protectionSpace=_protectionSpace - In the implementation block
@property (nonatomic,readonly) NSURL * urlForCredential;                            //@synthesize urlForCredential=_urlForCredential - In the implementation block
@property (nonatomic,readonly) BOOL shouldSaveNewCredential;                        //@synthesize shouldSaveNewCredential=_shouldSaveNewCredential - In the implementation block
+(id)requestWithNewUsername:(id)arg1 newGeneratedPassword:(id)arg2 lastGeneratedPassword:(id)arg3 credentialURL:(id)arg4 protectionSpace:(id)arg5 shouldSaveNewCredential:(BOOL)arg6 ;
-(NSString *)username;
-(NSURLProtectionSpace *)protectionSpace;
-(id)_initRequestWithNewUsername:(id)arg1 newGeneratedPassword:(id)arg2 lastGeneratedPassword:(id)arg3 credentialURL:(id)arg4 protectionSpace:(id)arg5 shouldSaveNewCredential:(BOOL)arg6 ;
-(NSString *)generatedPassword;
-(NSString *)lastGeneratedPassword;
-(NSURL *)urlForCredential;
-(BOOL)shouldSaveNewCredential;
@end

