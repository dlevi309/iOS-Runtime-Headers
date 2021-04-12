/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDRemoteLoginAuthentication.h>

@protocol HMDRemoteLoginInitiatorAuthenticationDelegate;
@interface HMDRemoteLoginInitiatorAuthentication : HMDRemoteLoginAuthentication {

	id<HMDRemoteLoginInitiatorAuthenticationDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<HMDRemoteLoginInitiatorAuthenticationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)logCategory;
-(id<HMDRemoteLoginInitiatorAuthenticationDelegate>)delegate;
-(int)loginType;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 ;
-(void)_handleAuthenticationResponse:(id)arg1 error:(id)arg2 ;
-(void)authenticate;
@end

