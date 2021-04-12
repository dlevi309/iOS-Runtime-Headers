/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(AMSURLSession *)session;
-(void)setSession:(AMSURLSession *)arg1 ;
-(id)_createSession;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(id)initWithClientIdentifier:(id)arg1 ;
-(AMSMediaTokenService *)tokenService;
-(void)fetchContentForUrl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_createTokenServiceWithSession:(id)arg1 ;
-(void)setTokenService:(AMSMediaTokenService *)arg1 ;
@end

