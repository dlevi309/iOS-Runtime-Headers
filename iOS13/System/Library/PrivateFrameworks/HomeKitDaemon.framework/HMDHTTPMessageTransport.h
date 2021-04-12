/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDRemoteMessageTransport.h>
#import <libobjc.A.dylib/HMDHTTPClientMessageTransportDelegate.h>
#import <libobjc.A.dylib/HMDHTTPServerMessageTransportDelegate.h>
#import <libobjc.A.dylib/HMFNetServiceBrowserDelegate.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary, NSMutableArray, HMDHTTPDevice, HMDHTTPServerMessageTransport, HMFNetServiceBrowser, NSArray, NSDictionary, NSString;

@interface HMDHTTPMessageTransport : HMDRemoteMessageTransport <HMDHTTPClientMessageTransportDelegate, HMDHTTPServerMessageTransportDelegate, HMFNetServiceBrowserDelegate> {

	id<HMFLocking> _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _residentDevices;
	NSMutableSet* _transientDevices;
	NSMutableDictionary* _txtRecord;
	NSMutableArray* _clientTransports;
	BOOL _serverEnabled;
	HMDHTTPDevice* _currentDevice;
	HMDHTTPServerMessageTransport* _serverTransport;
	HMFNetServiceBrowser* _clientBrowser;

}

@property (nonatomic,readonly) HMDHTTPServerMessageTransport * serverTransport;              //@synthesize serverTransport=_serverTransport - In the implementation block
@property (nonatomic,readonly) HMFNetServiceBrowser * clientBrowser;                         //@synthesize clientBrowser=_clientBrowser - In the implementation block
@property (nonatomic,readonly) NSArray * clientTransports; 
@property (nonatomic,readonly) HMDHTTPDevice * currentDevice;                                //@synthesize currentDevice=_currentDevice - In the implementation block
@property (getter=isServerEnabled) BOOL serverEnabled;                                       //@synthesize serverEnabled=_serverEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * TXTRecord; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
+(id)protocolVersion;
+(id)logCategory;
+(unsigned long long)restriction;
+(BOOL)shouldHostMessageServer;
+(BOOL)protocolVersionSupportsExtendedMessages:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(long long)qualityOfService;
-(HMDHTTPDevice *)currentDevice;
-(id)shortDescription;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)logIdentifier;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didAddService:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 ;
-(void)server:(id)arg1 didStopWithError:(id)arg2 ;
-(NSDictionary *)TXTRecord;
-(void)setTXTRecordValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeTXTRecordValueForKey:(id)arg1 ;
-(void)setCurrentDevice:(HMDHTTPDevice *)arg1 ;
-(BOOL)canSendMessage:(id)arg1 ;
-(id)initWithAccountRegistry:(id)arg1 clientBrowser:(id)arg2 ;
-(id)initWithAccountRegistry:(id)arg1 ;
-(id)clientTransportForDevice:(id)arg1 ;
-(id)_serviceForDevice:(id)arg1 ;
-(HMDHTTPServerMessageTransport *)serverTransport;
-(BOOL)isDeviceConnected:(id)arg1 ;
-(void)_sendMessage:(id)arg1 destination:(id)arg2 timeout:(double)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_connectToDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)deviceForHTTPDevice:(id)arg1 ;
-(void)handleServerEnabled:(BOOL)arg1 ;
-(void)_startServerWithDevice:(id)arg1 ;
-(void)_stopServer;
-(HMFNetServiceBrowser *)clientBrowser;
-(NSArray *)clientTransports;
-(void)removeAllClientTransports;
-(BOOL)isServerEnabled;
-(void)setServerTransport:(HMDHTTPServerMessageTransport *)arg1 ;
-(void)addClientTransport:(id)arg1 ;
-(void)_handleReceivedRequestMessage:(id)arg1 fromDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)clientTransportForService:(id)arg1 ;
-(void)removeClientTransport:(id)arg1 ;
-(void)client:(id)arg1 didStopWithError:(id)arg2 ;
-(void)client:(id)arg1 didReceiveMessage:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)server:(id)arg1 didAddDevice:(id)arg2 ;
-(void)server:(id)arg1 didRemoveDevice:(id)arg2 ;
-(void)server:(id)arg1 didReceiveMessage:(id)arg2 fromDevice:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setServerEnabled:(BOOL)arg1 ;
-(void)configureWithDevice:(id)arg1 ;
@end

