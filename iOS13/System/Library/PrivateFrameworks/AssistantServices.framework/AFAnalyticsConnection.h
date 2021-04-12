/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFAnalyticsServiceDelegate.h>
#import <libobjc.A.dylib/AFAnalyticsService.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;
@class NSObject, NSXPCConnection, NSString;

@interface AFAnalyticsConnection : NSObject <AFAnalyticsServiceDelegate, AFAnalyticsService> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_source> _idleTimer;
	unsigned long long _numberOfEventsBeingSent;
	NSObject*<OS_dispatch_group> _group;
	BOOL _needsCleanUpConnection;

}

@property (assign) BOOL needsCleanUpConnection;                     //@synthesize needsCleanUpConnection=_needsCleanUpConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)_connection;
-(void)_idleTimerFired;
-(void)_connectionInvalidated;
-(void)_connectionInterrupted;
-(void)_stopIdleTimer;
-(void)_cleanUpConnection;
-(oneway void)stageEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_willStartSendingEvents:(id)arg1 ;
-(void)_didFinishSendingEvents:(id)arg1 ;
-(void)_sendEvents:(id)arg1 numberOfRetries:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)logInstrumentationOfType:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3 ;
-(oneway void)boostQueuedEvents:(/*^block*/id)arg1 ;
-(void)_handleFailureCallbackForEvents:(id)arg1 error:(id)arg2 numberOfRetries:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleSuccessCallbackForEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startIdleTimer;
-(void)_cleanUpConnectionIfNeeded;
-(void)setNeedsCleanUpConnection:(BOOL)arg1 ;
-(BOOL)needsCleanUpConnection;
-(oneway void)flushStagedEventsWithReply:(/*^block*/id)arg1 ;
-(oneway void)beginEventsGrouping;
-(oneway void)endEventsGrouping;
-(oneway void)stageEvent:(id)arg1 ;
-(oneway void)stageEvents:(id)arg1 ;
@end

