/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/


@protocol NPTunnelDelegate <NSObject>
@property (readonly) BOOL isFirstTunnel; 
@required
-(BOOL)isFirstTunnel;
-(void)tunnel:(id)arg1 flowDidFallbackWithReason:(long long)arg2;
-(void)tunnelDidConnect:(id)arg1;
-(void)tunnelIsReady:(id)arg1;
-(void)tunnelDidCancel:(id)arg1;

@end

