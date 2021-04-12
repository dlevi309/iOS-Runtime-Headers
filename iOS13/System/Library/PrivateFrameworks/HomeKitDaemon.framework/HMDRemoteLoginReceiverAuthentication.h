/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDRemoteLoginAuthentication.h>

@protocol HMDRemoteLoginReceiverAuthenticationDelegate;
@interface HMDRemoteLoginReceiverAuthentication : HMDRemoteLoginAuthentication {

	id<HMDRemoteLoginReceiverAuthenticationDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<HMDRemoteLoginReceiverAuthenticationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)logCategory;
-(id<HMDRemoteLoginReceiverAuthenticationDelegate>)delegate;
-(void)_saveRemoteVerifiedAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 workQueue:(id)arg3 remoteMessageSender:(id)arg4 delegate:(id)arg5 ;
-(void)_completedAuthenticationRequest:(id)arg1 loggedInAccount:(id)arg2 ;
-(void)_authenticateAccount:(id)arg1 targetedAccountType:(unsigned long long)arg2 ;
-(void)_authenticateStoreWithAuthenticationResults:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleAuthenticationResults:(id)arg1 error:(id)arg2 targetedAccountType:(unsigned long long)arg3 ;
-(void)_authenticateForAccountType:(unsigned long long)arg1 usingAuthenticationResults:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

