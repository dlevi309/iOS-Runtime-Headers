/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)options;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(WFLocation *)location;
-(void)cleanup;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setLocation:(WFLocation *)arg1 ;
-(id)initWithLocation:(id)arg1 locale:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)attachRawAPIData;
-(void)handleResponse:(id)arg1 ;
-(void)startWithService:(id)arg1 ;
-(void)setAttachRawAPIData:(BOOL)arg1 ;
@end

