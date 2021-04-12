/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_eventWithState:(id)arg1 ;
+(BOOL)shouldMergeUnchangedEvents;
-(void)stop;
-(void)start;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(BOOL)isPluggedIn;
-(void)registerForChanges;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(MTAlarmManager *)alarmManager;
-(id)nextAlarm;
-(void)setAlarmManager:(MTAlarmManager *)arg1 ;
-(void)updateCurrentState;
-(void)handleAlarmsDidChangeNotification:(id)arg1 ;
-(void)handleCalendarEventsChanged:(id)arg1 ;
-(id)nextCalendarEvent;
-(void)recordNextEvent;
-(void)setIsPluggedIn:(BOOL)arg1 ;
-(int)pluggedInToken;
-(void)setPluggedInToken:(int)arg1 ;
-(NSDate *)nextEarliestEvent;
-(void)setNextEarliestEvent:(NSDate *)arg1 ;
@end

