/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/Weather-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFTemperature;

@interface WADayForecast : NSObject <NSCopying> {

	BOOL _isYesterday;
	WFTemperature* _high;
	WFTemperature* _low;
	double _percentPrecipitation;
	unsigned long long _icon;
	unsigned long long _dayOfWeek;
	unsigned long long _dayNumber;

}

@property (nonatomic,copy) WFTemperature * high;                        //@synthesize high=_high - In the implementation block
@property (nonatomic,copy) WFTemperature * low;                         //@synthesize low=_low - In the implementation block
@property (assign,nonatomic) double percentPrecipitation;               //@synthesize percentPrecipitation=_percentPrecipitation - In the implementation block
@property (assign,nonatomic) unsigned long long icon;                   //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) unsigned long long dayOfWeek;              //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (assign,nonatomic) unsigned long long dayNumber;              //@synthesize dayNumber=_dayNumber - In the implementation block
@property (assign,nonatomic) BOOL isYesterday;                          //@synthesize isYesterday=_isYesterday - In the implementation block
+(id)dayForecastForLocation:(id)arg1 conditions:(id)arg2 ;
-(double)percentPrecipitation;
-(WFTemperature *)low;
-(unsigned long long)dayOfWeek;
-(void)setPercentPrecipitation:(double)arg1 ;
-(void)setLow:(WFTemperature *)arg1 ;
-(WFTemperature *)high;
-(unsigned long long)icon;
-(void)setDayOfWeek:(unsigned long long)arg1 ;
-(void)setIcon:(unsigned long long)arg1 ;
-(void)setHigh:(WFTemperature *)arg1 ;
-(unsigned long long)dayNumber;
-(id)description;
-(void)setDayNumber:(unsigned long long)arg1 ;
-(long long)compareDayNumberToDayForecast:(id)arg1 ;
-(unsigned long long)hash;
-(void)setIsYesterday:(BOOL)arg1 ;
-(BOOL)isYesterday;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

