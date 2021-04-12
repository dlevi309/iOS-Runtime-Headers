/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NETunnelProvider.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NEPacketTunnelFlow, NSString;

@interface NEPacketTunnelProvider : NETunnelProvider <NSExtensionRequestHandling> {

	NEPacketTunnelFlow* _packetFlow;

}

@property (retain) NEPacketTunnelFlow * packetFlow;                 //@synthesize packetFlow=_packetFlow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)requestSocket:(BOOL)arg1 interface:(id)arg2 local:(id)arg3 remote:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NEPacketTunnelFlow *)packetFlow;
-(void)startTunnelWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopTunnelWithReason:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithVirtualInterfaceType:(long long)arg1 ;
-(void)cancelTunnelWithError:(id)arg1 ;
-(id)getTunnelInterface;
-(id)createTCPConnectionThroughTunnelToEndpoint:(id)arg1 enableTLS:(BOOL)arg2 TLSParameters:(id)arg3 delegate:(id)arg4 ;
-(id)createUDPSessionThroughTunnelToEndpoint:(id)arg1 fromEndpoint:(id)arg2 ;
-(void)setPacketFlow:(NEPacketTunnelFlow *)arg1 ;
@end

