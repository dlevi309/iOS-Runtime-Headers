/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WFTask.h>

@class WFLocation, NSString, NSLocale;

@interface WFAggregateCommonRequest : WFTask {

	int _units;
	WFLocation* _location;
	unsigned long long _types;
	NSString* _trackingParameter;
	/*^block*/id _completionHandler;
	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) WFLocation * location;                     //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) unsigned long long types;                  //@synthesize types=_types - In the implementation block
@property (nonatomic,readonly) int units;                                 //@synthesize units=_units - In the implementation block
@property (nonatomic,readonly) NSString * trackingParameter;              //@synthesize trackingParameter=_trackingParameter - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                 //@synthesize completionHandler=_completionHandler - In the implementation block
-(int)units;
-(NSString *)trackingParameter;
-(unsigned long long)types;
-(void)handleResponse:(id)arg1 ;
-(void)startWithService:(id)arg1 ;
-(void)handleCancellation;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)initWithLocation:(id)arg1 types:(unsigned long long)arg2 units:(int)arg3 trackingParameter:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(WFLocation *)location;
-(id)completionHandler;
-(id)initWithLocation:(id)arg1 types:(unsigned long long)arg2 trackingParameter:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)description;
-(unsigned long long)_supportedForecastTypes:(unsigned long long)arg1 ;
-(void)cleanup;
@end

