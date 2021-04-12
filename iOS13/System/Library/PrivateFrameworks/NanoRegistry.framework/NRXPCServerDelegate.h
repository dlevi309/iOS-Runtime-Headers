/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@protocol NRXPCServerDelegate <NSObject>
@optional
-(void)xpcServer:(id)arg1 proxyWillConnect:(id)arg2;
-(void)xpcServer:(id)arg1 proxyDidDisconnect:(id)arg2;
-(void)xpcServer:(id)arg1 proxyDidSuspend:(id)arg2;
-(void)xpcServer:(id)arg1 proxyDidResume:(id)arg2;

@end

