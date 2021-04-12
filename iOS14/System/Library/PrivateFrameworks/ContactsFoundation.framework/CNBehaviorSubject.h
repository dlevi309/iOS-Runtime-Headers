/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/CNObserver.h>

@protocol CNSchedulerProvider, CNScheduler;
@class NSMutableArray, CNObservableEvent, CNObservableContractEnforcement, NSString;

@interface CNBehaviorSubject : CNObservable <CNObserver> {

	NSMutableArray* _observers;
	CNObservableEvent* _mostRecentEvent;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNScheduler> _resourceLock;
	CNObservableContractEnforcement* _enforcement;

}

@property (nonatomic,retain) NSMutableArray * observers;                                   //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) CNObservableEvent * mostRecentEvent;                          //@synthesize mostRecentEvent=_mostRecentEvent - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                  //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> resourceLock;                               //@synthesize resourceLock=_resourceLock - In the implementation block
@property (nonatomic,readonly) CNObservableContractEnforcement * enforcement;              //@synthesize enforcement=_enforcement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_addObserver:(id)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(void)_removeObserver:(id)arg1 ;
-(NSMutableArray *)observers;
-(id<CNScheduler>)resourceLock;
-(id)subscribe:(id)arg1 ;
-(void)performWithResourceLock:(/*^block*/id)arg1 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(id)resultWithResourceLock:(/*^block*/id)arg1 ;
-(void)observerDidComplete;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(CNObservableEvent *)mostRecentEvent;
-(CNObservableContractEnforcement *)enforcement;
-(void)setMostRecentEvent:(CNObservableEvent *)arg1 ;
-(id)initWithSeed:(id)arg1 schedulerProvider:(id)arg2 ;
-(void)observerDidReceiveResult:(id)arg1 ;
@end

