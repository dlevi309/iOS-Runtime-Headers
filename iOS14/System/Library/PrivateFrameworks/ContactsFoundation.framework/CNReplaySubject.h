/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/CNObserver.h>

@protocol CNSchedulerProvider, CNScheduler;
@class NSMutableArray, _CNObservableEventBufferingStrategy, CNObservableContractEnforcement, NSString;

@interface CNReplaySubject : CNObservable <CNObserver> {

	NSMutableArray* _observers;
	_CNObservableEventBufferingStrategy* _recentEventStrategy;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNScheduler> _resourceLock;
	CNObservableContractEnforcement* _enforcement;

}

@property (nonatomic,readonly) NSMutableArray * observers;                                           //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) _CNObservableEventBufferingStrategy * recentEventStrategy;              //@synthesize recentEventStrategy=_recentEventStrategy - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                            //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> resourceLock;                                         //@synthesize resourceLock=_resourceLock - In the implementation block
@property (nonatomic,readonly) CNObservableContractEnforcement * enforcement;                        //@synthesize enforcement=_enforcement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CNSchedulerProvider>)schedulerProvider;
-(void)_removeObserver:(id)arg1 ;
-(NSMutableArray *)observers;
-(id)init;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(id<CNScheduler>)resourceLock;
-(id)subscribe:(id)arg1 ;
-(void)performWithResourceLock:(/*^block*/id)arg1 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(id)resultWithResourceLock:(/*^block*/id)arg1 ;
-(void)observerDidComplete;
-(CNObservableContractEnforcement *)enforcement;
-(void)observerDidReceiveResult:(id)arg1 ;
-(id)initWithQueue:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)resourceLock_upToDateObserverFromObserver:(id)arg1 ;
-(_CNObservableEventBufferingStrategy *)recentEventStrategy;
-(void)resourceLock_scheduleReplayToObserver:(id)arg1 ;
-(id)resourceLock_removeAllObservers;
-(void)setRecentEventStrategy:(_CNObservableEventBufferingStrategy *)arg1 ;
-(void)resourceLock_swapBufferingStrategiesGivenNewTerminatingEvent:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 schedulerProvider:(id)arg2 ;
@end

