/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDHTTPServerMessageTransportDelegate <NSObject>
@required
-(void)server:(id)arg1 didStopWithError:(id)arg2;
-(void)server:(id)arg1 didAddDevice:(id)arg2;
-(void)server:(id)arg1 didRemoveDevice:(id)arg2;
-(void)server:(id)arg1 didReceiveMessage:(id)arg2 fromDevice:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

