/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDRemoteLoginInitiatorAuthentication.h>

@class NSDictionary;

@interface HMDRemoteLoginInitiatorProxyAuthentication : HMDRemoteLoginInitiatorAuthentication {

	NSDictionary* _authResults;

}

@property (nonatomic,readonly) NSDictionary * authResults;              //@synthesize authResults=_authResults - In the implementation block
+(id)logCategory;
-(void)dealloc;
-(id)description;
-(int)loginType;
-(void)_authenticate;
-(NSDictionary *)authResults;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 authResults:(id)arg6 ;
-(void)authenticate;
@end

