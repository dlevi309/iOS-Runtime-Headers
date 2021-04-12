/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAirQualityConditions:(WFAirQualityConditions *)arg1 ;
-(WFAirQualityConditions *)airQualityConditions;
-(NSData *)rawAPIData;
-(void)setRawAPIData:(NSData *)arg1 ;
-(void)setResponseWasFromCache:(BOOL)arg1 ;
-(BOOL)responseWasFromCache;
@end

