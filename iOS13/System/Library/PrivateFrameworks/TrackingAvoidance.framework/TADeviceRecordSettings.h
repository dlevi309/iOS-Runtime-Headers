/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@interface TADeviceRecordSettings : NSObject {

	double _expiryTimeInterval;
	double _purgeTimeInterval;

}

@property (assign,nonatomic) double expiryTimeInterval;              //@synthesize expiryTimeInterval=_expiryTimeInterval - In the implementation block
@property (assign,nonatomic) double purgeTimeInterval;               //@synthesize purgeTimeInterval=_purgeTimeInterval - In the implementation block
-(id)init;
-(id)initWithExpiryTimeInterval:(double)arg1 purgeTimeInterval:(double)arg2 ;
-(double)expiryTimeInterval;
-(void)setExpiryTimeInterval:(double)arg1 ;
-(double)purgeTimeInterval;
-(void)setPurgeTimeInterval:(double)arg1 ;
@end

