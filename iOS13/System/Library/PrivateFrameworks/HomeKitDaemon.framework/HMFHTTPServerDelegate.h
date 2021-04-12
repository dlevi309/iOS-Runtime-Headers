/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMFHTTPServerDelegate <NSObject>
@required
-(void)server:(id)arg1 didOpenConnection:(id)arg2;
-(void)server:(id)arg1 didCloseConnection:(id)arg2;
-(void)server:(id)arg1 didStopWithError:(id)arg2;
-(BOOL)server:(id)arg1 shouldAcceptConnection:(id)arg2;

@end

