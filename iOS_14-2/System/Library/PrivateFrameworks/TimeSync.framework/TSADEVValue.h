/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@interface TSADEVValue : NSObject {

	double _observationInterval;
	double _adev;

}

@property (nonatomic,readonly) double observationInterval;              //@synthesize observationInterval=_observationInterval - In the implementation block
@property (nonatomic,readonly) double adev;                             //@synthesize adev=_adev - In the implementation block
-(double)adev;
-(double)observationInterval;
-(id)description;
-(id)initWithObservationInterval:(double)arg1 andADEV:(double)arg2 ;
@end

