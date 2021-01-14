/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/


@protocol CWFXPCRequestProxyDelegate <NSObject>
@required
-(void)XPCRequestProxy:(id)arg1 XPCConnection:(id)arg2 canceledXPCRequestsWithUUID:(id)arg3;
-(void)XPCRequestProxy:(id)arg1 invalidatedXPCConnection:(id)arg2;
-(void)XPCRequestProxy:(id)arg1 XPCConnection:(id)arg2 receivedXPCRequest:(id)arg3;
-(void)XPCRequestProxy:(id)arg1 sendXPCEvent:(id)arg2 reply:(/*^block*/id)arg3;

@end

