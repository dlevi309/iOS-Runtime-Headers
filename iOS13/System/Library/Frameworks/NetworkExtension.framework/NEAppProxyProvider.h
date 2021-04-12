/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NETunnelProvider.h>

@interface NEAppProxyProvider : NETunnelProvider
-(BOOL)handleNewFlow:(id)arg1 ;
-(void)startProxyWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopProxyWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelProxyWithError:(id)arg1 ;
-(BOOL)handleNewUDPFlow:(id)arg1 initialRemoteEndpoint:(id)arg2 ;
@end

