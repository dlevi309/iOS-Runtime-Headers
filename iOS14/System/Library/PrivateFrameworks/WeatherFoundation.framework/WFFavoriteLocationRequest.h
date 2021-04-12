/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WFTask.h>

@interface WFFavoriteLocationRequest : WFTask {

	/*^block*/id _resultHandler;

}

@property (nonatomic,readonly) id resultHandler;              //@synthesize resultHandler=_resultHandler - In the implementation block
-(id)resultHandler;
-(void)handleResponse:(id)arg1 ;
-(void)startWithService:(id)arg1 ;
-(void)handleCancellation;
-(id)initWithResultHandler:(/*^block*/id)arg1 ;
@end

