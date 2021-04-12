/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataType.h>

@interface WANetworkEventType : NSObject <AADataType> {

	long long _networkEventType;

}

@property (nonatomic,readonly) long long networkEventType;              //@synthesize networkEventType=_networkEventType - In the implementation block
-(id)toJsonValueAndReturnError:(id*)arg1 ;
-(long long)networkEventType;
-(id)initWithNetworkEventType:(long long)arg1 ;
@end

