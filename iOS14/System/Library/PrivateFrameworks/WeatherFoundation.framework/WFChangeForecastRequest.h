/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WFTask.h>

@class WFLocation;

@interface WFChangeForecastRequest : WFTask {

	WFLocation* _location;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy,readonly) WFLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)handleResponse:(id)arg1 ;
-(void)startWithService:(id)arg1 ;
-(id)initWithLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(WFLocation *)location;
-(id)completionHandler;
@end

