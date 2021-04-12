/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)signingKey;
-(void)setOauthTokenSecret:(NSString *)arg1 ;
-(NSString *)consumerKey;
-(void)setConsumerKey:(NSString *)arg1 ;
-(NSString *)consumerSecret;
-(void)setConsumerSecret:(NSString *)arg1 ;
-(NSString *)oauthTokenSecret;
-(void)setOauthToken:(NSString *)arg1 ;
-(NSString *)oauthToken;
-(void)dealloc;
@end

