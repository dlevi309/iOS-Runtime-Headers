/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/


@protocol NPTunnelDelegate <NSObject>
@property (readonly) BOOL isFirstTunnel; 
@required
-(void)tunnelDidConnect:(id)arg1;
-(void)tunnel:(id)arg1 flowDidFallbackWithReason:(long long)arg2;
-(void)tunnelIsReady:(id)arg1;
-(BOOL)isFirstTunnel;
-(void)tunnelDidCancel:(id)arg1;

@end

