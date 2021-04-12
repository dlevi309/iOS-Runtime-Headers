/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@interface WFNetworkFailTracker : NSObject {

	int _numConsecutiveFails;
	double _lastFailTimeInSeconds;

}

@property (nonatomic,readonly) int numConsecutiveFails;                   //@synthesize numConsecutiveFails=_numConsecutiveFails - In the implementation block
@property (nonatomic,readonly) double lastFailTimeInSeconds;              //@synthesize lastFailTimeInSeconds=_lastFailTimeInSeconds - In the implementation block
-(void)incrementFailCount;
-(double)lastFailTimeInSeconds;
-(BOOL)lastFailTimeExpiredForSettings:(id)arg1 ;
-(int)numConsecutiveFails;
@end

