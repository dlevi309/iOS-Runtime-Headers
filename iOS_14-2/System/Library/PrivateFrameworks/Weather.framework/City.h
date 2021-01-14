/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/Weather-Structs.h>
#import <libobjc.A.dylib/WAIdentifiable.h>

@class NSString, NSArray, WFTemperature, NSURL, CLLocation, NSTimeZone, NSDate, NSError, WFNextHourPrecipitation, NSNumber, WFAQIScaleCategory, WeatherAQIAttribution, WFLocation, NSTimer, WFGeocodeRequest, NSHashTable, NSDictionary;

@interface City : NSObject <WAIdentifiable> {

	BOOL _isDay;
	BOOL _isLocalWeatherCity;
	BOOL _transient;
	BOOL _autoUpdate;
	BOOL _airQualityTemporarilyUnavailable;
	BOOL _isUpdating;
	BOOL _isRequestedByFrameworkClient;
	BOOL _lockedForDemoMode;
	float _windChill;
	float _windDirection;
	float _windSpeed;
	float _humidity;
	float _visibility;
	float _pressure;
	float _dewPoint;
	float _heatIndex;
	long long _conditionCode;
	NSArray* _dayForecasts;
	NSArray* _hourlyForecasts;
	NSString* _updateTimeString;
	NSString* _name;
	NSString* _woeid;
	NSString* _state;
	NSString* _ISO3166CountryAbbreviation;
	WFTemperature* _temperature;
	WFTemperature* _feelsLike;
	unsigned long long _observationTime;
	unsigned long long _sunsetTime;
	unsigned long long _sunriseTime;
	unsigned long long _moonPhase;
	unsigned long long _uvIndex;
	double _precipitationPast24Hours;
	NSURL* _link;
	NSURL* _deeplink;
	CLLocation* _location;
	NSString* _searchTitle;
	NSString* _searchSubtitle;
	NSTimeZone* _timeZone;
	NSDate* _timeZoneUpdateDate;
	NSError* _lastUpdateError;
	NSDate* _updateTime;
	unsigned long long _pressureRising;
	NSArray* _severeWeatherEvents;
	WFNextHourPrecipitation* _nextHourPrecipitation;
	NSURL* _severeWeatherEventLearnMoreURL;
	NSNumber* _airQualityIdx;
	NSNumber* _airQualityCategory;
	NSString* _airQualityScale;
	WFAQIScaleCategory* _airQualityScaleCategory;
	unsigned long long _airQualitySignificance;
	NSString* _airQualityLocalizedRecommendation;
	WeatherAQIAttribution* _airQualityAttribution;
	NSURL* _airQualityProviderURL;
	WFLocation* _wfLocation;
	unsigned long long _lastUpdateStatus;
	long long _updateInterval;
	NSTimer* _autoUpdateTimer;
	WFGeocodeRequest* _activeGeocodeRequest;
	NSHashTable* _cityUpdateObservers;
	NSString* _fullName;
	unsigned long long _aqiDataAvailabilityStatusOverride;
	NSNumber* _airQualityIdxOverride;
	NSNumber* _airQualityCategoryOverride;
	unsigned long long _airQualitySignificanceOverride;
	NSString* _weatherDisplayName;
	NSString* _weatherLocationName;

}

