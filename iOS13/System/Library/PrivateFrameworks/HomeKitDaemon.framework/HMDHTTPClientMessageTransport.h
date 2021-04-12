/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFHTTPClientDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFNetServiceDelegate.h>

@protocol HMFLocking, HMDHTTPClientMessageTransportDelegate;
@class NSUUID, HMFNetService, HMDHTTPDevice, HMFHTTPClient, NSString;

@interface HMDHTTPClientMessageTransport : HMFObject <HMFHTTPClientDelegate, HMFLogging, HMFNetServiceDelegate> {

	id<HMFLocking> _lock;
	BOOL _running;
	NSUUID* _sessionIdentifier;
	id<HMDHTTPClientMessageTransportDelegate> _delegate;
	NSUUID* _identifier;
	HMFNetService* _netService;
	HMDHTTPDevice* _remoteDevice;
	HMFHTTPClient* _client;

}

@property (nonatomic,readonly) HMFHTTPClient * client;                              //@synthesize client=_client - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                         //@synthesize running=_running - In the implementation block
@property (__weak) id<HMDHTTPClientMessageTransportDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) HMFNetService * netService;                          //@synthesize netService=_netService - In the implementation block
@property (nonatomic,readonly) HMDHTTPDevice * remoteDevice;                        //@synthesize remoteDevice=_remoteDevice - In the implementation block
@property (copy,readonly) NSUUID * sessionIdentifier;                               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (getter=isReachable,nonatomic,readonly) BOOL reachable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<HMDHTTPClientMessageTransportDelegate>)delegate;
-(void)setDelegate:(id<HMDHTTPClientMessageTransportDelegate>)arg1 ;
-(NSUUID *)identifier;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isRunning;
-(HMFHTTPClient *)client;
-(id)shortDescription;
-(NSUUID *)sessionIdentifier;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(id)logIdentifier;
-(BOOL)isReachable;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)client:(id)arg1 didRequestPingWithCompletionHandler:(/*^block*/id)arg2 ;
-(HMFNetService *)netService;
-(void)clientDidBecomeUnreachable:(id)arg1 ;
-(void)_stopWithError:(id)arg1 ;
-(void)netService:(id)arg1 didUpdateTXTRecord:(id)arg2 ;
-(HMDHTTPDevice *)remoteDevice;
-(void)sendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithIdentifier:(id)arg1 netService:(id)arg2 ;
-(void)_receiveMessage;
-(void)_sendResponseMessage:(id)arg1 forTransactionIdentifier:(id)arg2 ;
-(void)sendPingWithCompletionHandler:(/*^block*/id)arg1 ;
@end

