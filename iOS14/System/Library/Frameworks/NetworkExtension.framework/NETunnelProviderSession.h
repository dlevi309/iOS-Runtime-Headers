/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEVPNConnection.h>

@interface NETunnelProviderSession : NEVPNConnection
-(void)stopTunnel;
-(BOOL)startTunnelWithOptions:(id)arg1 andReturnError:(id*)arg2 ;
-(BOOL)sendProviderMessage:(id)arg1 returnError:(id*)arg2 responseHandler:(/*^block*/id)arg3 ;
@end

