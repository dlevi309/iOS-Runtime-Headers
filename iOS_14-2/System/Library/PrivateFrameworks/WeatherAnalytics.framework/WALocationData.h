/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)toDict;
-(NSNumber *)longitude;
-(id)initWithLatitude:(id)arg1 longitude:(id)arg2 ;
@end

