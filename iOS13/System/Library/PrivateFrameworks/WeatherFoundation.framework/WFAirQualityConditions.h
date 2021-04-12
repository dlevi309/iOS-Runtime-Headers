/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFLocation, NSDate, NSString, WFAQIScaleCategory, NSArray, WFAirPollutant, NSLocale;

@interface WFAirQualityConditions : NSObject <NSSecureCoding, NSCopying> {

	WFLocation* _location;
	NSDate* _date;
	NSDate* _expirationDate;
	NSString* _provider;
	NSString* _localizedDisclaimer;
	unsigned long long _localizedAirQualityIndex;
	WFAQIScaleCategory* _localizedAirQualityScaleCategory;
	NSArray* _pollutants;
	WFAirPollutant* _primaryPollutant;
	unsigned long long _category;
	NSLocale* _locale;
	NSString* _localizedAirQualityCategory;
	NSString* _airQualityScale;

}

@property (nonatomic,retain) WFLocation * location;                                              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                      //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSString * provider;                                                //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSString * localizedDisclaimer;                                     //@synthesize localizedDisclaimer=_localizedDisclaimer - In the implementation block
@property (nonatomic,retain) NSArray * pollutants;                                               //@synthesize pollutants=_pollutants - In the implementation block
@property (nonatomic,retain) WFAirPollutant * primaryPollutant;                                  //@synthesize primaryPollutant=_primaryPollutant - In the implementation block
@property (assign,nonatomic) unsigned long long localizedAirQualityIndex;                        //@synthesize localizedAirQualityIndex=_localizedAirQualityIndex - In the implementation block
@property (nonatomic,retain) WFAQIScaleCategory * localizedAirQualityScaleCategory;              //@synthesize localizedAirQualityScaleCategory=_localizedAirQualityScaleCategory - In the implementation block
@property (assign,nonatomic) unsigned long long category;                                        //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSLocale * locale;                                                    //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * localizedAirQualityCategory;                               //@synthesize localizedAirQualityCategory=_localizedAirQualityCategory - In the implementation block
@property (nonatomic,copy) NSString * airQualityScale;                                           //@synthesize airQualityScale=_airQualityScale - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSDate *)date;
-(NSLocale *)locale;
-(unsigned long long)category;
-(void)setCategory:(unsigned long long)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setProvider:(NSString *)arg1 ;
-(WFLocation *)location;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)provider;
-(void)setLocation:(WFLocation *)arg1 ;
-(BOOL)isExpired;
-(long long)airQualityIndex;
-(NSArray *)pollutants;
-(void)setPollutants:(NSArray *)arg1 ;
-(NSString *)airQualityScale;
-(void)setLocalizedAirQualityIndex:(unsigned long long)arg1 ;
-(void)setLocalizedAirQualityScaleCategory:(WFAQIScaleCategory *)arg1 ;
-(WFAQIScaleCategory *)localizedAirQualityScaleCategory;
-(unsigned long long)localizedAirQualityIndex;
-(void)setAirQualityScale:(NSString *)arg1 ;
-(void)setLocalizedAirQualityCategory:(NSString *)arg1 ;
-(WFAirPollutant *)primaryPollutant;
-(void)setPrimaryPollutant:(WFAirPollutant *)arg1 ;
-(NSString *)localizedDisclaimer;
-(void)setLocalizedDisclaimer:(NSString *)arg1 ;
-(NSString *)localizedAirQualityCategory;
@end

