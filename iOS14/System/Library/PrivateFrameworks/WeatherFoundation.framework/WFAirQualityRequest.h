/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WFTask.h>

@class NSLocale, WFLocation;

@interface WFAirQualityRequest : WFTask {

	BOOL _attachRawAPIData;
	NSLocale* _locale;
	WFLocation* _location;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) WFLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                  //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) id completionHandler;                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL attachRawAPIData;              //@synthesize attachRawAPIData=_attachRawAPIData - In the implementation block
+(id)airQualityRequestForLocation:(id)arg1 locale:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleResponse:(id)arg1 ;
-(void)startWithService:(id)arg1 ;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(BOOL)attachRawAPIData;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setAttachRawAPIData:(BOOL)arg1 ;
-(WFLocation *)location;
-(id)options;
-(id)completionHandler;
-(void)setLocation:(WFLocation *)arg1 ;
-(void)cleanup;
-(id)initWithLocation:(id)arg1 locale:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

