/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@protocol OS_dispatch_queue;
#import <AppleAccount/AppleAccount-Structs.h>
@class NSObject, AARemoteServerConfigurationCache, AAURLSession;

@interface AARemoteServer : NSObject {

	os_unfair_lock_s _configurationLock;
	NSObject*<OS_dispatch_queue> _configurationQueue;
	AARemoteServerConfigurationCache* _configurationCache;
	AAURLSession* _session;
	AAURLSession* _signingSession;

}

@property (nonatomic,retain) AAURLSession * session;                     //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) AAURLSession * signingSession;              //@synthesize signingSession=_signingSession - In the implementation block
+(id)sharedServer;
-(id)init;
-(AAURLSession *)session;
-(void)setSession:(AAURLSession *)arg1 ;
-(AAURLSession *)signingSession;
-(void)configurationWithCompletion:(/*^block*/id)arg1 ;
-(id)_redactedHeadersFromHTTPHeaders:(id)arg1 ;
-(void)_configurationAndResponseWithCompletion:(/*^block*/id)arg1 ;
-(void)registerAccount:(id)arg1 withHSA:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)registerAccount:(id)arg1 withHSA:(BOOL)arg2 usingCookieHeaders:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_configurationCacheInvalidatingIfNecessary;
-(void)_setConfigurationCache:(id)arg1 ;
-(void)_fetchConfigurationAndResponseWithCompletion:(/*^block*/id)arg1 ;
-(id)_configurationLock_configurationCacheInvalidatingIfNecessary;
-(void)setSigningSession:(AAURLSession *)arg1 ;
-(id)_newURLRequestWithURLString:(id)arg1 ;
-(id)_bodyDictionaryWithProtocolVersion:(id)arg1 ;
-(void)_startRequest:(id)arg1 responseClass:(Class)arg2 mainThread:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_redactedBodyStringWithPropertyList:(id)arg1 ;
-(void)authenticateAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loginDelegates:(id)arg1 parameters:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

