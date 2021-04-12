/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSString;

@interface SSAuthorizationRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountIdentifier;
	BOOL _allowSilentAuthentication;
	NSString* _keybagPath;
	id _token;
	NSString* _reason;
	BOOL _shouldAddKeysToKeyBag;
	BOOL _shouldPromptForCredentials;
	NSString* _clientIdentifierHeader;
	NSNumber* _familyAccountIdentifier;
	NSString* _userAgent;

}

@property (assign,nonatomic) id<SSAuthorizationRequestDelegate> delegate; 
@property (copy) NSNumber * accountIdentifier;                                         //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,nonatomic) BOOL allowSilentAuthentication;                           //@synthesize allowSilentAuthentication=_allowSilentAuthentication - In the implementation block
@property (readonly) id authorizationToken; 
@property (copy) NSString * clientIdentifierHeader;                                    //@synthesize clientIdentifierHeader=_clientIdentifierHeader - In the implementation block
@property (copy) NSNumber * familyAccountIdentifier;                                   //@synthesize familyAccountIdentifier=_familyAccountIdentifier - In the implementation block
@property (copy) NSString * keybagPath;                                                //@synthesize keybagPath=_keybagPath - In the implementation block
@property (copy) NSString * reason;                                                    //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL shouldAddKeysToKeyBag;                               //@synthesize shouldAddKeysToKeyBag=_shouldAddKeysToKeyBag - In the implementation block
@property (assign,nonatomic) BOOL shouldPromptForCredentials;                          //@synthesize shouldPromptForCredentials=_shouldPromptForCredentials - In the implementation block
@property (copy) NSString * userAgent;                                                 //@synthesize userAgent=_userAgent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)reason;
-(id)_init;
-(BOOL)start;
-(NSNumber *)accountIdentifier;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setKeybagPath:(NSString *)arg1 ;
-(id)initWithAuthorizationToken:(id)arg1 accountIdentifier:(id)arg2 ;
-(BOOL)allowSilentAuthentication;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(void)startWithAuthorizationResponseBlock:(/*^block*/id)arg1 ;
-(id)authorizationToken;
-(void)setAllowSilentAuthentication:(BOOL)arg1 ;
-(NSNumber *)familyAccountIdentifier;
-(void)setFamilyAccountIdentifier:(NSNumber *)arg1 ;
-(NSString *)keybagPath;
-(BOOL)shouldAddKeysToKeyBag;
-(void)setShouldAddKeysToKeyBag:(BOOL)arg1 ;
-(BOOL)shouldPromptForCredentials;
-(void)setShouldPromptForCredentials:(BOOL)arg1 ;
@end

