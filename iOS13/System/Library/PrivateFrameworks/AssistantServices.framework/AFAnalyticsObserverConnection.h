/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFAnalyticsObserver.h>
#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, NSXPCConnection, NSString;

@interface AFAnalyticsObserverConnection : NSObject <AFAnalyticsObserver, AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSXPCConnection* _connection;
	/*^block*/id _observation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id)_connection;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(void)_connectionInvalidated;
-(void)_connectionInterrupted;
-(oneway void)didObserveEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cleanUpConnection;
-(id)initWithObservation:(/*^block*/id)arg1 ;
-(void)waitUntilInvalidated;
@end

