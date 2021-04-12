/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSNumber;

@interface WALocationData : NSObject <AADataEventType> {

	NSNumber* _latitude;
	NSNumber* _longitude;

}

@property (nonatomic,readonly) NSNumber * latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) NSNumber * longitude;              //@synthesize longitude=_longitude - In the implementation block
+(id)dataName;
-(NSNumber *)latitude;
-(NSNumber *)longitude;
-(id)initWithLatitude:(id)arg1 longitude:(id)arg2 ;
-(id)toDict;
@end

