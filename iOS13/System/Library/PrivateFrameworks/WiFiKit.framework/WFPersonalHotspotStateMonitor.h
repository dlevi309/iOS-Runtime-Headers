/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol OS_dispatch_queue;
@class WFClient, NSObject, NSRunLoop, NSThread;

@interface WFPersonalHotspotStateMonitor : NSObject {

	WFClient* _client;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSRunLoop* _callbackRunLoop;
	NSThread* _callbackThread;

}

@property (nonatomic,retain) WFClient * client;                                       //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign) NSRunLoop * callbackRunLoop;                                       //@synthesize callbackRunLoop=_callbackRunLoop - In the implementation block
@property (nonatomic,retain) NSThread * callbackThread;                               //@synthesize callbackThread=_callbackThread - In the implementation block
-(id)init;
-(void)dealloc;
-(WFClient *)client;
-(void)setClient:(WFClient *)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSThread *)callbackThread;
-(void)setCallbackThread:(NSThread *)arg1 ;
-(NSRunLoop *)callbackRunLoop;
-(void)setCallbackRunLoop:(NSRunLoop *)arg1 ;
-(void)asyncMISDiscoveryState:(/*^block*/id)arg1 ;
-(void)setMISDiscoveryState:(BOOL)arg1 immediateDisable:(BOOL)arg2 ;
-(void)_spawnManagerCallbackThread;
-(void)_runManagerCallbackThread;
@end

