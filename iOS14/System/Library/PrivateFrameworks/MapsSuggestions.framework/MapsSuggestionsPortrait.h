/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol MapsSuggestionsPortraitConnector, MapsSuggestionsNetworkRequester, OS_dispatch_queue;
@class PPLocationStore, PPConnectionsStore, PPNamedEntityStore, PPConnectionsCriteria, NSString, GEOMapItemStorage, NSNumber, NSObject;

@interface MapsSuggestionsPortrait : NSObject <MapsSuggestionsObject> {

	id<MapsSuggestionsPortraitConnector> _connector;
	id<MapsSuggestionsNetworkRequester> _networkRequester;
	PPLocationStore* _locationStore;
	PPConnectionsStore* _connectionsStore;
	PPNamedEntityStore* _namedEntityStore;
	PPConnectionsCriteria* _criteria;
	NSString* _cachedKey;
	GEOMapItemStorage* _cachedMapItem;
	NSNumber* _cachedMapItemOrigin;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uniqueName;
-(id)initFromResourceDepot:(id)arg1 ;
-(id)initWithPortraitConnector:(id)arg1 networkRequester:(id)arg2 ;
-(BOOL)fetchLocationEntriesForTray:(BOOL)arg1 currentLocation:(id)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)sendFeedbackforClientID:(id)arg1 storeType:(long long)arg2 explicitlyEngagedStrings:(id)arg3 explicitlyRejectedStrings:(id)arg4 implicitlyEngagedStrings:(id)arg5 implicitlyRejectedStrings:(id)arg6 ;
-(BOOL)fetchConnectionEntriesWithHandler:(/*^block*/id)arg1 ;
-(id)fetchNamedEntitiesFromDate:(id)arg1 ;
@end