@property (readonly) NSDictionary * urlComponents; 
@property (nonatomic,retain) WFLocation * wfLocation;                                           //@synthesize wfLocation=_wfLocation - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                             //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSError * lastUpdateError;                                         //@synthesize lastUpdateError=_lastUpdateError - In the implementation block
@property (assign,nonatomic) unsigned long long lastUpdateStatus;                               //@synthesize lastUpdateStatus=_lastUpdateStatus - In the implementation block
@property (assign,nonatomic) BOOL isUpdating;                                                   //@synthesize isUpdating=_isUpdating - In the implementation block
@property (assign,nonatomic) BOOL isRequestedByFrameworkClient;                                 //@synthesize isRequestedByFrameworkClient=_isRequestedByFrameworkClient - In the implementation block
@property (assign,nonatomic) BOOL lockedForDemoMode;                                            //@synthesize lockedForDemoMode=_lockedForDemoMode - In the implementation block
@property (assign,nonatomic) long long updateInterval;                                          //@synthesize updateInterval=_updateInterval - In the implementation block
@property (nonatomic,retain) NSTimer * autoUpdateTimer;                                         //@synthesize autoUpdateTimer=_autoUpdateTimer - In the implementation block
@property (nonatomic,retain) WFGeocodeRequest * activeGeocodeRequest;                           //@synthesize activeGeocodeRequest=_activeGeocodeRequest - In the implementation block
@property (nonatomic,copy) NSString * updateTimeString;                                         //@synthesize updateTimeString=_updateTimeString - In the implementation block
@property (nonatomic,retain) NSHashTable * cityUpdateObservers;                                 //@synthesize cityUpdateObservers=_cityUpdateObservers - In the implementation block
@property (nonatomic,readonly) BOOL timeZoneIsFresh; 
@property (nonatomic,copy) NSString * fullName;                                                 //@synthesize fullName=_fullName - In the implementation block
@property (assign,nonatomic) unsigned long long aqiDataAvailabilityStatusOverride;              //@synthesize aqiDataAvailabilityStatusOverride=_aqiDataAvailabilityStatusOverride - In the implementation block
@property (nonatomic,retain) NSNumber * airQualityIdxOverride;                                  //@synthesize airQualityIdxOverride=_airQualityIdxOverride - In the implementation block
@property (nonatomic,retain) NSNumber * airQualityCategoryOverride;                             //@synthesize airQualityCategoryOverride=_airQualityCategoryOverride - In the implementation block
@property (assign,nonatomic) unsigned long long airQualitySignificanceOverride;                 //@synthesize airQualitySignificanceOverride=_airQualitySignificanceOverride - In the implementation block
@property (nonatomic,copy) NSString * weatherDisplayName;                                       //@synthesize weatherDisplayName=_weatherDisplayName - In the implementation block
@property (nonatomic,copy) NSString * weatherLocationName;                                      //@synthesize weatherLocationName=_weatherLocationName - In the implementation block
@property (nonatomic,readonly) NSString * weatherLocationCitationName; 
@property (assign,nonatomic) BOOL isLocalWeatherCity;                                           //@synthesize isLocalWeatherCity=_isLocalWeatherCity - In the implementation block
@property (assign,getter=isTransient,nonatomic) BOOL transient;                                 //@synthesize transient=_transient - In the implementation block
@property (nonatomic,copy) NSString * woeid;                                                    //@synthesize woeid=_woeid - In the implementation block
@property (nonatomic,copy) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * locationID; 
@property (nonatomic,copy) NSString * state;                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,copy) NSString * ISO3166CountryAbbreviation;                               //@synthesize ISO3166CountryAbbreviation=_ISO3166CountryAbbreviation - In the implementation block
@property (nonatomic,retain) WFTemperature * temperature;                                       //@synthesize temperature=_temperature - In the implementation block
@property (nonatomic,retain) WFTemperature * feelsLike;                                         //@synthesize feelsLike=_feelsLike - In the implementation block
@property (assign,nonatomic) long long conditionCode;                                           //@synthesize conditionCode=_conditionCode - In the implementation block
@property (assign,nonatomic) unsigned long long observationTime;                                //@synthesize observationTime=_observationTime - In the implementation block
@property (assign,nonatomic) unsigned long long sunsetTime;                                     //@synthesize sunsetTime=_sunsetTime - In the implementation block
@property (assign,nonatomic) unsigned long long sunriseTime;                                    //@synthesize sunriseTime=_sunriseTime - In the implementation block
@property (assign,nonatomic) unsigned long long moonPhase;                                      //@synthesize moonPhase=_moonPhase - In the implementation block
@property (assign,setter=setUVIndex:,nonatomic) unsigned long long uvIndex;                     //@synthesize uvIndex=_uvIndex - In the implementation block
@property (assign,nonatomic) double precipitationPast24Hours;                                   //@synthesize precipitationPast24Hours=_precipitationPast24Hours - In the implementation block
@property (nonatomic,copy) NSURL * link;                                                        //@synthesize link=_link - In the implementation block
@property (nonatomic,copy) NSURL * deeplink;                                                    //@synthesize deeplink=_deeplink - In the implementation block
@property (copy) CLLocation * location;                                                         //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double latitude; 
@property (nonatomic,copy) NSString * searchTitle;                                              //@synthesize searchTitle=_searchTitle - In the implementation block
@property (nonatomic,copy) NSString * searchSubtitle;                                           //@synthesize searchSubtitle=_searchSubtitle - In the implementation block
@property (nonatomic,retain) NSDate * timeZoneUpdateDate;                                       //@synthesize timeZoneUpdateDate=_timeZoneUpdateDate - In the implementation block
@property (nonatomic,retain) NSDate * updateTime;                                               //@synthesize updateTime=_updateTime - In the implementation block
@property (assign,nonatomic) float windChill;                                                   //@synthesize windChill=_windChill - In the implementation block
@property (assign,nonatomic) float windDirection;                                               //@synthesize windDirection=_windDirection - In the implementation block
@property (assign,nonatomic) float windSpeed;                                                   //@synthesize windSpeed=_windSpeed - In the implementation block
@property (assign,nonatomic) float humidity;                                                    //@synthesize humidity=_humidity - In the implementation block
@property (assign,nonatomic) float visibility;                                                  //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) float pressure;                                                    //@synthesize pressure=_pressure - In the implementation block
@property (assign,nonatomic) unsigned long long pressureRising;                                 //@synthesize pressureRising=_pressureRising - In the implementation block
@property (assign,nonatomic) float dewPoint;                                                    //@synthesize dewPoint=_dewPoint - In the implementation block
@property (assign,nonatomic) float heatIndex;                                                   //@synthesize heatIndex=_heatIndex - In the implementation block
@property (assign,nonatomic) BOOL isDay;                                                        //@synthesize isDay=_isDay - In the implementation block
@property (assign,nonatomic) BOOL autoUpdate;                                                   //@synthesize autoUpdate=_autoUpdate - In the implementation block
@property (nonatomic,copy) NSArray * hourlyForecasts;                                           //@synthesize hourlyForecasts=_hourlyForecasts - In the implementation block
@property (nonatomic,copy) NSArray * dayForecasts;                                              //@synthesize dayForecasts=_dayForecasts - In the implementation block
@property (nonatomic,copy) NSArray * severeWeatherEvents;                                       //@synthesize severeWeatherEvents=_severeWeatherEvents - In the implementation block
@property (nonatomic,copy) WFNextHourPrecipitation * nextHourPrecipitation;                     //@synthesize nextHourPrecipitation=_nextHourPrecipitation - In the implementation block
@property (nonatomic,copy) NSURL * severeWeatherEventLearnMoreURL;                              //@synthesize severeWeatherEventLearnMoreURL=_severeWeatherEventLearnMoreURL - In the implementation block
@property (nonatomic,readonly) unsigned long long aqiDataAvailabilityStatus; 
@property (nonatomic,retain) NSNumber * airQualityIdx;                                          //@synthesize airQualityIdx=_airQualityIdx - In the implementation block
@property (nonatomic,retain) NSNumber * airQualityCategory;                                     //@synthesize airQualityCategory=_airQualityCategory - In the implementation block
@property (nonatomic,copy) NSString * airQualityScale;                                          //@synthesize airQualityScale=_airQualityScale - In the implementation block
@property (nonatomic,retain) WFAQIScaleCategory * airQualityScaleCategory;                      //@synthesize airQualityScaleCategory=_airQualityScaleCategory - In the implementation block
@property (assign,nonatomic) unsigned long long airQualitySignificance;                         //@synthesize airQualitySignificance=_airQualitySignificance - In the implementation block
@property (nonatomic,copy) NSString * airQualityLocalizedRecommendation;                        //@synthesize airQualityLocalizedRecommendation=_airQualityLocalizedRecommendation - In the implementation block
@property (assign,nonatomic) BOOL airQualityTemporarilyUnavailable;                             //@synthesize airQualityTemporarilyUnavailable=_airQualityTemporarilyUnavailable - In the implementation block
@property (nonatomic,readonly) BOOL airQualityForceHideRecommendationString; 
@property (nonatomic,retain) WeatherAQIAttribution * airQualityAttribution;                     //@synthesize airQualityAttribution=_airQualityAttribution - In the implementation block
@property (nonatomic,copy) NSURL * airQualityProviderURL;                                       //@synthesize airQualityProviderURL=_airQualityProviderURL - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cityContainingLocation:(id)arg1 expectedName:(id)arg2 fromCities:(id)arg3 ;
+(id)_ISO8601Calendar;
-(NSURL *)link;
-(NSDate *)updateTime;
-(NSArray *)severeWeatherEvents;
-(unsigned long long)uvIndex;
-(BOOL)isDay;
-(id)dictionaryRepresentation;
-(void)setWindDirection:(float)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(NSURL *)deeplink;
-(BOOL)isUpdating;
-(long long)updateInterval;
-(void)setTransient:(BOOL)arg1 ;
-(double)latitude;
-(void)setWindSpeed:(float)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSTimeZone *)timeZone;
-(NSString *)airQualityScale;
-(void)setLink:(NSURL *)arg1 ;
-(void)setIsDay:(BOOL)arg1 ;
-(void)setUpdateInterval:(long long)arg1 ;
-(float)humidity;
-(id)detailedDescription;
-(NSTimer *)autoUpdateTimer;
-(NSString *)weatherDisplayName;
-(BOOL)_isUpdating;
-(void)setConditionCode:(long long)arg1 ;
-(void)setActiveGeocodeRequest:(WFGeocodeRequest *)arg1 ;
-(WFTemperature *)temperature;
-(long long)conditionCode;
-(void)setAirQualityScale:(NSString *)arg1 ;
-(void)_generateLocalizableStrings;
-(NSString *)fullName;
-(NSURL *)severeWeatherEventLearnMoreURL;
-(void)setUVIndex:(unsigned long long)arg1 ;
-(NSString *)countryCode;
-(BOOL)isTransient;
-(float)dewPoint;
-(NSURL *)airQualityProviderURL;
-(void)setPrecipitationPast24Hours:(double)arg1 ;
-(void)setDewPoint:(float)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setPressureRising:(unsigned long long)arg1 ;
-(long long)primaryConditionForRange:(NSRange)arg1 ;
-(unsigned long long)weatherDataAge;
-(float)windSpeed;
-(void)setAirQualityIdx:(NSNumber *)arg1 ;
-(void)setHumidity:(float)arg1 ;
-(void)setAirQualitySignificanceOverride:(unsigned long long)arg1 ;
-(float)visibility;
-(void)updateTimeZoneWithCompletionBlock:(/*^block*/id)arg1 ;
-(double)precipitationPast24Hours;
-(float)windDirection;
-(BOOL)isRequestedByFrameworkClient;
-(id)init;
-(unsigned long long)pressureRising;
-(void)setObservationTime:(unsigned long long)arg1 ;
-(unsigned long long)observationTime;
-(WFTemperature *)feelsLike;
-(float)heatIndex;
-(long long)locationOfTime:(long long)arg1 ;
-(void)setFeelsLike:(WFTemperature *)arg1 ;
-(NSString *)searchSubtitle;
-(CLLocationCoordinate2D)coordinate;
-(void)setMoonPhase:(unsigned long long)arg1 ;
-(void)removeUpdateObserver:(id)arg1 ;
-(void)setSevereWeatherEventLearnMoreURL:(NSURL *)arg1 ;
-(BOOL)isLocalWeatherCity;
-(void)cityDidFinishUpdatingWithError:(id)arg1 ;
-(CLLocation *)location;
-(void)setISO3166CountryAbbreviation:(NSString *)arg1 ;
-(void)setWindChill:(float)arg1 ;
-(double)longitude;
-(NSDictionary *)urlComponents;
-(BOOL)_dataIsValid;
-(void)setAirQualityCategoryOverride:(NSNumber *)arg1 ;
-(NSDate *)timeZoneUpdateDate;
-(NSString *)airQualityLocalizedRecommendation;
-(float)pressure;
-(void)setSevereWeatherEvents:(NSArray *)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setVisibility:(float)arg1 ;
-(void)setUpdateTimeString:(NSString *)arg1 ;
-(void)setSunriseTime:(unsigned long long)arg1 ;
-(void)setLastUpdateError:(NSError *)arg1 ;
-(void)_notifyDidStartWeatherUpdate;
-(WFGeocodeRequest *)activeGeocodeRequest;
-(void)setAutoUpdateTimer:(NSTimer *)arg1 ;
-(WFLocation *)wfLocation;
-(void)setAirQualityIdxOverride:(NSNumber *)arg1 ;
-(unsigned long long)precipitationForecast;
-(void)setAirQualityAttribution:(WeatherAQIAttribution *)arg1 ;
-(unsigned long long)aqiDataAvailabilityStatusFromAppConfig;
-(void)clearForecasts;
-(unsigned long long)sunsetTime;
-(WFNextHourPrecipitation *)nextHourPrecipitation;
-(void)setWfLocation:(WFLocation *)arg1 ;
-(id)naturalLanguageDescription;
-(NSString *)searchTitle;
-(void)setIsUpdating:(BOOL)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setSearchSubtitle:(NSString *)arg1 ;
-(void)setLastUpdateStatus:(unsigned long long)arg1 ;
-(NSString *)name;
-(WFAQIScaleCategory *)airQualityScaleCategory;
-(void)setIsRequestedByFrameworkClient:(BOOL)arg1 ;
-(void)setAutoUpdate:(BOOL)arg1 ;
-(void)setAirQualityScaleCategory:(WFAQIScaleCategory *)arg1 ;
-(BOOL)update;
-(NSString *)description;
-(void)setWeatherDisplayName:(NSString *)arg1 ;
-(WeatherAQIAttribution *)airQualityAttribution;
-(void)setSearchTitle:(NSString *)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(NSNumber *)airQualityCategory;
-(void)setDayForecasts:(NSArray *)arg1 ;
-(void)setWoeid:(NSString *)arg1 ;
-(id)windDirectionAsString:(double)arg1 ;
-(void)updateCityForSevereWeatherEvents:(id)arg1 ;
-(void)setPressure:(float)arg1 ;
-(double)distanceToLatitude:(double)arg1 longitude:(double)arg2 ;
-(void)setHourlyForecasts:(NSArray *)arg1 ;
-(id)getName;
-(void)setUpdateTime:(NSDate *)arg1 ;
-(void)setTemperature:(WFTemperature *)arg1 ;
-(void)setAirQualityProviderURL:(NSURL *)arg1 ;
-(unsigned long long)sunriseTime;
-(void)setAirQualityCategory:(NSNumber *)arg1 ;
-(void)setAqiDataAvailabilityStatusOverride:(unsigned long long)arg1 ;
-(NSString *)weatherLocationName;
-(NSError *)lastUpdateError;
-(BOOL)containsLatitude:(double)arg1 longitude:(double)arg2 ;
-(void)updateCityForModel:(id)arg1 ;
-(void)setState:(NSString *)arg1 ;
-(NSHashTable *)cityUpdateObservers;
-(unsigned long long)hash;
-(void)setIsLocalWeatherCity:(BOOL)arg1 ;
-(NSString *)state;
-(BOOL)airQualityForceHideRecommendationString;
-(NSString *)woeid;
-(BOOL)lockedForDemoMode;
-(void)_clearAutoUpdateTimer;
-(double)distanceToLocation:(id)arg1 ;
-(unsigned long long)airQualitySignificance;
-(void)setTimeZoneUpdateDate:(NSDate *)arg1 ;
-(NSArray *)dayForecasts;
-(NSArray *)hourlyForecasts;
-(unsigned long long)aqiDataAvailabilityStatusOverride;
-(BOOL)timeZoneIsFresh;
-(void)setName:(NSString *)arg1 ;
-(void)setHeatIndex:(float)arg1 ;
-(unsigned long long)aqiDataAvailabilityStatus;
-(void)setCityUpdateObservers:(NSHashTable *)arg1 ;
-(NSNumber *)airQualityCategoryOverride;
-(void)setDeeplink:(NSURL *)arg1 ;
-(NSString *)identifier;
-(void)setSunsetTime:(unsigned long long)arg1 ;
-(BOOL)isUpdatingOrNoData;
-(float)windChill;
-(void)discardDataIfNeeded;
-(NSNumber *)airQualityIdxOverride;
-(void)setWeatherLocationName:(NSString *)arg1 ;
-(NSString *)updateTimeString;
-(BOOL)_isValidLearnMoreURLForSevereEvent:(id)arg1 ;
-(void)setAirQualityLocalizedRecommendation:(NSString *)arg1 ;
-(BOOL)airQualityTemporarilyUnavailable;
-(void)setNextHourPrecipitation:(WFNextHourPrecipitation *)arg1 ;
-(unsigned long long)airQualitySignificanceOverride;
-(NSString *)weatherLocationCitationName;
-(void)setLockedForDemoMode:(BOOL)arg1 ;
-(BOOL)autoUpdate;
-(void)setAirQualitySignificance:(unsigned long long)arg1 ;
-(void)addUpdateObserver:(id)arg1 ;
-(id)displayName;
-(void)localWeatherDidBeginUpdate;
-(NSString *)ISO3166CountryAbbreviation;
-(BOOL)populateWithDataFromCity:(id)arg1 ;
-(void)_updateTimeZone;
-(long long)timeDigit;
-(NSString *)locationID;
-(id)cityAndState;
-(unsigned long long)moonPhase;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAirQualityTemporarilyUnavailable:(BOOL)arg1 ;
-(unsigned long long)lastUpdateStatus;
-(void)dealloc;
-(id)naturalLanguageDescriptionWithDescribedCondition:(out long long*)arg1 ;
-(BOOL)isDuplicateOfCity:(id)arg1 ;
-(BOOL)airQualityCanUseDefaultAttribution;
-(NSNumber *)airQualityIdx;
@end

