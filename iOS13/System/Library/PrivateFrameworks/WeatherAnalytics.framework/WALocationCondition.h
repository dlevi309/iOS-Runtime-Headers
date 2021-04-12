/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataType.h>

@interface WALocationCondition : NSObject <AADataType> {

	long long _locationCondition;

}

@property (nonatomic,readonly) long long locationCondition;              //@synthesize locationCondition=_locationCondition - In the implementation block
-(id)toJsonValueAndReturnError:(id*)arg1 ;
-(long long)locationCondition;
-(id)initWithLocationCondition:(long long)arg1 ;
@end

