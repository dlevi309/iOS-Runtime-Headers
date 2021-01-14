/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSURL;

@interface BCOAuth2Parameters : NSObject <NSSecureCoding> {

	NSString* _clientIdentifier;
	NSString* _clientSecret;
	NSArray* _scope;
	NSString* _state;
	NSString* _responseType;
	NSString* _responseEncryptionKey;
	NSURL* _authorizationURL;
	NSURL* _accessTokenURL;

}

@property (nonatomic,retain) NSString * clientIdentifier;                   //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSString * clientSecret;                       //@synthesize clientSecret=_clientSecret - In the implementation block
@property (nonatomic,retain) NSArray * scope;                               //@synthesize scope=_scope - In the implementation block
@property (nonatomic,retain) NSString * state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * responseType;                       //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,retain) NSString * responseEncryptionKey;              //@synthesize responseEncryptionKey=_responseEncryptionKey - In the implementation block
@property (nonatomic,retain) NSURL * authorizationURL;                      //@synthesize authorizationURL=_authorizationURL - In the implementation block
@property (nonatomic,retain) NSURL * accessTokenURL;                        //@synthesize accessTokenURL=_accessTokenURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setScope:(NSArray *)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSArray *)scope;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)authorizationURL;
-(void)setState:(NSString *)arg1 ;
-(void)setResponseType:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(NSString *)responseType;
-(NSString *)clientIdentifier;
-(NSString *)clientSecret;
-(void)setClientSecret:(NSString *)arg1 ;
-(void)setResponseEncryptionKey:(NSString *)arg1 ;
-(NSString *)responseEncryptionKey;
-(id)tokenExchangeURLWith:(id)arg1 ;
-(void)setAuthorizationURL:(NSURL *)arg1 ;
-(void)setAccessTokenURL:(NSURL *)arg1 ;
-(id)authenticationSessionURL;
-(NSURL *)accessTokenURL;
@end

