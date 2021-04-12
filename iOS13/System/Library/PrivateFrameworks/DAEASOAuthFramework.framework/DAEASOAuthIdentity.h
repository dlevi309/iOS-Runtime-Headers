/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
*/


@class NSString;

@interface DAEASOAuthIdentity : NSObject {

	NSString* _username;
	NSString* _displayName;
	NSString* _token;
	NSString* _refreshToken;
	NSString* _tokenRequestURI;

}

@property (nonatomic,copy) NSString * username;                     //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * displayName;                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * token;                        //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * refreshToken;                 //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,copy) NSString * tokenRequestURI;              //@synthesize tokenRequestURI=_tokenRequestURI - In the implementation block
-(NSString *)token;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)refreshToken;
-(void)setRefreshToken:(NSString *)arg1 ;
-(NSString *)tokenRequestURI;
-(void)setTokenRequestURI:(NSString *)arg1 ;
@end

