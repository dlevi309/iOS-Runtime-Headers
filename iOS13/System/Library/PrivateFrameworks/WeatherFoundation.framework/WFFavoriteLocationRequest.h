/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WFTask.h>

@interface WFFavoriteLocationRequest : WFTask {

	/*^block*/id _resultHandler;

}

@property (nonatomic,readonly) id resultHandler;              //@synthesize resultHandler=_resultHandler - In the implementation block
-(id)resultHandler;
-(id)initWithResultHandler:(/*^block*/id)arg1 ;
-(void)handleResponse:(id)arg1 ;
-(void)startWithService:(id)arg1 ;
-(void)handleCancellation;
@end

