/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCallbackThread:(NSThread *)arg1 ;
-(WFClient *)client;
-(void)setClient:(WFClient *)arg1 ;
-(void)setCallbackRunLoop:(NSRunLoop *)arg1 ;
-(id)init;
-(NSRunLoop *)callbackRunLoop;
-(NSThread *)callbackThread;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setMISDiscoveryState:(BOOL)arg1 immediateDisable:(BOOL)arg2 ;
-(void)_runManagerCallbackThread;
-(void)asyncMISDiscoveryState:(/*^block*/id)arg1 ;
-(void)_spawnManagerCallbackThread;
-(void)dealloc;
@end

