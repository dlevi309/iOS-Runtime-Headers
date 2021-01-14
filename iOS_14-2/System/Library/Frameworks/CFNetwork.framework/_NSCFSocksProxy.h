/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/NSProxyConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, __CFN_SocksHandshake, NSProxyConnection, NSDictionary;

@interface _NSCFSocksProxy : NSObject <NSProxyConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	int _outPort;
	NSString* _outHost;
	__CFN_SocksHandshake* _socksHandshake;
	NSProxyConnection* _inbound;
	NSProxyConnection* _outbound;
	NSDictionary* _configuration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)handleIncomingConnection:(id)arg1 queue:(id)arg2 configuration:(id)arg3 ;
-(void)connected:(int)arg1 ;
-(void)outboundConnectionReceivedData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)outboundConnectionCompleteWithError:(int)arg1 ;
-(void)cleanup;
-(void)dealloc;
@end

