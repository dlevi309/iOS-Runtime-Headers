/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)isCachedLanguageStaleForProperties:(id)arg1 ;
+(BOOL)isCachedLanguageStaleForProperties:(id)arg1 systemLanguage:(id)arg2 ;
+(id)unlocalizedExampleCity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)timeZone;
-(NSString *)countryCode;
-(NSDictionary *)properties;
-(id)initWithProperties:(id)arg1 ;
-(NSString *)countryName;
-(NSString *)unlocalizedCountryName;
-(id)initWithALCity:(id)arg1 ;
-(NSURL *)idUrl;
-(id)initWithTimeZone:(id)arg1 countryCode:(id)arg2 name:(id)arg3 countryName:(id)arg4 unlocalizedName:(id)arg5 unlocalizedCountryName:(id)arg6 ;
-(id)initWithALCityIdentifier:(int)arg1 ;
-(NSNumber *)alCityId;
-(NSString *)unlocalizedCityName;
-(ALCity *)alCity;
@end

