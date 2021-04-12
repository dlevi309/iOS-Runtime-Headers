/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/NSProxyConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, SocksHandshake, NSProxyConnection, NSDictionary;

@interface _NSCFSocksProxy : NSObject <NSProxyConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	int _outPort;
	NSString* _outHost;
	SocksHandshake* _socksHandshake;
	NSProxyConnection* _inbound;
	NSProxyConnection* _outbound;
	NSDictionary* _configuration;

}

@property (retain) NSProxyConnection * inbound;                     //@synthesize inbound=_inbound - In the implementation block
@property (retain) NSProxyConnection * outbound;                    //@synthesize outbound=_outbound - In the implementation block
@property (retain) NSDictionary * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)handleIncomingConnection:(id)arg1 queue:(id)arg2 configuration:(id)arg3 ;
+(id)proxyServers;
-(void)dealloc;
-(void)cleanup;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(void)connected:(int)arg1 ;
-(void)outboundConnectionReceivedData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)outboundConnectionCompleteWithError:(int)arg1 ;
-(id)initWithConnection:(id)arg1 queue:(id)arg2 ;
-(void)handshakeRead;
-(void)readInbound;
-(void)readOutbound;
-(NSProxyConnection *)inbound;
-(void)setInbound:(NSProxyConnection *)arg1 ;
-(NSProxyConnection *)outbound;
-(void)setOutbound:(NSProxyConnection *)arg1 ;
@end

