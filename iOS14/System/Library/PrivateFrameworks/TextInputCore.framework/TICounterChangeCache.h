/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSMutableSet;

@interface TICounterChangeCache : NSObject {

	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableSet* _referencedCounters;
	BOOL _userModelRateLimitingDisabled;
	double _timeOfLastPersist;

}
-(id)init;
-(void)close;
-(void)queueCompletionHandler:(/*^block*/id)arg1 ;
-(void)persistForDate:(id)arg1 ;
-(void)addCounterReferencesForMetric:(id)arg1 withRegistry:(id)arg2 ;
-(void)loadReferencedCounters;
-(void)keyboardDidSuspendForDate:(id)arg1 ;
-(void)addStatisticChanges:(id)arg1 withContext:(id)arg2 ;
@end

