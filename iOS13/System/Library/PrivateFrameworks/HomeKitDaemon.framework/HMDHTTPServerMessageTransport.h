/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFHTTPServerDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMDHTTPServerMessageTransportDelegate;
@class HMFUnfairLock, NSMutableArray, HMFHTTPServer, NSUUID, NSArray, NSDictionary, NSString;

@interface HMDHTTPServerMessageTransport : HMFObject <HMFHTTPServerDelegate, HMFTimerDelegate> {

	HMFUnfairLock* _lock;
	NSMutableArray* _clientConnections;
	HMFHTTPServer* _server;
	id<HMDHTTPServerMessageTransportDelegate> _delegate;
	NSUUID* _identifier;

}

@property (nonatomic,readonly) HMFHTTPServer * server;                              //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) NSArray * clientConnections; 
@property (__weak) id<HMDHTTPServerMessageTransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * devices; 
@property (nonatomic,copy,readonly) NSDictionary * TXTRecord; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
+(id)maximumSupportedProtocolVersion;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<HMDHTTPServerMessageTransportDelegate>)delegate;
-(void)setDelegate:(id<HMDHTTPServerMessageTransportDelegate>)arg1 ;
-(NSUUID *)identifier;
-(void)stop;
-(HMFHTTPServer *)server;
-(NSArray *)devices;
-(id)shortDescription;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)server:(id)arg1 didOpenConnection:(id)arg2 ;
-(void)server:(id)arg1 didCloseConnection:(id)arg2 ;
-(void)_stopWithError:(id)arg1 ;
-(void)server:(id)arg1 didStopWithError:(id)arg2 ;
-(BOOL)server:(id)arg1 shouldAcceptConnection:(id)arg2 ;
-(NSDictionary *)TXTRecord;
-(void)setTXTRecordValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeTXTRecordValueForKey:(id)arg1 ;
-(NSArray *)clientConnections;
-(void)removeClientConnection:(id)arg1 ;
-(void)sendMessage:(id)arg1 toDevices:(id)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithServerIdentifier:(id)arg1 ;
-(void)confirmDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)__registerReceiveMessageHandler;
-(void)__registerSendResponseHandler;
-(void)__registerSendMessageHandler;
-(void)__registerPingHandler;
-(void)removeAllClientConnections;
-(id)_clientConnectionForDevice:(id)arg1 ;
-(void)addClientConnection:(id)arg1 ;
@end

