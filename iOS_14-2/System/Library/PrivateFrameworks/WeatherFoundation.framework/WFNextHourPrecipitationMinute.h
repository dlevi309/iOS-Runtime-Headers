/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface WFNextHourPrecipitationMinute : NSObject <NSCopying> {

	double _intensity;
	double _chance;
	double _perceivedIntensity;
	NSDate* _date;

}

@property (nonatomic,readonly) double intensity;                       //@synthesize intensity=_intensity - In the implementation block
@property (nonatomic,readonly) double chance;                          //@synthesize chance=_chance - In the implementation block
@property (nonatomic,readonly) double perceivedIntensity;              //@synthesize perceivedIntensity=_perceivedIntensity - In the implementation block
@property (nonatomic,readonly) NSDate * date;                          //@synthesize date=_date - In the implementation block
-(double)chance;
-(double)intensity;
-(id)initWithIntensity:(double)arg1 chance:(double)arg2 perceivedIntensity:(double)arg3 date:(id)arg4 ;
-(double)perceivedIntensity;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

