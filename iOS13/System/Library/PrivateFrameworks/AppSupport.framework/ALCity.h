/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)setTimeZone:(NSString *)arg1 ;
-(NSString *)timeZone;
-(void)setName:(NSString *)arg1 ;
-(int)identifier;
-(void)setIdentifier:(int)arg1 ;
-(NSDictionary *)properties;
-(float)latitude;
-(float)longitude;
-(id)initWithProperties:(id)arg1 ;
-(NSString *)localeCode;
-(void)setCountryName:(NSString *)arg1 ;
-(void)setCountryOverride:(NSString *)arg1 ;
-(NSString *)countryName;
-(NSString *)unlocalizedName;
-(NSString *)unlocalizedCountryName;
-(id)initWithSQLRow:(char**)arg1 ;
-(void)setDisplayNameIncludingCountryShowsOnlyCountry:(BOOL)arg1 ;
-(void)setUnlocalizedCountryOverride:(NSString *)arg1 ;
-(NSString *)countryOverride;
-(id)displayNameIncludingCountry:(BOOL)arg1 withFormat:(id)arg2 ;
-(void)ensureLocalized;
-(NSString *)unlocalizedCountryOverride;
-(id)displayNameIncludingCountry:(BOOL)arg1 ;
-(NSString *)classicIdentifier;
-(void)setUnlocalizedName:(NSString *)arg1 ;
-(void)setUnlocalizedCountryName:(NSString *)arg1 ;
-(void)setLocaleCode:(NSString *)arg1 ;
-(void)setLongitude:(float)arg1 ;
-(void)setLatitude:(float)arg1 ;
-(NSString *)yahooCode;
-(void)setYahooCode:(NSString *)arg1 ;
-(BOOL)displayNameIncludingCountryShowsOnlyCountry;
@end

