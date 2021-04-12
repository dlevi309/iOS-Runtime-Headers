/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDHTTPServerMessageTransportDelegate <NSObject>
@required
-(void)server:(id)arg1 didStopWithError:(id)arg2;
-(void)server:(id)arg1 didAddDevice:(id)arg2;
-(void)server:(id)arg1 didRemoveDevice:(id)arg2;
-(void)server:(id)arg1 didReceiveMessage:(id)arg2 fromDevice:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end

