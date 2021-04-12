/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSString;

@interface WAMobileData : NSObject <AADataEventType> {

	NSString* _carrier;
	NSString* _countryCode;
	NSString* _networkCode;

}

@property (nonatomic,readonly) NSString * carrier;                  //@synthesize carrier=_carrier - In the implementation block
@property (nonatomic,readonly) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) NSString * networkCode;              //@synthesize networkCode=_networkCode - In the implementation block
+(id)dataName;
-(NSString *)networkCode;
-(NSString *)carrier;
-(id)toDict;
-(NSString *)countryCode;
-(id)initWithCarrier:(id)arg1 countryCode:(id)arg2 networkCode:(id)arg3 ;
@end

