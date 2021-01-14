/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataType.h>

@interface WALocationCondition : NSObject <AADataType> {

	long long _locationCondition;

}

@property (nonatomic,readonly) long long locationCondition;              //@synthesize locationCondition=_locationCondition - In the implementation block
-(long long)locationCondition;
-(id)toJsonValueAndReturnError:(id*)arg1 ;
-(id)initWithLocationCondition:(long long)arg1 ;
@end

