/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDRemoteLoginReceiverAuthentication.h>

@class HMDRemoteLoginCompanionAuthenticationRequest;

@interface HMDRemoteLoginReceiverCompanionAuthentication : HMDRemoteLoginReceiverAuthentication {

	HMDRemoteLoginCompanionAuthenticationRequest* _request;

}

@property (nonatomic,readonly) HMDRemoteLoginCompanionAuthenticationRequest * request;              //@synthesize request=_request - In the implementation block
+(id)logCategory;
-(void)dealloc;
-(id)description;
-(HMDRemoteLoginCompanionAuthenticationRequest *)request;
-(void)_authenticate;
-(void)authenticate;
-(void)_authenticateAccount:(id)arg1 alreadyExists:(BOOL)arg2 withCompanionDevice:(id)arg3 ;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 request:(id)arg6 ;
@end

