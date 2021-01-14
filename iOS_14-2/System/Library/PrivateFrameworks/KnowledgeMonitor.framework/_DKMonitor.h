/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <libobjc.A.dylib/_DKInstantMonitor.h>
#import <libobjc.A.dylib/_DKHistoricalMonitor.h>

@protocol OS_dispatch_queue;
@class _DKEvent, NSDate, NSDictionary, NSString, NSMutableDictionary, NSObject, NSSet;

@interface _DKMonitor : NSObject <_DKInstantMonitor, _DKHistoricalMonitor> {

	NSDictionary* _state;
	NSString* _bootSessionUUID;
	/*^block*/id instantHandler;
	/*^block*/id historicalHandler;
	/*^block*/id shutdownHandler;
	NSDate* lastUpdate;
	_DKEvent* _currentEvent;
	NSMutableDictionary* _instantState;
	NSMutableDictionary* _historicalState;
	/*^block*/id _eventComparator;
	/*^block*/id _filter;
	long long _references;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _machTimeAtLastClockChange;
	NSDate* _dateAtLastClockChange;
	NSObject*<OS_dispatch_queue> _eventQueue;

}

@property (assign) unsigned long long machTimeAtLastClockChange;                        //@synthesize machTimeAtLastClockChange=_machTimeAtLastClockChange - In the implementation block
@property (retain) NSDate * dateAtLastClockChange;                                      //@synthesize dateAtLastClockChange=_dateAtLastClockChange - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdate; 
@property (nonatomic,retain) _DKEvent * currentEvent;                                   //@synthesize currentEvent=_currentEvent - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> eventQueue;                 //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * instantState;                      //@synthesize instantState=_instantState - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * historicalState;                   //@synthesize historicalState=_historicalState - In the implementation block
@property (nonatomic,copy) id eventComparator;                                          //@synthesize eventComparator=_eventComparator - In the implementation block
@property (nonatomic,copy) id filter;                                                   //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) long long references;                                    //@synthesize references=_references - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSSet * classesForSecureStateDecoding; 
@property (nonatomic,copy) id instantHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id historicalHandler; 
@property (nonatomic,copy) id shutdownHandler; 
+(id)entitlements;
+(id)eventStream;
+(BOOL)shouldMergeUnchangedEvents;
-(NSDate *)lastUpdate;
-(id)loadState;
-(void)saveState;
-(void)synchronouslyReflectCurrentValue;
-(NSObject*<OS_dispatch_queue>)eventQueue;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)init;
-(void)start;
-(void)setLastUpdate:(NSDate *)arg1 ;
-(void)setCurrentEvent:(id)arg1 inferHistoricalState:(BOOL)arg2 ;
-(id)instantHandler;
-(id)historicalHandler;
-(id)shutdownHandler;
-(void)stop;
-(NSSet *)classesForSecureStateDecoding;
-(void)update;
-(void)setShutdownHandler:(id)arg1 ;
-(_DKEvent *)currentEvent;
-(void)invalidateInstantState;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setCurrentEvent:(_DKEvent *)arg1 ;
-(void)setInstantHandler:(id)arg1 ;
-(long long)references;
-(void)setHistoricalHandler:(id)arg1 ;
-(void)dealloc;
-(NSMutableDictionary *)instantState;
-(BOOL)instantMonitorNeedsActivation;
-(BOOL)instantMonitorNeedsDeactivation;
-(void)systemClockDidChange:(id)arg1 ;
-(NSMutableDictionary *)historicalState;
-(unsigned long long)machTimeAtLastClockChange;
-(NSDate *)dateAtLastClockChange;
-(void)setMachTimeAtLastClockChange:(unsigned long long)arg1 ;
-(void)setDateAtLastClockChange:(NSDate *)arg1 ;
-(void)endCurrentEvent:(id)arg1 ;
-(id)eventComparator;
-(void)setEventComparator:(id)arg1 ;
@end

