/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TADeviceRecordSettings : NSObject <NSSecureCoding> {

	double _expiryTimeInterval;
	double _purgeTimeInterval;
	double _keepAliveInterval;
	double _minimumStagingInterval;
	long long _stagingBackstopHour;
	long long _assumedKeyRollHour;
	double _scanInterval;

}

@property (assign,nonatomic) double expiryTimeInterval;                    //@synthesize expiryTimeInterval=_expiryTimeInterval - In the implementation block
@property (assign,nonatomic) double purgeTimeInterval;                     //@synthesize purgeTimeInterval=_purgeTimeInterval - In the implementation block
@property (nonatomic,readonly) double keepAliveInterval;                   //@synthesize keepAliveInterval=_keepAliveInterval - In the implementation block
@property (nonatomic,readonly) double minimumStagingInterval;              //@synthesize minimumStagingInterval=_minimumStagingInterval - In the implementation block
@property (nonatomic,readonly) long long stagingBackstopHour;              //@synthesize stagingBackstopHour=_stagingBackstopHour - In the implementation block
@property (nonatomic,readonly) long long assumedKeyRollHour;               //@synthesize assumedKeyRollHour=_assumedKeyRollHour - In the implementation block
@property (nonatomic,readonly) double scanInterval;                        //@synthesize scanInterval=_scanInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)scanInterval;
-(id)init;
-(id)initWithExpiryTimeInterval:(double)arg1 purgeTimeInterval:(double)arg2 keepAliveInterval:(double)arg3 minimumStagingInterval:(double)arg4 stagingBackstopHour:(unsigned long long)arg5 assumedKeyRollHour:(unsigned long long)arg6 scanInterval:(double)arg7 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)keepAliveInterval;
-(void)setExpiryTimeInterval:(double)arg1 ;
-(long long)assumedKeyRollHour;
-(long long)stagingBackstopHour;
-(id)initWithCoder:(id)arg1 ;
-(double)expiryTimeInterval;
-(id)initWithExpiryTimeIntervalOrDefault:(id)arg1 purgeTimeIntervalOrDefault:(id)arg2 keepAliveIntervalOrDefault:(id)arg3 minimumStagingIntervalOrDefault:(id)arg4 stagingBackstopHourOrDefault:(id)arg5 assumedKeyRollHourOrDefault:(id)arg6 scanIntervalOrDefault:(id)arg7 ;
-(double)minimumStagingInterval;
-(void)setPurgeTimeInterval:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)purgeTimeInterval;
@end

