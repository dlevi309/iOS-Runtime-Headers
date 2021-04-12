/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TAVisitStateSettings : NSObject <NSSecureCoding> {

	unsigned long long _visitSnapshotCapacity;
	unsigned long long _visitDisplayBufferCapacity;
	unsigned long long _interVisitMetricSnapshotCapacity;
	double _thresholdOfLocationRelevance;
	double _interVisitSnapshotUpdateInterval;
	double _snapshotBufferTimeIntervalOfRetention;
	unsigned long long _loiBufferPerTypeCapacity;
	double _loiBufferTimeIntervalOfRetention;
	unsigned long long _maxNSigmaBetweenLastLocationAndVisit;
	double _qualitySnapshotDwellDuration;
	double _qualitySnapshotDisplayOnDuration;
	unsigned long long _uniqueUTObservationCapPerVisit;

}

@property (nonatomic,readonly) unsigned long long visitSnapshotCapacity;                             //@synthesize visitSnapshotCapacity=_visitSnapshotCapacity - In the implementation block
@property (nonatomic,readonly) unsigned long long visitDisplayBufferCapacity;                        //@synthesize visitDisplayBufferCapacity=_visitDisplayBufferCapacity - In the implementation block
@property (nonatomic,readonly) unsigned long long interVisitMetricSnapshotCapacity;                  //@synthesize interVisitMetricSnapshotCapacity=_interVisitMetricSnapshotCapacity - In the implementation block
@property (nonatomic,readonly) double thresholdOfLocationRelevance;                                  //@synthesize thresholdOfLocationRelevance=_thresholdOfLocationRelevance - In the implementation block
@property (nonatomic,readonly) double interVisitSnapshotUpdateInterval;                              //@synthesize interVisitSnapshotUpdateInterval=_interVisitSnapshotUpdateInterval - In the implementation block
@property (nonatomic,readonly) double snapshotBufferTimeIntervalOfRetention;                         //@synthesize snapshotBufferTimeIntervalOfRetention=_snapshotBufferTimeIntervalOfRetention - In the implementation block
@property (nonatomic,readonly) unsigned long long loiBufferPerTypeCapacity;                          //@synthesize loiBufferPerTypeCapacity=_loiBufferPerTypeCapacity - In the implementation block
@property (nonatomic,readonly) double loiBufferTimeIntervalOfRetention;                              //@synthesize loiBufferTimeIntervalOfRetention=_loiBufferTimeIntervalOfRetention - In the implementation block
@property (nonatomic,readonly) unsigned long long maxNSigmaBetweenLastLocationAndVisit;              //@synthesize maxNSigmaBetweenLastLocationAndVisit=_maxNSigmaBetweenLastLocationAndVisit - In the implementation block
@property (nonatomic,readonly) double qualitySnapshotDwellDuration;                                  //@synthesize qualitySnapshotDwellDuration=_qualitySnapshotDwellDuration - In the implementation block
@property (nonatomic,readonly) double qualitySnapshotDisplayOnDuration;                              //@synthesize qualitySnapshotDisplayOnDuration=_qualitySnapshotDisplayOnDuration - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueUTObservationCapPerVisit;                    //@synthesize uniqueUTObservationCapPerVisit=_uniqueUTObservationCapPerVisit - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)maxNSigmaBetweenLastLocationAndVisit;
-(void)encodeWithCoder:(id)arg1 ;
-(double)interVisitSnapshotUpdateInterval;
-(unsigned long long)loiBufferPerTypeCapacity;
-(double)snapshotBufferTimeIntervalOfRetention;
-(unsigned long long)visitSnapshotCapacity;
-(unsigned long long)uniqueUTObservationCapPerVisit;
-(id)initWithCoder:(id)arg1 ;
-(double)qualitySnapshotDisplayOnDuration;
-(unsigned long long)visitDisplayBufferCapacity;
-(id)initWithVisitSnapshotCapacity:(unsigned long long)arg1 visitDisplayBufferCapacity:(unsigned long long)arg2 interVisitMetricSnapshotCapacity:(unsigned long long)arg3 interVisitSnapshotUpdateInterval:(double)arg4 thresholdOfLocationRelevance:(double)arg5 snapshotBufferTimeIntervalOfRetention:(double)arg6 loiBufferPerTypeCapacity:(unsigned long long)arg7 loiBufferTimeIntervalOfRetention:(double)arg8 maxNSigmaBetweenLastLocationAndVisit:(unsigned long long)arg9 qualitySnapshotDwellDuration:(double)arg10 qualitySnapshotDisplayOnDuration:(double)arg11 uniqueUTObservationCapPerVisit:(unsigned long long)arg12 ;
-(id)initWithVisitSnapshotCapacityOrDefault:(id)arg1 visitDisplayBufferCapacityOrDefault:(id)arg2 interVisitMetricSnapshotCapacityOrDefault:(id)arg3 interVisitSnapshotUpdateIntervalOrDefault:(id)arg4 thresholdOfLocationRelevanceOrDefault:(id)arg5 snapshotBufferTimeIntervalOfRetentionOrDefault:(id)arg6 loiBufferPerTypeCapacityOrDefault:(id)arg7 loiBufferTimeIntervalOfRetentionOrDefault:(id)arg8 maxNSigmaBetweenLastLocationAndVisitOrDefault:(id)arg9 qualitySnapshotDwellDurationOrDefault:(id)arg10 qualitySnapshotDisplayOnDurationOrDefault:(id)arg11 uniqueUTObservationCapPerVisitOrDefault:(id)arg12 ;
-(double)qualitySnapshotDwellDuration;
-(BOOL)isEqual:(id)arg1 ;
-(double)thresholdOfLocationRelevance;
-(double)loiBufferTimeIntervalOfRetention;
-(unsigned long long)interVisitMetricSnapshotCapacity;
@end

