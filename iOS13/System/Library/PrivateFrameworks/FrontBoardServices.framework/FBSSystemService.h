/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@class FBSSystemAppProxy, FBSOpenApplicationService;

@interface FBSSystemService : NSObject {

	FBSSystemAppProxy* _systemAppProxy;
	FBSOpenApplicationService* _defaultOpenApplicationService;

}
+(id)sharedService;
+(id)clientCallbackQueue;
-(id)init;
-(void)dealloc;
-(id)initWithEndpoint:(id)arg1 ;
-(void)openApplication:(id)arg1 options:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(BOOL)isPasscodeLockedOrBlocked;
-(void)sendActions:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(BOOL)canOpenApplication:(id)arg1 reason:(long long*)arg2 ;
-(void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned)arg3 withResult:(/*^block*/id)arg4 ;
-(unsigned)createClientPort;
-(void)cleanupClientPort:(unsigned)arg1 ;
-(int)pidForApplication:(id)arg1 ;
-(id)systemApplicationBundleIdentifier;
-(void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)shutdownWithOptions:(id)arg1 ;
-(void)setKeyboardFocusApplicationPID:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)setKeyboardFocusApplicationPID:(int)arg1 deferringToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 ;
-(void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(BOOL)arg3 withDescription:(id)arg4 ;
-(void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned)arg4 withResult:(/*^block*/id)arg5 ;
-(id)processHandleForApplication:(id)arg1 ;
-(id)badgeValueForBundleID:(id)arg1 ;
-(void)setBadgeValue:(id)arg1 forBundleID:(id)arg2 ;
-(void)dataResetWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reboot;
-(void)shutdown;
-(void)setKeyboardFocusApplicationWithBundleID:(id)arg1 pid:(int)arg2 completion:(/*^block*/id)arg3 ;
@end

