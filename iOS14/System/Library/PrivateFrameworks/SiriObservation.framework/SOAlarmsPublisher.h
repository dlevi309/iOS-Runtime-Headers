/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriObservation.framework/SiriObservation
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSHashTable, MTAlarmManager, SOAlarmsSnapshot, NSMutableOrderedSet, NSString;

@interface SOAlarmsPublisher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	NSHashTable* _subscribers;
	MTAlarmManager* _alarmManager;
	SOAlarmsSnapshot* _alarmsSnapshot;
	NSMutableOrderedSet* _dismissedAlarms;
	NSString* _typeName;

}

@property (nonatomic,readonly) NSString * typeName;              //@synthesize typeName=_typeName - In the implementation block
-(void)firingAlarmChanged:(id)arg1 ;
-(id)init;
-(void)firingAlarmDismissed:(id)arg1 ;
-(void)alarmsAdded:(id)arg1 ;
-(void)alarmFired:(id)arg1 ;
-(void)addSubscriber:(id)arg1 ;
-(NSString *)typeName;
-(void)alarmsRemoved:(id)arg1 ;
-(void)removeSubscriber:(id)arg1 ;
-(void)alarmsUpdated:(id)arg1 ;
-(void)_startObserving;
-(void)stateReset:(id)arg1 ;
-(void)dealloc;
-(void)_createNewSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)getCurrentSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)_notifySubscribersOfEvent:(long long)arg1 ;
@end

