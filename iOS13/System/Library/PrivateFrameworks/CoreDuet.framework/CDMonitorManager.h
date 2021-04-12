/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSObject;

@interface CDMonitorManager : NSObject {

	NSMutableDictionary* _monitors;
	NSMutableSet* _lazyMonitorNames;
	/*^block*/id _generalInstantHandler;
	/*^block*/id _generalHistoricalHandler;
	/*^block*/id _generalHistoricalDeletingHandler;
	/*^block*/id _generalShutdownHandler;
	NSMutableDictionary* _instantHandlerMap;
	NSMutableDictionary* _historicalHandlerMap;
	NSMutableSet* _shutdownHandlingMonitors;
	NSObject*<OS_dispatch_queue> _monitorWorkQueue;

}
+(id)monitorManagerForEventStreams:(id)arg1 domain:(unsigned long long)arg2 ;
-(void)stop;
-(void)start;
-(id)lastUpdate;
-(void)loadMonitorManagers;
-(void)setInstantHandler:(/*^block*/id)arg1 ;
-(id)currentEvent;
-(void)update;
-(void)setHistoricalHandler:(/*^block*/id)arg1 ;
-(void)setShutdownHandler:(/*^block*/id)arg1 ;
-(void)setHistoricalDeletingHandler:(/*^block*/id)arg1 ;
-(id)initWithEventStreams:(id)arg1 domain:(unsigned long long)arg2 ;
-(void)_setInstantHandler:(/*^block*/id)arg1 forStreamName:(id)arg2 ;
-(void)_setHistoricalHandler:(/*^block*/id)arg1 forStreamName:(id)arg2 ;
-(id)_monitorForStreamName:(id)arg1 ;
-(void)_startMonitorForStreamName:(id)arg1 ;
-(id)_allStreamNames;
-(void)_stopMonitorForStreamName:(id)arg1 ;
-(id)_currentEventForStreamName:(id)arg1 ;
-(void)_updateForStreamName:(id)arg1 ;
-(id)_lastUpdateForStreamName:(id)arg1 ;
-(id)_allMonitors;
-(void)_addMonitor:(id)arg1 forStreamName:(id)arg2 ;
-(void)_removeMonitorForStreamName:(id)arg1 ;
-(BOOL)_hasMonitorForStreamName:(id)arg1 ;
-(void)setInstantHandler:(/*^block*/id)arg1 forStream:(id)arg2 ;
-(void)setHistoricalHandler:(/*^block*/id)arg1 forStream:(id)arg2 ;
-(void)startMonitorForStream:(id)arg1 ;
-(void)stopMonitorForStream:(id)arg1 ;
-(void)populateCurrentValueForStreamName:(id)arg1 ;
-(id)currentEventForStream:(id)arg1 ;
-(void)updateForStream:(id)arg1 ;
-(id)lastUpdateForStream:(id)arg1 ;
-(void)deliverNotificationEvent:(id)arg1 ;
-(void)handleShutdownNotification;
-(void)addMonitor:(id)arg1 ;
-(void)removeMonitor:(id)arg1 ;
-(BOOL)hasMonitor:(id)arg1 ;
@end

