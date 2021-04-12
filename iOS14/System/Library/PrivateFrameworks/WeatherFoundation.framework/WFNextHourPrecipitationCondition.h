/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface WFNextHourPrecipitationCondition : NSObject <NSCopying> {

	unsigned long long _type;
	double _intensity;
	double _probability;
	NSDate* _validUntil;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double intensity;                     //@synthesize intensity=_intensity - In the implementation block
@property (nonatomic,readonly) double probability;                   //@synthesize probability=_probability - In the implementation block
@property (nonatomic,readonly) NSDate * validUntil;                  //@synthesize validUntil=_validUntil - In the implementation block
-(double)probability;
-(double)intensity;
-(unsigned long long)typeForString:(id)arg1 ;
-(id)initWithType:(id)arg1 intensity:(double)arg2 probability:(double)arg3 validUntil:(id)arg4 ;
-(unsigned long long)type;
-(NSDate *)validUntil;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

