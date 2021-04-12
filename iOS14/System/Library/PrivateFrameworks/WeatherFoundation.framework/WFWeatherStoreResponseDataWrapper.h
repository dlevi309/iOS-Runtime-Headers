/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@class WFParsedForecastData, WFAQIScale;

@interface WFWeatherStoreResponseDataWrapper : NSObject {

	unsigned long long _requestType;
	WFParsedForecastData* _forecastData;
	WFAQIScale* _aqiScale;

}

@property (assign,nonatomic) unsigned long long requestType;                   //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,retain) WFParsedForecastData * forecastData;              //@synthesize forecastData=_forecastData - In the implementation block
@property (nonatomic,retain) WFAQIScale * aqiScale;                            //@synthesize aqiScale=_aqiScale - In the implementation block
-(void)setRequestType:(unsigned long long)arg1 ;
-(unsigned long long)requestType;
-(WFParsedForecastData *)forecastData;
-(void)setForecastData:(WFParsedForecastData *)arg1 ;
-(void)setAqiScale:(WFAQIScale *)arg1 ;
-(id)initWithForecastData:(id)arg1 ;
-(id)initWithAQIScale:(id)arg1 ;
-(WFAQIScale *)aqiScale;
@end

