/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSNumber;

@interface WAAQIAvailabilityData : NSObject <AADataEventType> {

	NSNumber* _isAQIAvailable;

}

@property (nonatomic,readonly) NSNumber * isAQIAvailable;              //@synthesize isAQIAvailable=_isAQIAvailable - In the implementation block
+(id)dataName;
-(id)toDict;
-(NSNumber *)isAQIAvailable;
-(id)initWithIsAQIAvailable:(id)arg1 ;
@end

