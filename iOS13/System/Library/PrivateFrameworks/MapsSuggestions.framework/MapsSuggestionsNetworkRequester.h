/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsNetworkRequester.h>

@class NSString;

@interface MapsSuggestionsNetworkRequester : NSObject <MapsSuggestionsNetworkRequester>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(NSString *)uniqueName;
-(BOOL)ETAsFromHereWaypoint:(id)arg1 destinationWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)resolveMapItemHandleData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)reverseGeocodeCoordinate:(SCD_Struct_Ma2)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)forwardGeocodeAddressString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)searchString:(id)arg1 maxResults:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)searchPOIWithName:(id)arg1 ofPOICategory:(id)arg2 withinVenue:(id)arg3 maxResults:(unsigned)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)forwardGeocodePostalAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)composedWaypointForMapItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)composedWaypointForLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)composedWaypointForAddressString:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

