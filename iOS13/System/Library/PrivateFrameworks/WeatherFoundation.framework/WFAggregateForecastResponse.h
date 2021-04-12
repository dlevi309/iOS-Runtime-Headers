/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setForecasts:(NSArray *)arg1 ;
-(void)setResponseWasFromCache:(BOOL)arg1 ;
-(NSArray *)forecasts;
-(BOOL)responseWasFromCache;
@end

