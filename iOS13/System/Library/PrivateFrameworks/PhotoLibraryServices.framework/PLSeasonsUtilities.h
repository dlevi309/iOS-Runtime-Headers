/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLSeasonsUtilities : NSObject
+(id)localizedSeasonNameForDate:(id)arg1 calendar:(id)arg2 locale:(id)arg3 ;
+(id)_seasonNameForKey:(id)arg1 ;
+(id)_seasonKeyForMonthNumber:(unsigned long long)arg1 locale:(id)arg2 ;
+(id)_northernMeteorologicalSeasonKeyForMonthNumber:(unsigned long long)arg1 ;
+(id)_southernMeteorologicalSeasonKeyForMonthNumber:(unsigned long long)arg1 ;
+(id)_seasonCountryCodesDictionary;
+(BOOL)isCountryCodePartOfNorthernHemisphere:(id)arg1 ;
+(BOOL)isCountryCodePartOfSouthernHemisphere:(id)arg1 ;
@end

