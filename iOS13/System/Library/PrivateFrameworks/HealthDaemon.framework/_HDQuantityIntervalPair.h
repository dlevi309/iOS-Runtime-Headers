/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@interface _HDQuantityIntervalPair : NSObject {

	double _startInterval;
	double _endInterval;

}

@property (nonatomic,readonly) double startInterval;              //@synthesize startInterval=_startInterval - In the implementation block
@property (nonatomic,readonly) double endInterval;                //@synthesize endInterval=_endInterval - In the implementation block
-(double)endInterval;
-(double)startInterval;
-(id)initWithStartInterval:(double)arg1 endInterval:(double)arg2 ;
@end

