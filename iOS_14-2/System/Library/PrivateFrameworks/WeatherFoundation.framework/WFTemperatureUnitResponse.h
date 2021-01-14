/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WFResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WFTemperatureUnitResponse : WFResponse <NSSecureCoding> {

	int _temperatureUnit;

}

@property (assign,nonatomic) int temperatureUnit;              //@synthesize temperatureUnit=_temperatureUnit - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTemperatureUnit:(int)arg1 ;
-(int)temperatureUnit;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

