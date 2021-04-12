/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDRemoteLoginInitiatorSession.h>

@class HMDRemoteLoginInitiatorAuthentication;

@interface HMDRemoteLoginInitiatorAuthenticationSession : HMDRemoteLoginInitiatorSession {

	HMDRemoteLoginInitiatorAuthentication* _remoteAuthentication;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) HMDRemoteLoginInitiatorAuthentication * remoteAuthentication;              //@synthesize remoteAuthentication=_remoteAuthentication - In the implementation block
@property (nonatomic,readonly) id completion;                                                             //@synthesize completion=_completion - In the implementation block
-(void)dealloc;
-(id)description;
-(id)completion;
-(HMDRemoteLoginInitiatorAuthentication *)remoteAuthentication;
-(id)initWithSessionID:(id)arg1 remoteAuthentication:(id)arg2 completion:(/*^block*/id)arg3 home:(id)arg4 ;
@end

