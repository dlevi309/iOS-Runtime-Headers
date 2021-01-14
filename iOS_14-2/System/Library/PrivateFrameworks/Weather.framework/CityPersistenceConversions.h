/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/


@interface CityPersistenceConversions : NSObject
+(id)weatherDetailsDictionaryFromCity:(id)arg1 ;
+(id)cityFromCloudDictionary:(id)arg1 ;
+(id)dayForecastDictionariesFromCity:(id)arg1 ;
+(BOOL)cityDictionaryHasValidCoordinates:(id)arg1 ;
+(void)populateCity:(id)arg1 withHourlyForecastDictionaries:(id)arg2 ;
+(BOOL)isCityValid:(id)arg1 ;
+(id)cloudDictionaryRepresentationOfCity:(id)arg1 ;
+(id)hourlyForecastDictionariesFromCity:(id)arg1 ;
+(id)dictionaryRepresentationOfScaleCategory:(id)arg1 ;
+(id)cityFromALCity:(id)arg1 ;
+(id)cityFromDictionary:(id)arg1 ;
+(void)populateCity:(id)arg1 withDayForecastDictionaries:(id)arg2 ;
+(id)cloudDictionaryRepresentationOfALCity:(id)arg1 ;
+(id)scaleCategoryFromDictionaryRepresentation:(id)arg1 ;
+(id)dictionaryRepresentationOfTemperature:(id)arg1 ;
+(id)dictionaryRepresentationOfCity:(id)arg1 ;
+(id)temperatureFromDictionaryRepresentation:(id)arg1 ;
@end

