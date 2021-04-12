/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WFTask.h>

@class WFLocation, NSDateComponents, NSData, NSLocale, NSString;

@interface WFForecastRequest : WFTask {

	BOOL _attachRawAPIData;
	WFLocation* _location;
	NSDateComponents* _date;
	/*^block*/id _completionHandler;
	unsigned long long _forecastType;
	NSData* _rawAPIData;
	NSLocale* _locale;
	NSString* _trackingParameter;

}

@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSDateComponents * date;                        //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) WFLocation * location;                          //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) unsigned long long forecastType;              //@synthesize forecastType=_forecastType - In the implementation block
@property (assign,nonatomic) BOOL attachRawAPIData;                        //@synthesize attachRawAPIData=_attachRawAPIData - In the implementation block
@property (nonatomic,retain) NSData * rawAPIData;                          //@synthesize rawAPIData=_rawAPIData - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                            //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * trackingParameter;                 //@synthesize trackingParameter=_trackingParameter - In the implementation block
+(id)forecastRequestForLocation:(id)arg1 date:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)forecastRequestForLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)description;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSDateComponents *)date;
-(NSLocale *)locale;
-(WFLocation *)location;
-(void)cleanup;
-(void)setDate:(NSDateComponents *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setLocation:(WFLocation *)arg1 ;
-(id)initWithLocation:(id)arg1 date:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)trackingParameter;
-(void)setTrackingParameter:(NSString *)arg1 ;
-(id)initWithLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSData *)rawAPIData;
-(void)setRawAPIData:(NSData *)arg1 ;
-(BOOL)attachRawAPIData;
-(void)handleResponse:(id)arg1 ;
-(void)startWithService:(id)arg1 ;
-(void)setAttachRawAPIData:(BOOL)arg1 ;
-(id)editLinksForForecast:(id)arg1 ;
-(void)handleCancellation;
-(unsigned long long)forecastType;
-(void)setForecastType:(unsigned long long)arg1 ;
@end

