/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@interface SGEventGeocode : NSObject
+(id)_serialQueue;
+(BOOL)locationIsAirport:(id)arg1 ;
+(BOOL)locationIsGeocoded:(id)arg1 ;
+(BOOL)isGeocodeCandidateLocation:(id)arg1 forEvent:(id)arg2 ;
+(BOOL)isGeocodeCandidate:(id)arg1 ;
+(void)geocodeAddress:(id)arg1 withCallback:(/*^block*/id)arg2 ;
+(void)geocodeAddressWithCanonicalSearch:(id)arg1 withCallback:(/*^block*/id)arg2 ;
+(void)geocodePOIWithName:(id)arg1 ofTypes:(id)arg2 inRegion:(id)arg3 withCallback:(/*^block*/id)arg4 ;
+(void)geocodeLocation:(id)arg1 usingMode:(unsigned long long)arg2 withGeoFilters:(id)arg3 withCallback:(/*^block*/id)arg4 ;
+(id)dateForUTCDate:(id)arg1 withTimeZone:(id)arg2 ;
+(id)geocodeEvent:(id)arg1 ;
+(void)geocodeEvent:(id)arg1 withCallback:(/*^block*/id)arg2 ;
+(id)poiCategoriesFromString:(id)arg1 ;
@end

