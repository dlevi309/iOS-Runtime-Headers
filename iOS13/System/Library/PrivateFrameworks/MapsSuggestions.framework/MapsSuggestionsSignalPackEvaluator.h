/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@class MapsSuggestionsSignalPack;

@interface MapsSuggestionsSignalPackEvaluator : NSObject {

	MapsSuggestionsSignalPack* _signalPack;

}
+(id)evaluatorFromSignalPack:(id)arg1 ;
-(BOOL)isWalkable;
-(BOOL)hasTouristInfo;
-(BOOL)hasCarPlayInfo;
-(BOOL)hasTransitInfo;
-(id)initWithSignalPack:(id)arg1 ;
-(BOOL)isTouristHere;
-(BOOL)hasWeatherTemperatureInfo;
-(BOOL)hasWeatherPrecipitationInfo;
-(BOOL)isHotWeather;
-(BOOL)isColdWeather;
-(BOOL)isHighChanceOfRaining;
-(BOOL)isHighChanceOfSnowing;
-(BOOL)hasWeatherInfo;
-(BOOL)isMildWeather;
-(BOOL)isLowChanceOfRaining;
-(BOOL)isLowChanceOfSnowing;
-(BOOL)isBadWeather;
-(BOOL)hasUserTransportTypePreferenceInfo;
-(BOOL)isUserPreferenceDriving;
-(BOOL)isUserPreferenceWalking;
-(BOOL)isUserPreferenceTransit;
-(BOOL)isUserPreferenceRidesharing;
-(BOOL)hasDistanceFromHereToDestinationInfo;
-(BOOL)hasDistanceFromHereToOriginInfo;
-(BOOL)hasDistanceFromOriginToDestinationInfo;
-(BOOL)isEasilyWalkable;
-(BOOL)isCarPlayConnected;
-(BOOL)hasMapTypeInfo;
-(BOOL)isMapTypeTransit;
-(BOOL)isTransitCurrentlyPossible;
-(BOOL)hasRidesharingInfo;
-(BOOL)isRideSharingAppsInstalled;
@end

