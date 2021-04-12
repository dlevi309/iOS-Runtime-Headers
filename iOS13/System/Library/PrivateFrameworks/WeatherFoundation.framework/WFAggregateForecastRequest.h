/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WFTask.h>

@class WFLocation;

@interface WFAggregateForecastRequest : WFTask {

	WFLocation* _location;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) WFLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) id completionHandler;               //@synthesize completionHandler=_completionHandler - In the implementation block
-(WFLocation *)location;
-(void)cleanup;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setLocation:(WFLocation *)arg1 ;
-(id)initWithLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)handleResponse:(id)arg1 ;
-(void)handleCancellation;
@end

