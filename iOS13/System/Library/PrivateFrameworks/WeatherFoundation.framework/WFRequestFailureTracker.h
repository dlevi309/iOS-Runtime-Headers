/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@interface WFRequestFailureTracker : NSObject {

	unsigned long long _requestFailures;
	unsigned long long _requestSuccesses;

}

@property (nonatomic,readonly) unsigned long long requestFailures;               //@synthesize requestFailures=_requestFailures - In the implementation block
@property (nonatomic,readonly) unsigned long long requestSuccesses;              //@synthesize requestSuccesses=_requestSuccesses - In the implementation block
-(void)incrementFailCount;
-(void)incrementSuccessCount;
-(double)failureRate;
-(unsigned long long)requestFailures;
-(unsigned long long)requestSuccesses;
@end

