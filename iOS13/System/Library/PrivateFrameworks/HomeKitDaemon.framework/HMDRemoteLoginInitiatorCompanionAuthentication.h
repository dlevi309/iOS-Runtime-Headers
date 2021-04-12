/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDRemoteLoginInitiatorAuthentication.h>

@class ACAccount;

@interface HMDRemoteLoginInitiatorCompanionAuthentication : HMDRemoteLoginInitiatorAuthentication {

	ACAccount* _account;

}

@property (nonatomic,readonly) ACAccount * account;              //@synthesize account=_account - In the implementation block
+(id)logCategory;
-(void)dealloc;
-(id)description;
-(ACAccount *)account;
-(int)loginType;
-(void)_authenticate;
-(void)authenticate;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 account:(id)arg6 ;
@end

