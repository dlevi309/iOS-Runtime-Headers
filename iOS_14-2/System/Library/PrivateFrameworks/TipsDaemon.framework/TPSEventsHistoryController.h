/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableDictionary;

@interface TPSEventsHistoryController : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSDictionary* _contextualEventsForIdentifiers;
	NSMutableDictionary* _contextualEventIdentifierToContextualEventMap;

}

@property (nonatomic,retain) NSMutableDictionary * contextualEventIdentifierToContextualEventMap;              //@synthesize contextualEventIdentifierToContextualEventMap=_contextualEventIdentifierToContextualEventMap - In the implementation block
@property (nonatomic,copy) NSDictionary * contextualEventsForIdentifiers;                                      //@synthesize contextualEventsForIdentifiers=_contextualEventsForIdentifiers - In the implementation block
-(id)debugDescription;
-(NSDictionary *)contextualEventsForIdentifiers;
-(id)allContextualEvents;
-(void)restartTrackingForEventIdentifiers:(id)arg1 date:(id)arg2 ;
-(void)_setContextualEvent:(id)arg1 forIdentifier:(id)arg2 ;
-(void)setContextualEventIdentifierToContextualEventMap:(NSMutableDictionary *)arg1 ;
-(void)addEventsFromTriggerEvents:(id)arg1 desiredOutcomeEvents:(id)arg2 contentIdentifier:(id)arg3 eventSinceDate:(id)arg4 ;
-(id)_contextualEventForIdentifier:(id)arg1 ;
-(void)_addEvents:(id)arg1 contentIdentifier:(id)arg2 eventSinceDate:(id)arg3 minObservationCount:(unsigned long long)arg4 ;
-(void)processEventProviderQueryResults:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateCacheData;
-(void)removeObserverIdentifiers:(id)arg1 ;
-(void)removeCacheData;
-(id)contextualEventsBySourceMap;
-(id)contextualEventsForIdentifiers:(id)arg1 ;
-(void)removeObserverIdentifiers:(id)arg1 fromEventIdentifiers:(id)arg2 ;
-(NSMutableDictionary *)contextualEventIdentifierToContextualEventMap;
-(id)initWithTipStatusController:(id)arg1 ;
-(void)setContextualEventsForIdentifiers:(NSDictionary *)arg1 ;
@end

