/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/HMDSecureRemoteStreamDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@protocol OS_dispatch_queue;
@class HMDDevice, NSObject, HMDRemoteDeviceMonitor, HMDAccountRegistry, NSMutableArray, NSString;

@interface HMDSecureRemoteSession : HMFMessageTransport <HMDSecureRemoteStreamDelegate, HMFLogging, HMFTimerDelegate, HMFDumpState> {

	BOOL _reachable;
	HMDDevice* _device;
	NSObject*<OS_dispatch_queue> _clientQueue;
	HMDRemoteDeviceMonitor* _deviceMonitor;
	HMDAccountRegistry* _accountRegistry;
	unsigned long long _maximumRemoteStreams;
	NSMutableArray* _pendingMessages;
	NSMutableArray* _clientStreams;
	NSMutableArray* _serverStreams;
	long long _state;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) HMDRemoteDeviceMonitor * deviceMonitor;                //@synthesize deviceMonitor=_deviceMonitor - In the implementation block
@property (nonatomic,readonly) HMDAccountRegistry * accountRegistry;                  //@synthesize accountRegistry=_accountRegistry - In the implementation block
@property (assign,nonatomic) unsigned long long maximumRemoteStreams;                 //@synthesize maximumRemoteStreams=_maximumRemoteStreams - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingMessages;                      //@synthesize pendingMessages=_pendingMessages - In the implementation block
@property (nonatomic,readonly) NSMutableArray * clientStreams;                        //@synthesize clientStreams=_clientStreams - In the implementation block
@property (nonatomic,readonly) NSMutableArray * serverStreams;                        //@synthesize serverStreams=_serverStreams - In the implementation block
@property (assign,nonatomic) long long state;                                         //@synthesize state=_state - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                       //@synthesize reachable=_reachable - In the implementation block
@property (readonly) HMDDevice * device;                                              //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(void)initialize;
+(BOOL)isSecureRemoteSessionMessage:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(BOOL)isReachable;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)timerDidFire:(id)arg1 ;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(id)dumpState;
-(void)close;
-(id)logIdentifier;
-(void)setReachable:(BOOL)arg1 ;
-(HMDDevice *)device;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(void)_closeWithError:(id)arg1 ;
-(NSMutableArray *)pendingMessages;
-(void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)dealloc;
-(HMDRemoteDeviceMonitor *)deviceMonitor;
-(HMDAccountRegistry *)accountRegistry;
-(unsigned long long)maximumRemoteStreams;
-(void)handleDeviceIsReachable:(id)arg1 ;
-(void)handleDeviceIsNotReachable:(id)arg1 ;
-(void)setMaximumRemoteStreams:(unsigned long long)arg1 ;
-(void)_openClientStreamWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableArray *)clientStreams;
-(NSMutableArray *)serverStreams;
-(id)_clientStreamForMessage:(id)arg1 ;
-(void)_queueMessage:(id)arg1 ;
-(void)_handleSecureClientMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3 ;
-(void)_handleSecureServerMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3 ;
-(void)_handleStreamInvalidationMessage:(id)arg1 ;
-(id)_serverStreamWithIdentifier:(id)arg1 ;
-(void)_openServerStreamWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_clientStreamWithIdentiifer:(id)arg1 ;
-(id)_dequeMessage;
-(void)_closeClientStream:(id)arg1 error:(id)arg2 ;
-(void)_closeServerStream:(id)arg1 error:(id)arg2 ;
-(void)secureRemoteStream:(id)arg1 receivedRequestToSendMessage:(id)arg2 ;
-(void)secureRemoteStreamIsIdle:(id)arg1 ;
-(void)secureRemoteStream:(id)arg1 didCloseWithError:(id)arg2 ;
-(id)initWithDevice:(id)arg1 deviceMonitor:(id)arg2 accountRegistry:(id)arg3 ;
-(void)receivedSecureMessage:(id)arg1 fromDevice:(id)arg2 fromTransport:(id)arg3 ;
@end

