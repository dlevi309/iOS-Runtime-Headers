/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOAnalyticsPipelineStateData.h>

@class geo_isolater;

@interface GEOAnalyticsPipelineSharedStateData : GEOAnalyticsPipelineStateData {

	geo_isolater* _placeIso;
	geo_isolater* _mapViewIso;

}
+(id)sharedData;
-(id)init;
-(void)_performSyncStateUpdateWithIsolator:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(void)_populateWithGEOTransitPlaceCard:(id)arg1 ;
-(void)_populateWithGEOTransitDepartureSequenceUsage:(id)arg1 ;
-(void)populateWithPlaceActionDetails:(id)arg1 ;
-(BOOL)hasPlaceCard_PlaceActionDetails;
-(BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard;
-(BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard_TransitDepartureSequence;
-(void)performMapViewStateUpdate:(/*^block*/id)arg1 ;
-(void)performPlaceCardStateUpdate:(/*^block*/id)arg1 ;
-(void)clearPlaceCardStateData;
-(void)populateWithPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 ;
-(void)populateWithChildPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 ;
-(BOOL)hasPlaceCardStateData;
-(BOOL)hasMapsServerData;
-(BOOL)hasSuggestionsData;
-(void)clearSuggestionsData;
-(BOOL)hasMapRestoreData;
-(BOOL)hasMapLaunchData;
@end

