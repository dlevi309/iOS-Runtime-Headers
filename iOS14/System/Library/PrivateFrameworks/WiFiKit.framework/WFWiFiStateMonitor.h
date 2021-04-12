/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCurrentNetwork:(WFNetworkScanRecord *)arg1 ;
-(WFNetworkScanRecord *)currentNetwork;
-(void)stopMonitoring;
-(void)setCallbackThread:(NSThread *)arg1 ;
-(WFClient *)client;
-(void)setClient:(WFClient *)arg1 ;
-(WFLinkQuality *)linkQuality;
-(void)setCallbackRunLoop:(NSRunLoop *)arg1 ;
-(id)init;
-(void)setLinkQuality:(WFLinkQuality *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(NSRunLoop *)callbackRunLoop;
-(NSThread *)callbackThread;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)startMonitoring;
-(void)_runManagerCallbackThread;
-(void)_updateState;
-(void)_powerStateDidChange:(id)arg1 ;
-(void)_spawnManagerCallbackThread;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(BOOL)monitoring;
-(id)handler;
-(void)_updateState:(/*^block*/id)arg1 ;
-(void)setMonitoring:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithClient:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)associatedToCarPlayOnly;
-(void)_clientConnectionRestarted:(id)arg1 ;
-(void)_interfaceBecameAvailable:(id)arg1 ;
-(void)_autoJoinStateChanged:(id)arg1 ;
-(void)_registerInterfaceObserversForInterface:(id)arg1 ;
-(void)_hostAPStateChanged:(id)arg1 ;
-(void)_linkDidChange:(id)arg1 ;
-(void)_linkQualityDidChange:(id)arg1 ;
-(void)setAssociatedToCarPlayOnly:(BOOL)arg1 ;
-(void)_notifyStateChanged:(long long)arg1 newState:(long long)arg2 ;
@end

