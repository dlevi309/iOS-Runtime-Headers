/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKRemoteUIController.h>

@class NSArray, NSURL, NSDictionary;

@interface GKAccountRemoteUIController : GKRemoteUIController {

	BOOL _authenticatePlayerOnCompletion;
	long long _mode;
	NSArray* _availableExternalServices;
	NSURL* _url;
	NSDictionary* _postBody;

}

@property (nonatomic,retain) NSArray * availableExternalServices;              //@synthesize availableExternalServices=_availableExternalServices - In the implementation block
@property (assign,nonatomic) long long mode;                                   //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL authenticatePlayerOnCompletion;              //@synthesize authenticatePlayerOnCompletion=_authenticatePlayerOnCompletion - In the implementation block
@property (nonatomic,retain) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDictionary * postBody;                          //@synthesize postBody=_postBody - In the implementation block
+(void)accountRemoteUIControllerForPlayer:(id)arg1 mode:(long long)arg2 url:(id)arg3 postBody:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)accountRemoteUIControllerForPlayer:(id)arg1 mode:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)fallbackURL;
-(long long)mode;
-(id)initWithMode:(long long)arg1 ;
-(void)setMode:(long long)arg1 ;
-(NSURL *)url;
-(id)initWithMode:(long long)arg1 player:(id)arg2 ;
-(void)setPostBody:(NSDictionary *)arg1 ;
-(BOOL)authenticatePlayerOnCompletion;
-(void)fireCompletionHandler;
-(void)setUrl:(NSURL *)arg1 ;
-(id)postBodyForInitialLoad;
-(NSArray *)availableExternalServices;
-(void)setAuthenticatePlayerOnCompletion:(BOOL)arg1 ;
-(void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setAvailableExternalServices:(NSArray *)arg1 ;
-(void)updatePostbackDictionary:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)postBody;
-(id)bagKey;
@end

