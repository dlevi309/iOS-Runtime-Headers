/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFLocation, NSDate, NSString, WFAirQualityProviderAttribution, WFAQIScaleCategory, NSURL, WFAQIScale, NSArray, WFAirPollutant, NSLocale;

@interface WFAirQualityConditions : NSObject <NSSecureCoding, NSCopying> {

	BOOL _temporarilyUnavailable;
	WFLocation* _location;
	NSDate* _date;
	NSDate* _expirationDate;
	NSString* _provider;
	WFAirQualityProviderAttribution* _providerAttribution;
	NSString* _localizedDisclaimer;
	unsigned long long _localizedAirQualityIndex;
	WFAQIScaleCategory* _localizedAirQualityScaleCategory;
	unsigned long long _significance;
	NSString* _localizedRecommendation;
	NSURL* _providerURL;
	WFAQIScale* _scale;
	NSArray* _pollutants;
	WFAirPollutant* _primaryPollutant;
	unsigned long long _category;
	NSLocale* _locale;
	NSString* _localizedAirQualityCategory;
	NSString* _airQualityScale;

}

@property (nonatomic,retain) WFLocation * location;                                              //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSDate * date;                                                        //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL temporarilyUnavailable;                                        //@synthesize temporarilyUnavailable=_temporarilyUnavailable - In the implementation block
@property (nonatomic,copy) NSString * provider;                                                  //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) WFAirQualityProviderAttribution * providerAttribution;              //@synthesize providerAttribution=_providerAttribution - In the implementation block
@property (nonatomic,copy) NSString * localizedDisclaimer;                                       //@synthesize localizedDisclaimer=_localizedDisclaimer - In the implementation block
@property (nonatomic,retain) NSArray * pollutants;                                               //@synthesize pollutants=_pollutants - In the implementation block
@property (nonatomic,retain) WFAirPollutant * primaryPollutant;                                  //@synthesize primaryPollutant=_primaryPollutant - In the implementation block
@property (assign,nonatomic) unsigned long long localizedAirQualityIndex;                        //@synthesize localizedAirQualityIndex=_localizedAirQualityIndex - In the implementation block
@property (nonatomic,retain) WFAQIScaleCategory * localizedAirQualityScaleCategory;              //@synthesize localizedAirQualityScaleCategory=_localizedAirQualityScaleCategory - In the implementation block
@property (assign,nonatomic) unsigned long long significance;                                    //@synthesize significance=_significance - In the implementation block
@property (nonatomic,copy) NSString * localizedRecommendation;                                   //@synthesize localizedRecommendation=_localizedRecommendation - In the implementation block
@property (nonatomic,copy) NSURL * providerURL;                                                  //@synthesize providerURL=_providerURL - In the implementation block
@property (nonatomic,retain) WFAQIScale * scale;                                                 //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long category;                                        //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSLocale * locale;                                                    //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * localizedAirQualityCategory;                               //@synthesize localizedAirQualityCategory=_localizedAirQualityCategory - In the implementation block
@property (nonatomic,copy) NSString * airQualityScale;                                           //@synthesize airQualityScale=_airQualityScale - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
+(BOOL)supportsSecureCoding;
-(NSArray *)pollutants;
-(NSString *)airQualityScale;
-(void)setPrimaryPollutant:(WFAirPollutant *)arg1 ;
-(void)setProvider:(NSString *)arg1 ;
-(void)setAirQualityScale:(NSString *)arg1 ;
-(void)setTemporarilyUnavailable:(BOOL)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSLocale *)locale;
-(void)setCategory:(unsigned long long)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(WFAirQualityProviderAttribution *)providerAttribution;
-(NSString *)provider;
-(NSString *)localizedRecommendation;
-(WFLocation *)location;
-(WFAQIScale *)scale;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)temporarilyUnavailable;
-(unsigned long long)category;
-(void)setDate:(NSDate *)arg1 ;
-(void)setLocalizedRecommendation:(NSString *)arg1 ;
-(long long)airQualityIndex;
-(WFAirPollutant *)primaryPollutant;
-(void)setLocation:(WFLocation *)arg1 ;
-(void)setPollutants:(NSArray *)arg1 ;
-(void)setSignificance:(unsigned long long)arg1 ;
-(void)setProviderAttribution:(WFAirQualityProviderAttribution *)arg1 ;
-(void)setProviderURL:(NSURL *)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(void)setScale:(WFAQIScale *)arg1 ;
-(void)setLocalizedDisclaimer:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(WFAQIScaleCategory *)localizedAirQualityScaleCategory;
-(NSString *)localizedDisclaimer;
-(NSDate *)date;
-(NSURL *)providerURL;
-(void)setLocalizedAirQualityCategory:(NSString *)arg1 ;
-(unsigned long long)significance;
-(unsigned long long)localizedAirQualityIndex;
-(void)setLocalizedAirQualityIndex:(unsigned long long)arg1 ;
-(NSString *)localizedAirQualityCategory;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocalizedAirQualityScaleCategory:(WFAQIScaleCategory *)arg1 ;
@end

