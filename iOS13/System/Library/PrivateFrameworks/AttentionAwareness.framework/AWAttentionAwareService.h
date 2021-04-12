/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/

#import <AttentionAwareness/AttentionAwareness-Structs.h>
#import <libobjc.A.dylib/AWAttentionAwareService.h>

@protocol AWAttentionAwareService
@required
-(void)addClient:(id)arg1 clientConfig:(id)arg2 clientIndex:(int)arg3 unitTestMode:(BOOL)arg4 reply:(/*^block*/id)arg5;
-(void)getSupportedEventsWithReply:(/*^block*/id)arg1;
-(void)getDebugPreferences:(/*^block*/id)arg1;
-(void)setDebugPreference:(id)arg1 reply:(/*^block*/id)arg2;
-(void)outputPowerLogWithReply:(/*^block*/id)arg1;
-(void)getUnitTestSamplerWithReply:(/*^block*/id)arg1;
-(void)crashWithReply:(/*^block*/id)arg1;

@end

#import <libobjc.A.dylib/AWSchedulerObserver.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, AWScheduler, NSMutableArray, NSString;

@interface AWAttentionAwareService : NSObject <AWAttentionAwareService, AWSchedulerObserver, NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	AWScheduler* _unitTestScheduler;
	NSMutableArray* _schedulers;
	int _supportedEventsNotify;
	unsigned long long _supportedEvents;
	unsigned long long _clientCount;

}

@property (assign) unsigned long long clientCount;                  //@synthesize clientCount=_clientCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAttentionService;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(unsigned long long)clientCount;
-(void)setClientCount:(unsigned long long)arg1 ;
-(void)processHIDEvent:(IOHIDEventRef)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3 ;
-(void)setSmartCoverClosed:(BOOL)arg1 ;
-(void)clientCountChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forScheduler:(id)arg3 ;
-(void)addClient:(id)arg1 clientConfig:(id)arg2 clientIndex:(int)arg3 unitTestMode:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
-(void)getSupportedEventsWithReply:(/*^block*/id)arg1 ;
-(void)getDebugPreferences:(/*^block*/id)arg1 ;
-(void)setDebugPreference:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)outputPowerLogWithReply:(/*^block*/id)arg1 ;
-(void)getUnitTestSamplerWithReply:(/*^block*/id)arg1 ;
-(void)crashWithReply:(/*^block*/id)arg1 ;
-(void)_createUnitTestScheduler;
@end

