/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@interface WFWeatherStoreCallbackWrapper : NSObject {

	unsigned long long _requestType;
	/*^block*/id _forecastRetrievalCompletionBlock;
	/*^block*/id _aqiScaleRetrievalCompletionBlock;

}

@property (assign,nonatomic) unsigned long long requestType;                 //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) id forecastRetrievalCompletionBlock;              //@synthesize forecastRetrievalCompletionBlock=_forecastRetrievalCompletionBlock - In the implementation block
@property (nonatomic,copy) id aqiScaleRetrievalCompletionBlock;              //@synthesize aqiScaleRetrievalCompletionBlock=_aqiScaleRetrievalCompletionBlock - In the implementation block
-(void)setRequestType:(unsigned long long)arg1 ;
-(unsigned long long)requestType;
-(void)setForecastRetrievalCompletionBlock:(id)arg1 ;
-(void)setAqiScaleRetrievalCompletionBlock:(id)arg1 ;
-(id)forecastRetrievalCompletionBlock;
-(id)aqiScaleRetrievalCompletionBlock;
-(id)initWithForecastRetrievalBlock:(/*^block*/id)arg1 ;
-(id)initWithAQIScaleRetrievalBlock:(/*^block*/id)arg1 ;
-(void)executeCallbackwithResponse:(id)arg1 error:(id)arg2 ;
@end

