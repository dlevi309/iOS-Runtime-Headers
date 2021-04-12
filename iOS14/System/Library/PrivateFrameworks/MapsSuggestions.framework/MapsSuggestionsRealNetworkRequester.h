/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsNetworkRequester.h>

@class NSString;

@interface MapsSuggestionsRealNetworkRequester : NSObject <MapsSuggestionsNetworkRequester>

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uniqueName;
-(id)initFromResourceDepot:(id)arg1 ;
-(BOOL)ETAFromWaypoint:(id)arg1 toWaypoint:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)resolveMapItemHandleData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)reverseGeocodeCoordinate:(SCD_Struct_Ma1)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)forwardGeocodeAddressString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)searchString:(id)arg1 maxResults:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)canonicalLocalSearchPostalAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)forwardGeocodePostalAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)searchPOIWithName:(id)arg1 ofPOICategory:(id)arg2 withinVenue:(id)arg3 maxResults:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)searchWithAirportCode:(id)arg1 terminal:(id)arg2 gate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)composedWaypointForMapItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)composedWaypointForLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)composedWaypointForAddressString:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

