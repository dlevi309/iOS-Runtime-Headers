/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


@class NSString, NSDictionary;

@interface ALCity : NSObject {

	int _identifier;
	NSString* _localeCode;
	NSString* _timeZone;
	float _longitude;
	float _latitude;
	NSString* _yahooCode;
	NSString* _name;
	NSString* _unlocalizedName;
	NSString* _countryName;
	NSString* _unlocalizedCountryName;
	NSString* _countryOverride;
	NSString* _unlocalizedCountryOverride;
	NSString* _identifierForCPCity;
	BOOL _localizationAttempted;
	BOOL _displayNameIncludingCountryShowsOnlyCountry;

}

@property (nonatomic,readonly) NSString * classicIdentifier; 
@property (nonatomic,readonly) NSDictionary * properties; 
@property (assign,nonatomic) int identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * localeCode;                                         //@synthesize localeCode=_localeCode - In the implementation block
@property (nonatomic,retain) NSString * timeZone;                                           //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) float longitude;                                               //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) float latitude;                                                //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) NSString * yahooCode;                                          //@synthesize yahooCode=_yahooCode - In the implementation block
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * unlocalizedName; 
@property (nonatomic,retain) NSString * countryName; 
@property (nonatomic,retain) NSString * unlocalizedCountryName; 
@property (nonatomic,retain) NSString * countryOverride; 
@property (nonatomic,retain) NSString * unlocalizedCountryOverride;                         //@synthesize unlocalizedCountryOverride=_unlocalizedCountryOverride - In the implementation block
@property (assign,nonatomic) BOOL displayNameIncludingCountryShowsOnlyCountry;              //@synthesize displayNameIncludingCountryShowsOnlyCountry=_displayNameIncludingCountryShowsOnlyCountry - In the implementation block
-(id)initWithProperties:(id)arg1 ;
-(float)latitude;
-(NSString *)timeZone;
-(void)setCountryName:(NSString *)arg1 ;
-(NSDictionary *)properties;
-(void)setTimeZone:(NSString *)arg1 ;
-(id)init;
-(NSString *)countryName;
-(void)ensureLocalized;
-(float)longitude;
-(NSString *)unlocalizedName;
-(void)setLongitude:(float)arg1 ;
-(void)setUnlocalizedName:(NSString *)arg1 ;
-(id)displayNameIncludingCountry:(BOOL)arg1 withFormat:(id)arg2 ;
-(void)setCountryOverride:(NSString *)arg1 ;
-(void)setLatitude:(float)arg1 ;
-(id)initWithSQLRow:(char**)arg1 ;
-(NSString *)name;
-(id)description;
-(NSString *)unlocalizedCountryOverride;
-(BOOL)displayNameIncludingCountryShowsOnlyCountry;
-(NSString *)countryOverride;
-(void)setUnlocalizedCountryName:(NSString *)arg1 ;
-(void)setUnlocalizedCountryOverride:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setYahooCode:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(int)arg1 ;
-(int)identifier;
-(void)setDisplayNameIncludingCountryShowsOnlyCountry:(BOOL)arg1 ;
-(NSString *)yahooCode;
-(NSString *)localeCode;
-(void)setLocaleCode:(NSString *)arg1 ;
-(id)displayNameIncludingCountry:(BOOL)arg1 ;
-(NSString *)classicIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)unlocalizedCountryName;
-(void)dealloc;
@end

