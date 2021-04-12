/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <WeatherFoundation/WFResponse.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface WFAggregateForecastResponse : WFResponse <NSCopying, NSSecureCoding> {

	BOOL _responseWasFromCache;
	NSArray* _forecasts;

}

@property (nonatomic,copy) NSArray * forecasts;                      //@synthesize forecasts=_forecasts - In the implementation block
@property (assign,nonatomic) BOOL responseWasFromCache;              //@synthesize responseWasFromCache=_responseWasFromCache - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)responseWasFromCache;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setResponseWasFromCache:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)forecasts;
-(void)setForecasts:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

