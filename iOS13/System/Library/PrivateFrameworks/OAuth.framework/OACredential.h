/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
*/


@class NSString;

@interface OACredential : NSObject {

	NSString* _consumerKey;
	NSString* _consumerSecret;
	NSString* _oauthToken;
	NSString* _oauthTokenSecret;

}

@property (nonatomic,copy) NSString * consumerKey;                   //@synthesize consumerKey=_consumerKey - In the implementation block
@property (nonatomic,copy) NSString * consumerSecret;                //@synthesize consumerSecret=_consumerSecret - In the implementation block
@property (nonatomic,copy) NSString * oauthToken;                    //@synthesize oauthToken=_oauthToken - In the implementation block
@property (nonatomic,copy) NSString * oauthTokenSecret;              //@synthesize oauthTokenSecret=_oauthTokenSecret - In the implementation block
-(void)dealloc;
-(void)setOauthToken:(NSString *)arg1 ;
-(void)setOauthTokenSecret:(NSString *)arg1 ;
-(NSString *)oauthToken;
-(NSString *)oauthTokenSecret;
-(NSString *)consumerSecret;
-(NSString *)consumerKey;
-(void)setConsumerKey:(NSString *)arg1 ;
-(void)setConsumerSecret:(NSString *)arg1 ;
-(id)signingKey;
@end

