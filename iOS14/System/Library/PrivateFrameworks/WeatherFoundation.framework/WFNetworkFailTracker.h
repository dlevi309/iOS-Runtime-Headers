/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@interface WFNetworkFailTracker : NSObject {

	int _numConsecutiveFails;
	double _lastFailTimeInSeconds;

}

@property (nonatomic,readonly) int numConsecutiveFails;                   //@synthesize numConsecutiveFails=_numConsecutiveFails - In the implementation block
@property (nonatomic,readonly) double lastFailTimeInSeconds;              //@synthesize lastFailTimeInSeconds=_lastFailTimeInSeconds - In the implementation block
-(double)lastFailTimeInSeconds;
-(void)incrementFailCount;
-(BOOL)lastFailTimeExpiredForSettings:(id)arg1 ;
-(int)numConsecutiveFails;
@end

