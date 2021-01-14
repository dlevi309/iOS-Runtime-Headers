/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithObservation:(/*^block*/id)arg1 ;
-(void)waitUntilInvalidated;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(void)_connectionInterrupted;
-(void)_connectionInvalidated;
-(void)invalidate;
-(oneway void)didObserveEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_connection;
-(void)_cleanUpConnection;
-(void)dealloc;
@end

