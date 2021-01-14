/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTScheduledListDelegate;
@class NSMutableOrderedSet, NSMutableDictionary, NSArray;

@interface MTScheduledList : NSObject {

	id<MTScheduledListDelegate> _delegate;
	NSMutableOrderedSet* _orderedScheduledAlerts;
	NSMutableOrderedSet* _orderedScheduledNotifications;
	NSMutableOrderedSet* _orderedScheduledEvents;
	NSMutableDictionary* _scheduledAlertMap;

}

@property (assign,nonatomic,__weak) id<MTScheduledListDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * orderedScheduledAlerts;                              //@synthesize orderedScheduledAlerts=_orderedScheduledAlerts - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * orderedScheduledNotifications;                       //@synthesize orderedScheduledNotifications=_orderedScheduledNotifications - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * orderedScheduledEvents;                              //@synthesize orderedScheduledEvents=_orderedScheduledEvents - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * scheduledAlertMap;                                   //@synthesize scheduledAlertMap=_scheduledAlertMap - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfScheduledAlerts; 
@property (nonatomic,readonly) unsigned long long numberOfScheduledAlertsAndNotifications; 
@property (nonatomic,readonly) NSArray * scheduledAlerts; 
@property (nonatomic,readonly) NSArray * scheduledAlertsAndNotifications; 
@property (nonatomic,readonly) NSArray * scheduledObjects; 
+(void)_sortAndFilter:(id)arg1 objectsToScheduleAhead:(id)arg2 ;
+(/*^block*/id)_scheduledObjectComparator;
+(id)_filterScheduledObjects:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(void)_sort:(id)arg1 ;
+(id)_nextScheduledObjectInSets:(id)arg1 ;
+(/*^block*/id)_dateIntervalFilter:(id)arg1 ;
+(void)_sortAndFilter:(id)arg1 ;
-(id)nextScheduledAlertOrNotification;
-(void)setScheduledAlertMap:(NSMutableDictionary *)arg1 ;
-(id)init;
-(id<MTScheduledListDelegate>)delegate;
-(NSMutableDictionary *)scheduledAlertMap;
-(id)scheduledObjectsToFireBeforeDate:(id)arg1 ;
-(NSArray *)scheduledAlertsAndNotifications;
-(unsigned long long)numberOfScheduledAlerts;
-(id)_scheduledListForTriggerType:(unsigned long long)arg1 ;
-(void)setOrderedScheduledEvents:(NSMutableOrderedSet *)arg1 ;
-(void)setOrderedScheduledAlerts:(NSMutableOrderedSet *)arg1 ;
-(void)_unscheduleObject:(id)arg1 ;
-(void)setDelegate:(id<MTScheduledListDelegate>)arg1 ;
-(id)description;
-(unsigned long long)numberOfScheduledAlertsAndNotifications;
-(id)initWithDelegate:(id)arg1 ;
-(NSArray *)scheduledObjects;
-(NSMutableOrderedSet *)orderedScheduledEvents;
-(void)_performScheduleChangingBlock:(/*^block*/id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)nextScheduledObject;
-(void)unschedule:(id)arg1 ;
-(void)reset;
-(id)nextScheduledAlert;
-(NSArray *)scheduledAlerts;
-(NSMutableOrderedSet *)orderedScheduledAlerts;
-(BOOL)isScheduled:(id)arg1 ;
-(void)_scheduleObject:(id)arg1 ;
-(void)setOrderedScheduledNotifications:(NSMutableOrderedSet *)arg1 ;
-(id)nextScheduledObjectWithTriggerType:(unsigned long long)arg1 ;
-(void)schedule:(id)arg1 afterDate:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)scheduledObjectsToFireInInterval:(id)arg1 ;
-(void)_unschedule:(id)arg1 ;
-(NSMutableOrderedSet *)orderedScheduledNotifications;
@end

