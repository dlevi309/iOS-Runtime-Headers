/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WFTask.h>

@class WFLocation, NSLocale;

@interface WFAggregateCommonRequest : WFTask {

	WFLocation* _location;
	unsigned long long _types;
	/*^block*/id _completionHandler;
	NSLocale* _locale;

}

@property (nonatomic,retain) NSLocale * locale;                        //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) WFLocation * location;                  //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) unsigned long long types;               //@synthesize types=_types - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)description;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(WFLocation *)location;
-(void)cleanup;
-(id)completionHandler;
-(unsigned long long)types;
-(void)handleResponse:(id)arg1 ;
-(void)startWithService:(id)arg1 ;
-(void)handleCancellation;
-(unsigned long long)_supportedForecastTypes:(unsigned long long)arg1 ;
-(id)initWithLocation:(id)arg1 types:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

