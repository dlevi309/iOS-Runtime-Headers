/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDRemoteLoginReceiverAuthentication.h>

@class HMDRemoteLoginCompanionAuthenticationRequest;

@interface HMDRemoteLoginReceiverCompanionAuthentication : HMDRemoteLoginReceiverAuthentication {

	HMDRemoteLoginCompanionAuthenticationRequest* _request;

}

@property (nonatomic,readonly) HMDRemoteLoginCompanionAuthenticationRequest * request;              //@synthesize request=_request - In the implementation block
+(id)logCategory;
-(HMDRemoteLoginCompanionAuthenticationRequest *)request;
-(id)description;
-(void)dealloc;
-(void)_authenticate;
-(void)authenticate;
-(void)_authenticateAccount:(id)arg1 alreadyExists:(BOOL)arg2 withCompanionDevice:(id)arg3 ;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 request:(id)arg6 ;
@end

