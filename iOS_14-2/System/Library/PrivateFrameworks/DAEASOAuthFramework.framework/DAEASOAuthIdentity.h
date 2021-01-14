/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
*/


@class NSString, NSData;

@interface DAEASOAuthIdentity : NSObject {

	NSString* _username;
	NSString* _displayName;
	NSString* _accessToken;
	NSString* _refreshToken;
	NSString* _oauthURI;
	NSString* _tokenRequestURI;
	NSData* _jwksData;
	NSString* _jwksURI;
	NSString* _issuer;

}

@property (nonatomic,copy) NSString * username;                     //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * displayName;                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * accessToken;                  //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSString * refreshToken;                 //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,copy) NSString * oauthURI;                     //@synthesize oauthURI=_oauthURI - In the implementation block
@property (nonatomic,copy) NSString * tokenRequestURI;              //@synthesize tokenRequestURI=_tokenRequestURI - In the implementation block
@property (nonatomic,copy) NSData * jwksData;                       //@synthesize jwksData=_jwksData - In the implementation block
@property (nonatomic,copy) NSString * jwksURI;                      //@synthesize jwksURI=_jwksURI - In the implementation block
@property (nonatomic,copy) NSString * issuer;                       //@synthesize issuer=_issuer - In the implementation block
-(NSString *)accessToken;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)issuer;
-(NSString *)refreshToken;
-(NSString *)username;
-(void)setIssuer:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)jwksURI;
-(NSString *)displayName;
-(void)setAccessToken:(NSString *)arg1 ;
-(void)setRefreshToken:(NSString *)arg1 ;
-(NSString *)tokenRequestURI;
-(NSString *)oauthURI;
-(void)setOauthURI:(NSString *)arg1 ;
-(void)setTokenRequestURI:(NSString *)arg1 ;
-(NSData *)jwksData;
-(void)setJwksData:(NSData *)arg1 ;
-(void)setJwksURI:(NSString *)arg1 ;
@end

