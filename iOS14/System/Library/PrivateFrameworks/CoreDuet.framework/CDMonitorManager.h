/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
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
	NSObject*<OS_dispatch_source> _SIGTERMHandlerSource;

}
+(id)monitorManagerForEventStreams:(id)arg1 domain:(unsigned long long)arg2 ;
-(void)setHistoricalDeletingHandler:(/*^block*/id)arg1 ;
-(id)lastUpdate;
-(void)_addMonitor:(id)arg1 forStreamName:(id)arg2 ;
-(id)currentEventForStream:(id)arg1 ;
-(void)start;
-(void)_setInstantHandler:(/*^block*/id)arg1 forStreamName:(id)arg2 ;
-(void)startMonitorForStream:(id)arg1 ;
-(void)loadMonitorManagers;
-(void)deliverNotificationEvent:(id)arg1 ;
-(void)addMonitor:(id)arg1 ;
-(void)stop;
-(void)_updateForStreamName:(id)arg1 ;
-(id)_allStreamNames;
-(void)setHistoricalHandler:(/*^block*/id)arg1 forStream:(id)arg2 ;
-(void)stopMonitorForStream:(id)arg1 ;
-(void)update;
-(void)updateForStream:(id)arg1 ;
-(void)setInstantHandler:(/*^block*/id)arg1 forStream:(id)arg2 ;
-(void)handleShutdownNotification;
-(void)_stopMonitorForStreamName:(id)arg1 ;
-(void)setShutdownHandler:(/*^block*/id)arg1 ;
-(id)currentEvent;
-(id)_lastUpdateForStreamName:(id)arg1 ;
-(id)_monitorForStreamName:(id)arg1 ;
-(void)populateCurrentValueForStreamName:(id)arg1 ;
-(id)_currentEventForStreamName:(id)arg1 ;
-(BOOL)_hasMonitorForStreamName:(id)arg1 ;
-(id)_allMonitors;
-(void)setInstantHandler:(/*^block*/id)arg1 ;
-(BOOL)hasMonitor:(id)arg1 ;
-(void)_startMonitorForStreamName:(id)arg1 ;
-(void)removeMonitor:(id)arg1 ;
-(void)setHistoricalHandler:(/*^block*/id)arg1 ;
-(id)initWithEventStreams:(id)arg1 domain:(unsigned long long)arg2 ;
-(id)lastUpdateForStream:(id)arg1 ;
-(void)_setHistoricalHandler:(/*^block*/id)arg1 forStreamName:(id)arg2 ;
-(void)_removeMonitorForStreamName:(id)arg1 ;
@end

