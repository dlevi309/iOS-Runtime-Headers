/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, PLChangeStore;

@interface PLChangeHub : NSObject {

	BOOL _didInitializeState;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	NSObject*<OS_dispatch_queue> _eventsSerializationQueue;
	PLChangeStore* _changeStore;

}
+(id)sharedChangeHub;
+(unsigned long long)currentInMemoryEventIndex;
+(void)setCurrentInMemoryEventIndex:(unsigned long long)arg1 ;
-(void)sendPendingEventsForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearChangeStore:(/*^block*/id)arg1 ;
-(void)_onEventsQueueAsyncWithTransaction:(id)arg1 perform:(/*^block*/id)arg2 ;
-(void)_startListeningToMemoryPressureEvents;
-(unsigned long long)_inq_currentEventIndex;
-(void)fetchCurrentEventIndexWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)eventsSinceIndex:(unsigned long long)arg1 filteredBy:(/*^block*/id)arg2 onQueue:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)_inq_sendPendingEventsForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
@end

