/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol OS_dispatch_queue;
@class WFLinkQuality, NSObject, WFNetworkScanRecord, WFClient, NSRunLoop, NSThread;

@interface WFWiFiStateMonitor : NSObject {

	BOOL _monitoring;
	BOOL _associatedToCarPlayOnly;
	long long _state;
	/*^block*/id _handler;
	WFLinkQuality* _linkQuality;
	NSObject*<OS_dispatch_queue> _internalQueue;
	WFNetworkScanRecord* _currentNetwork;
	WFClient* _client;
	NSRunLoop* _callbackRunLoop;
	NSThread* _callbackThread;

}

@property (assign,nonatomic) long long state;                                   //@synthesize state=_state - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> internalQueue;                  //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,copy) WFLinkQuality * linkQuality;                         //@synthesize linkQuality=_linkQuality - In the implementation block
@property (nonatomic,retain) WFNetworkScanRecord * currentNetwork;              //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (assign) BOOL monitoring;                                             //@synthesize monitoring=_monitoring - In the implementation block
@property (assign) BOOL associatedToCarPlayOnly;                                //@synthesize associatedToCarPlayOnly=_associatedToCarPlayOnly - In the implementation block
@property (nonatomic,retain) WFClient * client;                                 //@synthesize client=_client - In the implementation block
@property (assign) NSRunLoop * callbackRunLoop;                                 //@synthesize callbackRunLoop=_callbackRunLoop - In the implementation block
@property (nonatomic,retain) NSThread * callbackThread;                         //@synthesize callbackThread=_callbackThread - In the implementation block
@property (copy) id handler;                                                    //@synthesize handler=_handler - In the implementation block
-(id)init;
-(void)dealloc;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(long long)state;
-(WFClient *)client;
-(void)setClient:(WFClient *)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)setCurrentNetwork:(WFNetworkScanRecord *)arg1 ;
-(WFNetworkScanRecord *)currentNetwork;
-(void)startMonitoring;
-(void)stopMonitoring;
-(void)_updateState;
-(WFLinkQuality *)linkQuality;
-(void)setLinkQuality:(WFLinkQuality *)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMonitoring:(BOOL)arg1 ;
-(void)_updateState:(/*^block*/id)arg1 ;
-(void)_powerStateDidChange:(id)arg1 ;
-(id)initWithClient:(id)arg1 handler:(/*^block*/id)arg2 ;
-(NSThread *)callbackThread;
-(void)setCallbackThread:(NSThread *)arg1 ;
-(NSRunLoop *)callbackRunLoop;
-(void)setCallbackRunLoop:(NSRunLoop *)arg1 ;
-(BOOL)associatedToCarPlayOnly;
-(BOOL)monitoring;
-(void)_clientConnectionRestarted:(id)arg1 ;
-(void)_interfaceBecameAvailable:(id)arg1 ;
-(void)_autoJoinStateChanged:(id)arg1 ;
-(void)_registerInterfaceObserversForInterface:(id)arg1 ;
-(void)_spawnManagerCallbackThread;
-(void)_runManagerCallbackThread;
-(void)_hostAPStateChanged:(id)arg1 ;
-(void)_linkDidChange:(id)arg1 ;
-(void)_linkQualityDidChange:(id)arg1 ;
-(void)setAssociatedToCarPlayOnly:(BOOL)arg1 ;
-(void)_notifyStateChanged:(long long)arg1 newState:(long long)arg2 ;
@end

