/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)_init;
-(void)addSyntheticRouteHypothesizer:(id)arg1 forEventExternalURL:(id)arg2 ;
-(void)removeSyntheticRouteHypothesizerForEventExternalURL:(id)arg1 ;
-(NSMutableDictionary *)eventExternalURLToSyntheticRouteHypothesizerMap;
-(id)syntheticRouteHypothesizerForEventExternalURL:(id)arg1 ;
@end

