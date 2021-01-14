/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@class NSDate, CLLocation;

@interface WFAirQualityProviderStation : NSObject {

	NSDate* _lastReadDate;
	CLLocation* _location;

}

@property (nonatomic,readonly) NSDate * lastReadDate;              //@synthesize lastReadDate=_lastReadDate - In the implementation block
@property (nonatomic,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
-(CLLocation *)location;
-(NSDate *)lastReadDate;
-(id)initWithLocation:(id)arg1 lastReadDate:(id)arg2 ;
@end

