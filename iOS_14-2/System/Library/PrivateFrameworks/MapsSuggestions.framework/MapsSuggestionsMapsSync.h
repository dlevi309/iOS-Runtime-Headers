/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsMapsSyncConnectorDelegate.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol MapsSuggestionsMapsSyncConnector;
@class MapsSuggestionsObservers, NSString;

@interface MapsSuggestionsMapsSync : NSObject <MapsSuggestionsMapsSyncConnectorDelegate, MapsSuggestionsObject> {

	Queue _queue;
	id<MapsSuggestionsMapsSyncConnector> _connector;
	MapsSuggestionsObservers* _historyObservers;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uniqueName;
-(void)mapsSyncDidChangeForType:(long long)arg1 ;
-(id)initFromResourceDepot:(id)arg1 ;
-(void)removeMapsSyncObserver:(id)arg1 ;
-(char)canProduceRatingRequestForMapItem:(id)arg1 maxAge:(double)arg2 handler:(/*^block*/id)arg3 ;
-(char)entriesFromHistoryWithHandler:(/*^block*/id)arg1 ;
-(void)addMapsSyncObserver:(id)arg1 forContentType:(long long)arg2 ;
-(char)didProduceRatingRequestForMapItem:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithMapsSyncConnector:(id)arg1 ;
-(char)deleteEntry:(id)arg1 handler:(/*^block*/id)arg2 ;
-(char)mapItemsForHistoricPlaces:(BOOL)arg1 routes:(BOOL)arg2 maxAge:(double)arg3 handler:(/*^block*/id)arg4 ;
@end

