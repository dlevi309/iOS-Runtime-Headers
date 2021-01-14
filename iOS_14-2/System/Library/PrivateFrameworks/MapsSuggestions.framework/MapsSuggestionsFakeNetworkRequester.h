/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsNetworkRequester.h>

@class NSArray, NSMutableDictionary, NSError, NSString;

@interface MapsSuggestionsFakeNetworkRequester : NSObject <MapsSuggestionsNetworkRequester> {

	Queue _queue;
	NSArray* _fakeMapItems;
	NSMutableDictionary* _fakeMapItemsPerKey;
	NSMutableDictionary* _fakeWaypointsPerKey;
	NSMutableDictionary* _fakeTrafficPerWaypoint;
	NSError* _fakeError;
	NSError* _fakeErrorForETA;
	unsigned long long _calledFwdGeoByPostalAddress;
	unsigned long long _calledFwdGeoByAddressString;
	unsigned long long _calledRevGeo;
	unsigned long long _calledMapItemHandle;
	unsigned long long _calledCanonicalByPostalAddress;
	unsigned long long _calledSearch;
	unsigned long long _calledSearchByPOICategory;
	unsigned long long _calledWaypointForMapItem;
	unsigned long long _calledWaypointForLocation;
	unsigned long long _calledWaypointForAddressString;
	unsigned long long _calledETAForWaypoint;
	BOOL _breakCallbackPromise;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uniqueName;
-(id)initFromResourceDepot:(id)arg1 ;
-(void)configureError:(id)arg1 ;
-(char)ETAFromWaypoint:(id)arg1 toWaypoint:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 completion:(/*^block*/id)arg5 ;
-(char)resolveMapItemHandleData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)reverseGeocodeCoordinate:(SCD_Struct_Ma1)arg1 completion:(/*^block*/id)arg2 ;
-(char)forwardGeocodeAddressString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)searchString:(id)arg1 maxResults:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(char)canonicalLocalSearchPostalAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)configureMapItems:(id)arg1 ;
-(id)configureWaypoint:(id)arg1 forMapItem:(id)arg2 ;
-(char)forwardGeocodePostalAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)searchPOIWithName:(id)arg1 ofPOICategory:(id)arg2 withinVenue:(id)arg3 maxResults:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(char)searchWithAirportCode:(id)arg1 terminal:(id)arg2 gate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(char)composedWaypointForMapItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)composedWaypointForLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)composedWaypointForAddressString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)configureMapItems:(id)arg1 forPOICategory:(id)arg2 ;
-(void)configureMapItem:(id)arg1 forHandleData:(id)arg2 ;
-(void)configureMapItem:(id)arg1 forPostalAddress:(id)arg2 ;
-(id)configureWaypointForMapItem:(id)arg1 ;
-(void)configureTraffic:(id)arg1 forWaypoint:(id)arg2 ;
-(void)configureETARequestError:(id)arg1 ;
-(void)configureBrokenCallBackPromise;
-(unsigned long long)calledRequestFwdGeoByPostalAddress;
-(unsigned long long)calledRequestFwdGeoByAddressString;
-(unsigned long long)calledRequestRevGeo;
-(unsigned long long)calledRequestMapItemHandle;
-(unsigned long long)calledCanonicalLocalSearchByPostalAddress;
-(unsigned long long)calledRequestSearch;
-(unsigned long long)calledRequestETAForWaypoint;
-(unsigned long long)calledRequestSearchByPOICategory;
-(unsigned long long)calledRequestWaypointForMapItem;
-(unsigned long long)calledRequestWaypointForLocation;
-(unsigned long long)calledRequestWaypointForAddressString;
@end

