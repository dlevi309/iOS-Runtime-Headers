/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, _HKDelayedOperation, NSNumber;

@interface ACHAchievementProgressEngine : NSObject {

	NSHashTable* _providers;
	NSObject*<OS_dispatch_queue> _providerQueue;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _observerQueue;
	_HKDelayedOperation* _delayedOperation;
	NSNumber* _overrideDelay;

}

@property (nonatomic,retain) NSHashTable * providers;                                 //@synthesize providers=_providers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> providerQueue;              //@synthesize providerQueue=_providerQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> observerQueue;              //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,retain) _HKDelayedOperation * delayedOperation;                  //@synthesize delayedOperation=_delayedOperation - In the implementation block
@property (nonatomic,retain) NSNumber * overrideDelay;                                //@synthesize overrideDelay=_overrideDelay - In the implementation block
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(NSHashTable *)providers;
-(void)setProviders:(NSHashTable *)arg1 ;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(void)setObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setProviderQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)providerQueue;
-(void)requestProgressUpdateForProgressProvider:(id)arg1 ;
-(BOOL)shouldPopulateProgressForAchievement:(id)arg1 ;
-(BOOL)populateProgressAndGoalForAchievement:(id)arg1 ;
-(NSNumber *)overrideDelay;
-(void)_notifyObserversOfProgressUpdate;
-(_HKDelayedOperation *)delayedOperation;
-(id)_queue_providerForTemplate:(id)arg1 ;
-(void)registerProgressProvider:(id)arg1 ;
-(void)deregisterProgressProvider:(id)arg1 ;
-(unsigned long long)providerCount;
-(void)setDelayedOperation:(_HKDelayedOperation *)arg1 ;
-(void)setOverrideDelay:(NSNumber *)arg1 ;
@end

