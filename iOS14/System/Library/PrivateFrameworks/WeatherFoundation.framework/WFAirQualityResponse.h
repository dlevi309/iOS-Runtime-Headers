/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WFResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFAirQualityConditions, NSData;

@interface WFAirQualityResponse : WFResponse <NSSecureCoding> {

	BOOL _responseWasFromCache;
	WFAirQualityConditions* _airQualityConditions;
	NSData* _rawAPIData;

}

@property (assign,nonatomic) BOOL responseWasFromCache;                                  //@synthesize responseWasFromCache=_responseWasFromCache - In the implementation block
@property (nonatomic,retain) NSData * rawAPIData;                                        //@synthesize rawAPIData=_rawAPIData - In the implementation block
@property (nonatomic,retain) WFAirQualityConditions * airQualityConditions;              //@synthesize airQualityConditions=_airQualityConditions - In the implementation block
+(BOOL)supportsSecureCoding;
-(WFAirQualityConditions *)airQualityConditions;
-(void)setAirQualityConditions:(WFAirQualityConditions *)arg1 ;
-(BOOL)responseWasFromCache;
-(void)setRawAPIData:(NSData *)arg1 ;
-(NSData *)rawAPIData;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setResponseWasFromCache:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

