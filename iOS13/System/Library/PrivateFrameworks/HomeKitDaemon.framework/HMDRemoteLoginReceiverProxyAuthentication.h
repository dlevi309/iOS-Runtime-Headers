/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDRemoteLoginReceiverAuthentication.h>

@class HMDRemoteLoginProxyAuthenticationRequest;

@interface HMDRemoteLoginReceiverProxyAuthentication : HMDRemoteLoginReceiverAuthentication {

	HMDRemoteLoginProxyAuthenticationRequest* _request;

}

@property (nonatomic,readonly) HMDRemoteLoginProxyAuthenticationRequest * request;              //@synthesize request=_request - In the implementation block
+(id)logCategory;
-(void)dealloc;
-(id)description;
-(HMDRemoteLoginProxyAuthenticationRequest *)request;
-(void)_authenticate;
-(void)authenticate;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 request:(id)arg6 ;
@end

