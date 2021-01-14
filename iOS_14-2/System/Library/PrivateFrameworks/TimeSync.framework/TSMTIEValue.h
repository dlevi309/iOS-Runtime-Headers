/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@interface TSMTIEValue : NSObject {

	double _observationInterval;
	double _mtie;

}

@property (nonatomic,readonly) double observationInterval;              //@synthesize observationInterval=_observationInterval - In the implementation block
@property (nonatomic,readonly) double mtie;                             //@synthesize mtie=_mtie - In the implementation block
-(double)mtie;
-(double)observationInterval;
-(id)description;
-(id)initWithObservationInterval:(double)arg1 andMTIE:(double)arg2 ;
@end

