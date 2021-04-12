/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface CADSyntheticRouteHypothesizerCache : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _eventExternalURLToSyntheticRouteHypothesizerMap;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                             //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * eventExternalURLToSyntheticRouteHypothesizerMap;              //@synthesize eventExternalURLToSyntheticRouteHypothesizerMap=_eventExternalURLToSyntheticRouteHypothesizerMap - In the implementation block
+(id)sharedInstance;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSMutableDictionary *)eventExternalURLToSyntheticRouteHypothesizerMap;
-(id)syntheticRouteHypothesizerForEventExternalURL:(id)arg1 ;
-(void)addSyntheticRouteHypothesizer:(id)arg1 forEventExternalURL:(id)arg2 ;
-(void)removeSyntheticRouteHypothesizerForEventExternalURL:(id)arg1 ;
@end

