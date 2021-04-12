/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDRemoteLoginInitiatorAuthentication.h>

@class NSDictionary;

@interface HMDRemoteLoginInitiatorProxyAuthentication : HMDRemoteLoginInitiatorAuthentication {

	NSDictionary* _authResults;

}

@property (nonatomic,readonly) NSDictionary * authResults;              //@synthesize authResults=_authResults - In the implementation block
+(id)logCategory;
-(id)description;
-(int)loginType;
-(void)dealloc;
-(void)_authenticate;
-(NSDictionary *)authResults;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 authResults:(id)arg6 ;
-(void)authenticate;
@end

