/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@class MapsSuggestionsSignalPack;

@interface MapsSuggestionsSignalPackEvaluator : NSObject {

	MapsSuggestionsSignalPack* _signalPack;

}
+(id)evaluatorFromSignalPack:(id)arg1 ;
-(BOOL)isHighChanceOfSnowing;
-(BOOL)isEasilyWalkable;
-(BOOL)isRideSharingAppsInstalled;
-(BOOL)isColdWeather;
-(BOOL)hasDistanceFromOriginToDestinationInfo;
-(BOOL)isHotWeather;
-(BOOL)hasTransitInfo;
-(BOOL)hasMapTypeInfo;
-(BOOL)isMapTypeTransit;
-(BOOL)isLowChanceOfSnowing;
-(BOOL)hasDistanceFromHereToOriginInfo;
-(BOOL)hasRidesharingInfo;
-(BOOL)isTouristHere;
-(BOOL)hasWeatherPrecipitationInfo;
-(BOOL)hasWeatherInfo;
-(BOOL)isBadWeather;
-(BOOL)isMildWeather;
-(BOOL)hasUserTransportTypePreferenceInfo;
-(BOOL)isUserPreferenceTransit;
-(BOOL)isUserPreferenceRidesharing;
-(BOOL)hasWeatherTemperatureInfo;
-(BOOL)hasTouristInfo;
-(BOOL)isLowChanceOfRaining;
-(BOOL)isUserPreferenceDriving;
-(BOOL)hasDistanceFromHereToDestinationInfo;
-(BOOL)isUserPreferenceWalking;
-(BOOL)isHighChanceOfRaining;
-(BOOL)isWalkable;
-(BOOL)isTransitCurrentlyPossible;
-(BOOL)isCarPlayConnected;
-(id)initWithSignalPack:(id)arg1 ;
-(BOOL)hasCarPlayInfo;
@end

