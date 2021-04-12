/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface SDEventMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _eventHandlers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * eventHandlers;              //@synthesize eventHandlers=_eventHandlers - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_init;
-(NSMutableDictionary *)eventHandlers;
-(void)registerHandler:(/*^block*/id)arg1 forEventName:(id)arg2 ;
-(void)_startMonitoringEventsForStream:(unsigned long long)arg1 ;
-(void)startMonitoringEvents;
-(void)unregisterHandler:(/*^block*/id)arg1 forEventName:(id)arg2 ;
-(void)setEventHandlers:(NSMutableDictionary *)arg1 ;
@end

