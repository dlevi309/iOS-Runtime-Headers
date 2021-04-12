/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@protocol OS_os_log;
@class NSObject, NSDate, MTAlarmManager, EKEventStore;

@interface _DKNextAlarmForTopOffProtectionMonitor : _DKMonitor {

	BOOL _isPluggedIn;
	int _pluggedInToken;
	NSObject*<OS_os_log> _log;
	NSDate* _nextEarliestEvent;
	MTAlarmManager* _alarmManager;
	EKEventStore* _eventStore;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;                   //@synthesize log=_log - In the implementation block
@property (assign,nonatomic) BOOL isPluggedIn;                           //@synthesize isPluggedIn=_isPluggedIn - In the implementation block
@property (assign,nonatomic) int pluggedInToken;                         //@synthesize pluggedInToken=_pluggedInToken - In the implementation block
@property (nonatomic,retain) NSDate * nextEarliestEvent;                 //@synthesize nextEarliestEvent=_nextEarliestEvent - In the implementation block
@property (nonatomic,retain) MTAlarmManager * alarmManager;              //@synthesize alarmManager=_alarmManager - In the implementation block
@property (nonatomic,retain) EKEventStore * eventStore;                  //@synthesize eventStore=_eventStore - In the implementation block
+(id)entitlements;
+(id)eventStream;
+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithState:(id)arg1 ;
-(EKEventStore *)eventStore;
-(MTAlarmManager *)alarmManager;
-(void)setAlarmManager:(MTAlarmManager *)arg1 ;
-(void)registerForChanges;
-(id)nextAlarm;
-(NSObject*<OS_os_log>)log;
-(void)start;
-(int)pluggedInToken;
-(void)setIsPluggedIn:(BOOL)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)handleAlarmsDidChangeNotification:(id)arg1 ;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)setNextEarliestEvent:(NSDate *)arg1 ;
-(void)stop;
-(void)setPluggedInToken:(int)arg1 ;
-(NSDate *)nextEarliestEvent;
-(BOOL)isPluggedIn;
-(void)handleCalendarEventsChanged:(id)arg1 ;
-(void)recordNextEvent;
-(id)nextCalendarEvent;
-(void)updateCurrentState;
@end

