/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEVPNConnection.h>

@interface NETunnelProviderSession : NEVPNConnection
-(BOOL)startTunnelWithOptions:(id)arg1 andReturnError:(id*)arg2 ;
-(void)stopTunnel;
-(BOOL)sendProviderMessage:(id)arg1 returnError:(id*)arg2 responseHandler:(/*^block*/id)arg3 ;
@end

