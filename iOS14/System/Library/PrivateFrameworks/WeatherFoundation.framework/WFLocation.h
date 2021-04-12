/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLLocation, NSString, NSTimeZone, NSDate;

@interface WFLocation : NSObject <NSSecureCoding, NSCopying> {

	CLLocation* _geoLocation;
	NSString* _weatherDisplayName;
	NSString* _weatherLocationName;
	NSString* _city;
	NSString* _county;
	NSString* _state;
	NSString* _stateAbbreviation;
	NSString* _country;
	NSString* _countryAbbreviation;
	NSTimeZone* _timeZone;
	NSDate* _creationDate;
	long long _archiveVersion;
	NSString* _locationID;
	NSString* _displayName;

}

@property (nonatomic,readonly) NSString * wf_weatherChannelGeocodeValue; 
@property (assign) long long archiveVersion;                                          //@synthesize archiveVersion=_archiveVersion - In the implementation block
@property (nonatomic,copy) CLLocation * geoLocation;                                  //@synthesize geoLocation=_geoLocation - In the implementation block
@property (nonatomic,copy) NSString * locationID;                                     //@synthesize locationID=_locationID - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * weatherDisplayName;                             //@synthesize weatherDisplayName=_weatherDisplayName - In the implementation block
@property (nonatomic,copy) NSString * weatherLocationName;                            //@synthesize weatherLocationName=_weatherLocationName - In the implementation block
@property (nonatomic,copy) NSString * city;                                           //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) NSString * county;                                         //@synthesize county=_county - In the implementation block
@property (nonatomic,copy) NSString * state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * stateAbbreviation;                              //@synthesize stateAbbreviation=_stateAbbreviation - In the implementation block
@property (nonatomic,copy) NSString * country;                                        //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSString * countryAbbreviation;                            //@synthesize countryAbbreviation=_countryAbbreviation - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                   //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                   //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) BOOL shouldQueryForAirQualityData; 
@property (nonatomic,readonly) BOOL needsGeocoding; 
+(BOOL)supportsSecureCoding;
+(id)locationsByFilteringDuplicates:(id)arg1 ;
+(id)knownKeys;
+(id)locationsByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2 ;
+(id)locationsByConsolidatingDuplicatesInBucket:(id)arg1 ;
+(long long)currentArchiveVersion;
-(BOOL)isDay;
-(NSTimeZone *)timeZone;
-(NSString *)weatherDisplayName;
-(NSString *)city;
-(void)setCity:(NSString *)arg1 ;
-(NSString *)country;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(CLLocation *)geoLocation;
-(long long)archiveVersion;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)county;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(id)initWithPlacemark:(id)arg1 ;
-(id)description;
-(void)setWeatherDisplayName:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(id)summary;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)weatherLocationName;
-(NSString *)wf_weatherChannelGeocodeValue;
-(void)setState:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)countryAbbreviation;
-(void)sunrise:(id*)arg1 andSunset:(id*)arg2 forDate:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(void)setCounty:(NSString *)arg1 ;
-(id)initWithMapItem:(id)arg1 isCurrentLocation:(BOOL)arg2 ;
-(id)summaryThatIsCompact:(BOOL)arg1 ;
-(NSString *)stateAbbreviation;
-(void)setStateAbbreviation:(NSString *)arg1 ;
-(void)setCountryAbbreviation:(NSString *)arg1 ;
-(void)setLocationID:(NSString *)arg1 ;
-(void)setArchiveVersion:(long long)arg1 ;
-(BOOL)isDayForDate:(id)arg1 ;
-(id)_sunAlmanacForDate:(id)arg1 ;
-(id)countriesSupportAQI;
-(BOOL)needsGeocoding;
-(id)initWithSearchResponse:(id)arg1 ;
-(id)sunriseForDate:(id)arg1 ;
-(id)sunsetForDate:(id)arg1 ;
-(BOOL)shouldQueryForAirQualityData;
-(id)localDataRepresentation;
-(id)initWithLocalDataRepresentation:(id)arg1 ;
-(id)cloudDictionaryRepresentation;
-(id)initWithCloudDictionaryRepresentation:(id)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(void)setWeatherLocationName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSString *)locationID;
-(BOOL)isEqual:(id)arg1 ;
-(void)setGeoLocation:(CLLocation *)arg1 ;
@end

