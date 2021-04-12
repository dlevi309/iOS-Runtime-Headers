/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WFTask.h>

@class WFLocation, NSDate, NSDateComponents, NSData, NSLocale, NSString;

@interface WFForecastRequest : WFTask {

	BOOL _attachRawAPIData;
	WFLocation* _location;
	NSDate* _onDate;
	/*^block*/id _completionHandler;
	NSDateComponents* _date;
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
@property (nonatomic,readonly) NSDate * onDate;                            //@synthesize onDate=_onDate - In the implementation block
+(id)forecastRequestForLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)forecastRequestForLocation:(id)arg1 date:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)forecastRequestForLocation:(id)arg1 onDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setTrackingParameter:(NSString *)arg1 ;
-(NSString *)trackingParameter;
-(void)setForecastType:(unsigned long long)arg1 ;
-(void)handleResponse:(id)arg1 ;
-(void)setRawAPIData:(NSData *)arg1 ;
-(unsigned long long)forecastType;
-(void)startWithService:(id)arg1 ;
-(NSData *)rawAPIData;
-(void)handleCancellation;
-(id)initWithLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(BOOL)attachRawAPIData;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setAttachRawAPIData:(BOOL)arg1 ;
-(WFLocation *)location;
-(void)setDate:(NSDateComponents *)arg1 ;
-(id)completionHandler;
-(void)setLocation:(WFLocation *)arg1 ;
-(id)description;
-(id)initWithLocation:(id)arg1 date:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cleanup;
-(id)initWithLocation:(id)arg1 onDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSDateComponents *)date;
-(NSDate *)onDate;
@end

