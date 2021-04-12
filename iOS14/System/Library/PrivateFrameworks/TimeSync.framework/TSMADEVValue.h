/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@interface TSMADEVValue : NSObject {

	double _observationInterval;
	double _madev;

}

@property (nonatomic,readonly) double observationInterval;              //@synthesize observationInterval=_observationInterval - In the implementation block
@property (nonatomic,readonly) double madev;                            //@synthesize madev=_madev - In the implementation block
-(double)observationInterval;
-(double)madev;
-(id)description;
-(id)initWithObservationInterval:(double)arg1 andMADEV:(double)arg2 ;
@end

