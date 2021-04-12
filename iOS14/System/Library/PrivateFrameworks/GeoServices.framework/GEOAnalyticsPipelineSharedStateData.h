/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOAnalyticsPipelineStateData.h>

@class geo_isolater;

@interface GEOAnalyticsPipelineSharedStateData : GEOAnalyticsPipelineStateData {

	geo_isolater* _placeIso;
	geo_isolater* _mapViewIso;

}
+(id)sharedData;
-(void)performMapViewStateUpdate:(/*^block*/id)arg1 ;
-(void)performPlaceCardStateUpdate:(/*^block*/id)arg1 ;
-(int)layoutInfoAsGEOLayoutInfo;
-(BOOL)hasMapRestoreData;
-(id)init;
-(int)layoutStyleAsGEOLayoutStyle;
-(void)populateWithChildPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 ;
-(void)_performSyncStateUpdateWithIsolator:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(BOOL)hasMapsServerData;
-(void)clearSuggestionsData;
-(void)clearPlaceCardStateData;
-(int)transportModeAsGEOTransportMode;
-(void)populateWithPlaceActionDetails:(id)arg1 ;
-(void)populateWithPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 ;
-(BOOL)hasPlaceCard_PlaceActionDetails;
-(BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard_TransitDepartureSequence;
-(void)_populateWithGEOTransitPlaceCard:(id)arg1 ;
-(int)locationPrecisionTypeAsGEOSettingsLocationType;
-(BOOL)hasSuggestionsData;
-(BOOL)hasPlaceCardStateData;
-(void)_populateWithGEOTransitDepartureSequenceUsage:(id)arg1 ;
-(int)navVoiceVolumeAsGEONavVoiceVolume;
-(BOOL)hasPlaceCard_PlaceActionDetails_TransitPlaceCard;
-(BOOL)hasMapLaunchData;
@end

