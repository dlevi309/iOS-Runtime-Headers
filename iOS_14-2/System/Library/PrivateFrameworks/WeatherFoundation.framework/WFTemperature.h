/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WFTemperature : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_WF4 _temperatureValues;

}

@property (assign,nonatomic) double celsius; 
@property (assign,nonatomic) double fahrenheit; 
@property (assign,nonatomic) double kelvin; 
+(BOOL)supportsSecureCoding;
-(void)_resetTemperatureValues;
-(void)setFahrenheit:(double)arg1 ;
-(id)init;
-(void)setKelvin:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)temperatureForUnit:(int)arg1 ;
-(double)fahrenheit;
-(id)description;
-(BOOL)isEqualToTemperature:(id)arg1 ;
-(BOOL)_unitIsHydrated:(int)arg1 outputValue:(out double*)arg2 ;
-(double)celsius;
-(void)setCelsius:(double)arg1 ;
-(double)kelvin;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_setValue:(double)arg1 forUnit:(int)arg2 ;
-(id)initWithTemperatureUnit:(int)arg1 value:(double)arg2 ;
@end

