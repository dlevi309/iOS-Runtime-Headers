/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableDictionary *)eventHandlers;
-(id)init;
-(void)setEventHandlers:(NSMutableDictionary *)arg1 ;
-(void)startMonitoringEvents;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_init;
-(void)_startMonitoringEventsForStream:(unsigned long long)arg1 ;
-(void)unregisterHandler:(/*^block*/id)arg1 forEventName:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)registerHandler:(/*^block*/id)arg1 forEventName:(id)arg2 ;
@end

