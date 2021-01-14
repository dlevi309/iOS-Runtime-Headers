/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
*/

#import <WiFiPeerToPeer/WiFiAwareSubscriberXPCDelegate.h>

@protocol OS_dispatch_queue, WiFiAwareSubscriberXPC, WiFiAwareSubscriberDelegate;
@class NSXPCConnection, NSObject, NSNumber, WiFiAwareSubscribeConfiguration, NSString;

@interface WiFiAwareSubscriber : NSObject <WiFiAwareSubscriberXPCDelegate> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _subscribeID;
	id<WiFiAwareSubscriberXPC> _subscriberProxy;
	id<WiFiAwareSubscriberDelegate> _delegate;
	WiFiAwareSubscribeConfiguration* _configuration;

}

@property (assign,nonatomic,__weak) id<WiFiAwareSubscriberDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WiFiAwareSubscribeConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isConnected;
-(id<WiFiAwareSubscriberDelegate>)delegate;
-(void)start;
-(void)stop;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDelegate:(id<WiFiAwareSubscriberDelegate>)arg1 ;
-(NSString *)description;
-(WiFiAwareSubscribeConfiguration *)configuration;
-(void)resetState;
-(void)dealloc;
-(void)handleError;
-(void)subscribeStartedWithInstanceID:(unsigned char)arg1 ;
-(void)subscribeTerminatedWithReason:(long long)arg1 ;
-(void)subscribeReceivedDiscoveryResult:(id)arg1 ;
-(void)subscribeLostDiscoveryResultForPublishID:(unsigned char)arg1 address:(id)arg2 ;
-(void)subscribeFailedToStartWithError:(long long)arg1 ;
-(void)subscribeReceivedMessage:(id)arg1 fromPublishID:(unsigned char)arg2 address:(id)arg3 ;
-(void)sendMessage:(id)arg1 toPeerAddress:(id)arg2 withInstanceID:(unsigned char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startSubscribeSync;
@end

