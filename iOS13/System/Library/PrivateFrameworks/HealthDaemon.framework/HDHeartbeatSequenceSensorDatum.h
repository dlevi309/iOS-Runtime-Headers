/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDataCollectorSensorDatum.h>

@class NSData, NSUUID;

@interface HDHeartbeatSequenceSensorDatum : HDDataCollectorSensorDatum {

	NSData* _heartbeatSequenceData;
	long long _context;
	double _longestSubsequenceStart;
	double _longestSubsequenceDuration;
	NSUUID* _heartRateVariabilityUUID;

}

@property (nonatomic,readonly) NSData * heartbeatSequenceData;                 //@synthesize heartbeatSequenceData=_heartbeatSequenceData - In the implementation block
@property (nonatomic,readonly) long long context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) double longestSubsequenceStart;                 //@synthesize longestSubsequenceStart=_longestSubsequenceStart - In the implementation block
@property (nonatomic,readonly) double longestSubsequenceDuration;              //@synthesize longestSubsequenceDuration=_longestSubsequenceDuration - In the implementation block
@property (nonatomic,readonly) NSUUID * heartRateVariabilityUUID;              //@synthesize heartRateVariabilityUUID=_heartRateVariabilityUUID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_dataFromHeartbeatArray:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)context;
-(id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartbeats:(id)arg3 context:(long long)arg4 longestSubsequenceStart:(double)arg5 longestSubsequenceDuration:(double)arg6 heartRateVariabilityUUID:(id)arg7 resumeContext:(id)arg8 ;
-(id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartbeats:(id)arg3 context:(long long)arg4 longestSubsequenceStart:(double)arg5 longestSubsequenceDuration:(double)arg6 medianHeartRate:(id)arg7 heartRateVariabilityUUID:(id)arg8 resumeContext:(id)arg9 ;
-(NSData *)heartbeatSequenceData;
-(double)longestSubsequenceStart;
-(double)longestSubsequenceDuration;
-(NSUUID *)heartRateVariabilityUUID;
@end

