/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriObservation.framework/SiriObservation
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSHashTable, MTTimerManager, SOTimersSnapshot, NSString;

@interface SOTimersPublisher : NSObject {

	NSObject*<OS_dispatch_queue> _timersPublisherQueue;
	NSObject*<OS_dispatch_group> _timersPublisherDispatchGroup;
	NSHashTable* _subscribers;
	MTTimerManager* _timerManager;
	SOTimersSnapshot* _timerSnapshot;
	NSString* _typeName;

}

@property (nonatomic,readonly) NSString * typeName;              //@synthesize typeName=_typeName - In the implementation block
-(id)init;
-(void)addSubscriber:(id)arg1 ;
-(void)timerFired:(id)arg1 ;
-(NSString *)typeName;
-(void)timersRemoved:(id)arg1 ;
-(void)removeSubscriber:(id)arg1 ;
-(void)timersAdded:(id)arg1 ;
-(void)timersUpdated:(id)arg1 ;
-(void)_startObserving;
-(void)stateReset:(id)arg1 ;
-(void)firingTimerChanged:(id)arg1 ;
-(void)firingTimerDismissed:(id)arg1 ;
-(void)dealloc;
-(void)_createNewSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)getCurrentSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)_notifySubscribersOfEvent:(long long)arg1 ;
@end

