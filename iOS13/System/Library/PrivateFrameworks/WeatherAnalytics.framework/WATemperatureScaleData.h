/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

