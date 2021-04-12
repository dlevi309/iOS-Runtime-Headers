/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, WFLocation;

@interface WFWeatherConditions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _nightForecast;
	os_unfair_lock_s _componentsLock;
	NSMutableDictionary* _components;
	WFLocation* _location;

}

@property (nonatomic,retain) NSMutableDictionary * components;              //@synthesize components=_components - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s componentsLock;               //@synthesize componentsLock=_componentsLock - In the implementation block
@property (retain) WFLocation * location;                                   //@synthesize location=_location - In the implementation block
@property (getter=isNightForecast) BOOL nightForecast;                      //@synthesize nightForecast=_nightForecast - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setValue:(id)arg1 forComponent:(id)arg2 ;
-(id)valueForComponent:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)dictionaryRepresentation;
-(NSMutableDictionary *)components;
-(WFLocation *)location;
-(void)setLocation:(WFLocation *)arg1 ;
-(void)_commonInit;
-(void)setComponents:(NSMutableDictionary *)arg1 ;
-(void)setNightForecast:(BOOL)arg1 ;
-(BOOL)isNightForecast;
-(id)valueForComponentSync:(id)arg1 ;
-(void)_retrieveSunrise:(id*)arg1 sunset:(id*)arg2 ;
-(void)setValueSync:(id)arg1 forComponent:(id)arg2 ;
-(BOOL)wf_isDayIfSunrise:(id)arg1 sunset:(id)arg2 ;
-(id)allComponents;
-(BOOL)wf_isDay;
-(os_unfair_lock_s)componentsLock;
-(void)setComponentsLock:(os_unfair_lock_s)arg1 ;
@end

