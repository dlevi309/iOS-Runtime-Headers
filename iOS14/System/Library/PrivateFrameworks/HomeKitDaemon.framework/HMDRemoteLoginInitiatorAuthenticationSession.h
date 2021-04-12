/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HMDRemoteLoginInitiatorAuthentication *)remoteAuthentication;
-(id)completion;
-(id)description;
-(void)dealloc;
-(id)initWithSessionID:(id)arg1 remoteAuthentication:(id)arg2 completion:(/*^block*/id)arg3 home:(id)arg4 ;
@end

