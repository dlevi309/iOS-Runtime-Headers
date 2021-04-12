/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, REUpNextScheduler, NSArray, NSDate, NSObject, NSMutableArray, REObserverStore;

@interface REPredictedActionServer : NSObject {

	NSXPCConnection* _connection;
	REUpNextScheduler* _scheduler;
	NSArray* _predictions;
	NSArray* _counts;
	NSDate* _firstPerformedDate;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _fetchingData;
	NSDate* _lastFetchedDate;
	NSMutableArray* _fetchCompletionBlocks;
	REObserverStore* _observers;

}
+(id)sharedInstance;
-(void)addObserver:(id)arg1 ;
-(void)_notifyObservers;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)_invalidateConnection;
-(void)_clearConnection;
-(void)dealloc;
-(void)_requestPredictions:(id)arg1 ;
-(void)_queue_fetchPredicitions;
-(void)_accessOrEnqueueDataRequest:(/*^block*/id)arg1 error:(/*^block*/id)arg2 ;
-(void)_queue_setupConnection;
-(void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_finishProcessingData;
-(void)fetchFirstPerformedActionDate:(/*^block*/id)arg1 ;
-(void)fetchPredictedActions:(/*^block*/id)arg1 ;
@end

