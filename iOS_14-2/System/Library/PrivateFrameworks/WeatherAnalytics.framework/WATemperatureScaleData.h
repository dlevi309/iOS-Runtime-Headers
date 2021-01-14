/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class WATemperatureScale;

@interface WATemperatureScaleData : NSObject <AADataEventType> {

	WATemperatureScale* _temperatureScale;

}

@property (nonatomic,readonly) WATemperatureScale * temperatureScale;              //@synthesize temperatureScale=_temperatureScale - In the implementation block
+(id)dataName;
-(id)toDict;
-(WATemperatureScale *)temperatureScale;
-(id)initWithTemperatureScale:(id)arg1 ;
@end

