/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSDictionary, NSString, NSURL;

@interface ENGCOAuth : NSObject {

	NSDictionary* __parameters;
	NSString* __method;
	NSURL* __url;
	NSString* _signatureSecret;
	NSDictionary* _OAuthParameters;

}

@property (nonatomic,copy) NSDictionary * requestParameters;              //@synthesize _parameters=__parameters - In the implementation block
@property (nonatomic,copy) NSString * HTTPMethod;                         //@synthesize _method=__method - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                   //@synthesize _url=__url - In the implementation block
@property (nonatomic,copy) NSString * signatureSecret;                    //@synthesize signatureSecret=_signatureSecret - In the implementation block
@property (nonatomic,retain) NSDictionary * OAuthParameters;              //@synthesize OAuthParameters=_OAuthParameters - In the implementation block
+(void)setHTTPShouldHandleCookies:(BOOL)arg1 ;
+(id)timeStamp;
+(id)nonce;
+(void)setUserAgent:(id)arg1 ;
+(void)setTimeStampOffset:(long long)arg1 ;
+(id)queryStringFromParameters:(id)arg1 ;
+(id)URLRequestForPath:(id)arg1 GETParameters:(id)arg2 host:(id)arg3 consumerKey:(id)arg4 consumerSecret:(id)arg5 accessToken:(id)arg6 tokenSecret:(id)arg7 ;
+(id)URLRequestForPath:(id)arg1 GETParameters:(id)arg2 scheme:(id)arg3 host:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 accessToken:(id)arg7 tokenSecret:(id)arg8 ;
+(id)URLRequestForPath:(id)arg1 POSTParameters:(id)arg2 host:(id)arg3 consumerKey:(id)arg4 consumerSecret:(id)arg5 accessToken:(id)arg6 tokenSecret:(id)arg7 ;
-(id)signature;
-(NSString *)HTTPMethod;
-(id)authorizationHeader;
-(void)setURL:(NSURL *)arg1 ;
-(void)setRequestParameters:(NSDictionary *)arg1 ;
-(id)request;
-(NSURL *)URL;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(NSDictionary *)requestParameters;
-(id)initWithConsumerKey:(id)arg1 consumerSecret:(id)arg2 accessToken:(id)arg3 tokenSecret:(id)arg4 ;
-(id)signatureBase;
-(NSString *)signatureSecret;
-(void)setSignatureSecret:(NSString *)arg1 ;
-(NSDictionary *)OAuthParameters;
-(void)setOAuthParameters:(NSDictionary *)arg1 ;
@end

