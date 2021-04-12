/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/


@protocol SPRemoteInterfaceProtocol <NSObject>
@optional
-(void)receiveNativeComplicationRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)replyTimingData:(id)arg1;

@required
-(void)applicationWillResignActive:(id)arg1;
-(void)applicationDidBecomeActive:(id)arg1;
-(void)receiveData:(id)arg1 fromIdentifier:(id)arg2;
-(void)applicationDidFinishConnecting:(id)arg1;
-(void)dataInterfaceDidBecomeActive:(id)arg1;
-(void)dataInterfaceWillResignActive:(id)arg1;
-(void)receiveProtoData:(id)arg1 fromIdentifier:(id)arg2;
-(void)applicationDidTerminate:(id)arg1;
-(void)applicationContentsDidReset:(id)arg1;
-(void)applicationIsStillActive;
-(void)applicationHandleWatchTaskKeys:(id)arg1 reasonForSnapshot:(unsigned long long)arg2 visibleVCID:(id)arg3 barTaskUUID:(id)arg4 clientIdentifier:(id)arg5;
-(void)applicationDidReceiveNotification:(id)arg1 clientIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)preferredContentSizeCategory:(id)arg1;
-(void)layoutDirection:(long long)arg1;

@end

