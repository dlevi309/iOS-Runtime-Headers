/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@class NSString;

@interface SLWebAuthIdentity : NSObject {

	NSString* _username;
	NSString* _token;
	NSString* _displayName;
	NSString* _refreshToken;
	NSString* _youTubeUsername;

}

@property (nonatomic,readonly) NSString * username;                     //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * token;                        //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * refreshToken;                 //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,readonly) NSString * youTubeUsername;              //@synthesize youTubeUsername=_youTubeUsername - In the implementation block
-(NSString *)refreshToken;
-(NSString *)username;
-(NSString *)token;
-(NSString *)displayName;
-(id)initWithUsername:(id)arg1 token:(id)arg2 displayName:(id)arg3 refreshToken:(id)arg4 youTubeUsername:(id)arg5 ;
-(NSString *)youTubeUsername;
@end

