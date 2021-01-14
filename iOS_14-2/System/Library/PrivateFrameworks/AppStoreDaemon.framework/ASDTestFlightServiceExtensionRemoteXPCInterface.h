/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@protocol ASDTestFlightServiceExtensionRemoteXPCInterface <ASDTestFlightServiceExtensionXPCInterface>
@required
-(void)didReceivePushToken:(id)arg1 reply:(/*^block*/id)arg2;
-(void)didReceivePushMessages:(id)arg1 reply:(/*^block*/id)arg2;
-(void)didReachTerminalPhaseWithBetaBundleID:(id)arg1 terminalPhase:(long long)arg2 error:(id)arg3 reply:(/*^block*/id)arg4;
-(void)reloadAppsFromServerWithReply:(/*^block*/id)arg1;
-(void)serviceExtensionTimeWillExpire;
-(void)serviceExtensionPerformCleanup;

@end

