/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFPersonalUserSettings : NSObject <NSSecureCoding> {

	BOOL _twentyFourHourTimeDisplay;
	NSString* _temperatureUnit;
	NSString* _region;
	NSString* _countryCode;
	NSString* _preferredLanguage;

}

@property (nonatomic,copy) NSString * temperatureUnit;                    //@synthesize temperatureUnit=_temperatureUnit - In the implementation block
@property (assign,nonatomic) BOOL twentyFourHourTimeDisplay;              //@synthesize twentyFourHourTimeDisplay=_twentyFourHourTimeDisplay - In the implementation block
@property (nonatomic,copy) NSString * region;                             //@synthesize region=_region - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                        //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * preferredLanguage;                  //@synthesize preferredLanguage=_preferredLanguage - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setTemperatureUnit:(NSString *)arg1 ;
-(NSString *)preferredLanguage;
-(NSString *)temperatureUnit;
-(NSString *)region;
-(NSString *)countryCode;
-(void)setRegion:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTwentyFourHourTimeDisplay:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPreferredLanguage:(NSString *)arg1 ;
-(BOOL)twentyFourHourTimeDisplay;
@end

