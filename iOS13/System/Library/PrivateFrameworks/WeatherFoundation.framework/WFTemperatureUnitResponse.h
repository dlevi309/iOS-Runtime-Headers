/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WFResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WFTemperatureUnitResponse : WFResponse <NSSecureCoding> {

	int _temperatureUnit;

}

@property (assign,nonatomic) int temperatureUnit;              //@synthesize temperatureUnit=_temperatureUnit - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)temperatureUnit;
-(void)setTemperatureUnit:(int)arg1 ;
@end

