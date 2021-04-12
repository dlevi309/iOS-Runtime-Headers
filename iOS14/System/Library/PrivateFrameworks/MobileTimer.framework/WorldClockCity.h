/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class ALCity, NSString, NSDictionary, NSNumber, NSURL;

@interface WorldClockCity : NSObject {

	ALCity* _alCity;
	NSString* _timeZone;
	NSString* _name;
	NSString* _countryName;
	NSString* _countryCode;
	NSString* _unlocalizedName;
	NSString* _unlocalizedCountryName;

}

@property (nonatomic,readonly) NSDictionary * properties; 
@property (nonatomic,readonly) ALCity * alCity;                                //@synthesize alCity=_alCity - In the implementation block
@property (nonatomic,readonly) NSNumber * alCityId; 
@property (nonatomic,readonly) NSString * timeZone; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * countryName; 
@property (nonatomic,readonly) NSString * unlocalizedCityName; 
@property (nonatomic,readonly) NSString * unlocalizedCountryName; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) NSURL * idUrl; 
+(BOOL)isWorldClockCityProperties:(id)arg1 ;
+(id)unlocalizedExampleCity;
+(BOOL)isCachedLanguageStaleForProperties:(id)arg1 systemLanguage:(id)arg2 ;
+(BOOL)isCachedLanguageStaleForProperties:(id)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(NSString *)timeZone;
-(NSDictionary *)properties;
-(NSString *)countryCode;
-(id)initWithTimeZone:(id)arg1 countryCode:(id)arg2 name:(id)arg3 countryName:(id)arg4 unlocalizedName:(id)arg5 unlocalizedCountryName:(id)arg6 ;
-(NSString *)unlocalizedCityName;
-(NSString *)countryName;
-(NSString *)name;
-(id)description;
-(NSNumber *)alCityId;
-(NSURL *)idUrl;
-(id)initWithALCity:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithALCityIdentifier:(int)arg1 ;
-(ALCity *)alCity;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)unlocalizedCountryName;
@end

