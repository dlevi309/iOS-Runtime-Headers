/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class AMSURLSession, AMSMediaTokenService, NSString;

@interface VUIMediaAPIClient : NSObject {

	AMSURLSession* _session;
	AMSMediaTokenService* _tokenService;
	NSString* _clientIdentifier;

}

@property (nonatomic,retain) AMSURLSession * session;                          //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) AMSMediaTokenService * tokenService;              //@synthesize tokenService=_tokenService - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;                      //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
+(id)sharedInstance;
+(void)initializeWithAppleTVClientIdentifier;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 ;
-(AMSURLSession *)session;
-(void)setSession:(AMSURLSession *)arg1 ;
-(AMSMediaTokenService *)tokenService;
-(NSString *)clientIdentifier;
-(void)fetchContentForUrl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_createSession;
-(id)_createTokenServiceWithSession:(id)arg1 ;
-(void)setTokenService:(AMSMediaTokenService *)arg1 ;
@end

