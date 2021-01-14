/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsEventKitConnectorDelegate.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue, MapsSuggestionsEventKitConnector, MapsSuggestionsNetworkRequester;
@class NSObject, MapsSuggestionsObservers, MapsSuggestionsCanKicker, NSSet, NSMutableDictionary, NSString;

@interface MapsSuggestionsEventKit : NSObject <MapsSuggestionsEventKitConnectorDelegate, MapsSuggestionsObject> {

	NSObject*<OS_dispatch_queue> _queue;
	id<MapsSuggestionsEventKitConnector> _connector;
	id<MapsSuggestionsNetworkRequester> _network;
	MapsSuggestionsObservers* _observers;
	MapsSuggestionsCanKicker* _changedNotificationCanKicker;
	NSSet* _setOfEventReservationSubtypes;
	NSMutableDictionary* _handleToMapItemMapping;
	NSMutableDictionary* _handleToMapItemOriginMapping;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(NSString *)uniqueName;
-(id)initFromResourceDepot:(id)arg1 ;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(id)initWithConnector:(id)arg1 network:(id)arg2 ;
-(BOOL)hasVisibleCalendars;
-(BOOL)entriesForEventsAtLocation:(id)arg1 period:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)deleteOrDeclineEntry:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)eventKitDidChange:(id)arg1 ;
@end

