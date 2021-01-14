/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFLocation, NSMutableDictionary;

@interface WFWeatherConditions : NSObject <NSCopying, NSSecureCoding> {

	WFLocation* _location;
	BOOL _nightForecast;
	os_unfair_lock_s _componentsLock;
	NSMutableDictionary* _components;

}

@property (nonatomic,retain) NSMutableDictionary * components;              //@synthesize components=_components - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s componentsLock;               //@synthesize componentsLock=_componentsLock - In the implementation block
@property (copy) WFLocation * location; 
@property (getter=isNightForecast) BOOL nightForecast;                      //@synthesize nightForecast=_nightForecast - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)calendar;
+(unsigned long long)dateComponentCalendarUnits;
-(id)dictionaryRepresentation;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setComponents:(NSMutableDictionary *)arg1 ;
-(id)valueForComponent:(id)arg1 ;
-(id)init;
-(void)setComponentsLock:(os_unfair_lock_s)arg1 ;
-(BOOL)isNightForecast;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(WFLocation *)location;
-(BOOL)wf_isDayIfSunrise:(id)arg1 sunset:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLocation:(WFLocation *)arg1 ;
-(NSMutableDictionary *)components;
-(id)valueForComponentSync:(id)arg1 ;
-(void)setValue:(id)arg1 forComponent:(id)arg2 ;
-(id)description;
-(BOOL)wf_isDay;
-(id)allComponents;
-(id)initWithCoder:(id)arg1 ;
-(void)setNightForecast:(BOOL)arg1 ;
-(void)editLinksWithLocale:(id)arg1 trackingParameter:(id)arg2 ;
-(void)_commonInit;
-(void)setValueSync:(id)arg1 forComponent:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(os_unfair_lock_s)componentsLock;
@end

