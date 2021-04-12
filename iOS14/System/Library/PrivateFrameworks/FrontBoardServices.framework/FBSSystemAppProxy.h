/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@class BSServiceConnectionEndpoint, BSProcessHandle;

@interface FBSSystemAppProxy : FBSServiceFacilityClient {

	BSServiceConnectionEndpoint* _endpoint;
	unsigned long long _checkoutCount;
	BSProcessHandle* _processHandle;

}
+(id)checkoutProxyWithEndpoint:(id)arg1 ;
-(void)checkin;
-(void)sendActions:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)_sendMessageType:(long long)arg1 withMessage:(/*^block*/id)arg2 withReplyHandler:(/*^block*/id)arg3 waitForReply:(BOOL)arg4 ;
-(void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(void)shutdownWithOptions:(id)arg1 ;
-(id)clientCallbackQueue;
-(void)fireCompletion:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)_handleConnect:(id)arg1 ;
-(BOOL)isPasscodeLockedOrBlocked;
-(void)setKeyboardFocusApplication:(int)arg1 deferringToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fireCompletion:(/*^block*/id)arg1 openAppErrorCode:(long long)arg2 ;
-(id)processHandleForBundleID:(id)arg1 ;
-(id)systemApplicationBundleIdentifier;
-(void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

