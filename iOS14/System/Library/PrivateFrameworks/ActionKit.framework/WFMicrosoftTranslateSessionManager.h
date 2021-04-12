/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSURLSession, NSString, NSURL;

@interface WFMicrosoftTranslateSessionManager : NSObject {

	NSURLSession* _session;
	NSString* _apiKey;
	NSURL* _baseURL;

}

@property (nonatomic,readonly) NSURL * baseURL;                     //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * apiKey;                       //@synthesize apiKey=_apiKey - In the implementation block
-(NSURL *)baseURL;
-(id)initWithSession:(id)arg1 ;
-(id)init;
-(NSURLSession *)session;
-(NSString *)apiKey;
-(id)initWithSessionConfiguration:(id)arg1 ;
-(void)getAvailableLanguages:(/*^block*/id)arg1 ;
-(void)detectLanguagesOfStrings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)translateStrings:(id)arg1 fromLanguage:(id)arg2 intoLanguage:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getAccessTokenWithCompletion:(/*^block*/id)arg1 ;
-(void)sendRequestWithURL:(id)arg1 queryParameters:(id)arg2 requestBody:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setApiKey:(NSString *)arg1 ;
@end

