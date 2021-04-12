/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/

#import <AttentionAwareness/AttentionAwareness-Structs.h>
#import <libobjc.A.dylib/AWAttentionAwareService.h>

@protocol AWAttentionAwareService
@required
-(void)crashWithReply:(/*^block*/id)arg1;
-(void)getUnitTestSamplerWithReply:(/*^block*/id)arg1;
-(void)setDebugPreference:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getSupportedEventsWithReply:(/*^block*/id)arg1;
-(void)getDebugPreferences:(/*^block*/id)arg1;
-(void)addClient:(id)arg1 clientConfig:(id)arg2 clientIndex:(int)arg3 unitTestMode:(BOOL)arg4 reply:(/*^block*/id)arg5;
-(void)outputPowerLogWithReply:(/*^block*/id)arg1;

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
-(void)crashWithReply:(/*^block*/id)arg1 ;
-(id)init;
-(void)getUnitTestSamplerWithReply:(/*^block*/id)arg1 ;
-(unsigned long long)clientCount;
-(void)setClientCount:(unsigned long long)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setSmartCoverClosed:(BOOL)arg1 ;
-(void)clientCountChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 forScheduler:(id)arg3 ;
-(void)setDebugPreference:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_createUnitTestScheduler;
-(void)getSupportedEventsWithReply:(/*^block*/id)arg1 ;
-(void)getDebugPreferences:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)addClient:(id)arg1 clientConfig:(id)arg2 clientIndex:(int)arg3 unitTestMode:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
-(void)processHIDEvent:(IOHIDEventRef)arg1 mask:(unsigned long long)arg2 timestamp:(unsigned long long)arg3 ;
-(void)outputPowerLogWithReply:(/*^block*/id)arg1 ;
@end

