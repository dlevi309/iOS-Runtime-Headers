/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@protocol MapsSuggestionsNetworkRequester <MapsSuggestionsObject>
@required
+(id)new;
-(id)init;
-(id)initFromResourceDepot:(id)arg1;
-(char)ETAFromWaypoint:(id)arg1 toWaypoint:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 completion:(/*^block*/id)arg5;
-(char)resolveMapItemHandleData:(id)arg1 completion:(/*^block*/id)arg2;
-(char)reverseGeocodeCoordinate:(SCD_Struct_Ma1)arg1 completion:(/*^block*/id)arg2;
-(char)forwardGeocodeAddressString:(id)arg1 completion:(/*^block*/id)arg2;
-(char)searchString:(id)arg1 maxResults:(unsigned)arg2 completion:(/*^block*/id)arg3;
-(char)canonicalLocalSearchPostalAddress:(id)arg1 completion:(/*^block*/id)arg2;
-(char)forwardGeocodePostalAddress:(id)arg1 completion:(/*^block*/id)arg2;
-(char)searchPOIWithName:(id)arg1 ofPOICategory:(id)arg2 withinVenue:(id)arg3 maxResults:(unsigned long long)arg4 completion:(/*^block*/id)arg5;
-(char)searchWithAirportCode:(id)arg1 terminal:(id)arg2 gate:(id)arg3 completion:(/*^block*/id)arg4;
-(char)composedWaypointForMapItem:(id)arg1 completion:(/*^block*/id)arg2;
-(char)composedWaypointForLocation:(id)arg1 completion:(/*^block*/id)arg2;
-(char)composedWaypointForAddressString:(id)arg1 completion:(/*^block*/id)arg2;

@end

