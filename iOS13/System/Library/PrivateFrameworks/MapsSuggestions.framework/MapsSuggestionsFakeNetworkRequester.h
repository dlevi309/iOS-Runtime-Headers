/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsNetworkRequester.h>

@class NSArray, NSMutableDictionary, GEOComposedWaypoint, NSError, NSString;

@interface MapsSuggestionsFakeNetworkRequester : NSObject <MapsSuggestionsNetworkRequester> {

	Queue _queue;
	NSArray* _fakeMapItems;
	NSMutableDictionary* _fakeMapItemsPerPOICategory;
	NSMutableDictionary* _fakeMapItemsPerHandleData;
	GEOComposedWaypoint* _fakeWaypoint;
	NSArray* _fakeTraffic;
	NSError* _fakeError;
	unsigned long long _calledFwdGeoByPostalAddress;
	unsigned long long _calledFwdGeoByAddressString;
	unsigned long long _calledRevGeo;
	unsigned long long _calledMapItemHandle;
	unsigned long long _calledSearch;
	unsigned long long _calledSearchByPOICategory;
	unsigned long long _calledWaypointForMapItem;
	unsigned long long _calledWaypointForLocation;
	unsigned long long _calledWaypointForAddressString;
	unsigned long long _calledETAForWaypoint;
	BOOL _breakCallbackPromise;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(id)init;
-(void)reset;
-(NSString *)uniqueName;
-(BOOL)ETAsFromHereWaypoint:(id)arg1 destinationWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)resolveMapItemHandleData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)reverseGeocodeCoordinate:(SCD_Struct_Ma2)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)forwardGeocodeAddressString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)searchString:(id)arg1 maxResults:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)searchPOIWithName:(id)arg1 ofPOICategory:(id)arg2 withinVenue:(id)arg3 maxResults:(unsigned)arg4 completion:(/*^block*/id)arg5 ;
-(void)configureError:(id)arg1 ;
-(BOOL)forwardGeocodePostalAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)composedWaypointForMapItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)composedWaypointForLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)composedWaypointForAddressString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)configureMapItems:(id)arg1 ;
-(void)configureMapItems:(id)arg1 forPOICategory:(id)arg2 ;
-(void)configureMapItem:(id)arg1 forHandleData:(id)arg2 ;
-(void)configureWaypoint:(id)arg1 ;
-(void)configureTraffic:(id)arg1 ;
-(void)configureBrokenCallBackPromise;
-(unsigned long long)calledRequestFwdGeoByPostalAddress;
-(unsigned long long)calledRequestFwdGeoByAddressString;
-(unsigned long long)calledRequestRevGeo;
-(unsigned long long)calledRequestMapItemHandle;
-(unsigned long long)calledRequestSearch;
-(unsigned long long)calledRequestSearchByPOICategory;
-(unsigned long long)calledRequestWaypointForMapItem;
-(unsigned long long)calledRequestWaypointForLocation;
-(unsigned long long)calledRequestWaypointForAddressString;
-(unsigned long long)calledRequestETAForWaypoint;
@end

