/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSUUID;

@interface _HDQuantityIntervalPair : NSObject {

	double _startInterval;
	double _endInterval;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) double startInterval;              //@synthesize startInterval=_startInterval - In the implementation block
@property (nonatomic,readonly) double endInterval;                //@synthesize endInterval=_endInterval - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                     //@synthesize uuid=_uuid - In the implementation block
-(NSUUID *)uuid;
-(double)endInterval;
-(double)startInterval;
-(id)initWithStartInterval:(double)arg1 endInterval:(double)arg2 uuid:(id)arg3 ;
@end

