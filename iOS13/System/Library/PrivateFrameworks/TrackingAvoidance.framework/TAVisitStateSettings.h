/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@interface TAVisitStateSettings : NSObject {

	unsigned long long _poiSnapshotCapacity;
	unsigned long long _poiDisplayBufferCapacity;
	unsigned long long _interVisitMetricSnapshotCapacity;
	double _thresholdOfLocationRelevance;
	double _interVisitSnapshotUpdateInterval;
	double _snapshotBufferTimeIntervalOfRetention;
	unsigned long long _loiBufferPerTypeCapacity;
	double _loiBufferTimeIntervalOfRetention;
	unsigned long long _maxNSigmaBetweenLastLocationAndVisit;
	double _qualitySnapshotDwellDuration;
	double _qualitySnapshotDisplayOnDuration;

}

@property (nonatomic,readonly) unsigned long long poiSnapshotCapacity;                               //@synthesize poiSnapshotCapacity=_poiSnapshotCapacity - In the implementation block
@property (nonatomic,readonly) unsigned long long poiDisplayBufferCapacity;                          //@synthesize poiDisplayBufferCapacity=_poiDisplayBufferCapacity - In the implementation block
@property (nonatomic,readonly) unsigned long long interVisitMetricSnapshotCapacity;                  //@synthesize interVisitMetricSnapshotCapacity=_interVisitMetricSnapshotCapacity - In the implementation block
@property (nonatomic,readonly) double thresholdOfLocationRelevance;                                  //@synthesize thresholdOfLocationRelevance=_thresholdOfLocationRelevance - In the implementation block
@property (nonatomic,readonly) double interVisitSnapshotUpdateInterval;                              //@synthesize interVisitSnapshotUpdateInterval=_interVisitSnapshotUpdateInterval - In the implementation block
@property (nonatomic,readonly) double snapshotBufferTimeIntervalOfRetention;                         //@synthesize snapshotBufferTimeIntervalOfRetention=_snapshotBufferTimeIntervalOfRetention - In the implementation block
@property (nonatomic,readonly) unsigned long long loiBufferPerTypeCapacity;                          //@synthesize loiBufferPerTypeCapacity=_loiBufferPerTypeCapacity - In the implementation block
@property (nonatomic,readonly) double loiBufferTimeIntervalOfRetention;                              //@synthesize loiBufferTimeIntervalOfRetention=_loiBufferTimeIntervalOfRetention - In the implementation block
@property (nonatomic,readonly) unsigned long long maxNSigmaBetweenLastLocationAndVisit;              //@synthesize maxNSigmaBetweenLastLocationAndVisit=_maxNSigmaBetweenLastLocationAndVisit - In the implementation block
@property (nonatomic,readonly) double qualitySnapshotDwellDuration;                                  //@synthesize qualitySnapshotDwellDuration=_qualitySnapshotDwellDuration - In the implementation block
@property (nonatomic,readonly) double qualitySnapshotDisplayOnDuration;                              //@synthesize qualitySnapshotDisplayOnDuration=_qualitySnapshotDisplayOnDuration - In the implementation block
-(double)thresholdOfLocationRelevance;
-(id)initWithPoiSnapshotCapacity:(unsigned long long)arg1 poiDisplayBufferCapacity:(unsigned long long)arg2 interVisitMetricSnapshotCapacity:(unsigned long long)arg3 interVisitSnapshotUpdateInterval:(double)arg4 thresholdOfLocationRelevance:(double)arg5 snapshotBufferTimeIntervalOfRetention:(double)arg6 loiBufferPerTypeCapacity:(unsigned long long)arg7 loiBufferTimeIntervalOfRetention:(double)arg8 maxNSigmaBetweenLastLocationAndVisit:(unsigned long long)arg9 qualitySnapshotDwellDuration:(double)arg10 qualitySnapshotDisplayOnDuration:(double)arg11 ;
-(id)initWithPoiSnapshotCapacityOrDefault:(id)arg1 poiDisplayBufferCapacityOrDefault:(id)arg2 interVisitMetricSnapshotCapacityOrDefault:(id)arg3 interVisitSnapshotUpdateIntervalOrDefault:(id)arg4 thresholdOfLocationRelevanceOrDefault:(id)arg5 snapshotBufferTimeIntervalOfRetentionOrDefault:(id)arg6 loiBufferPerTypeCapacityOrDefault:(id)arg7 loiBufferTimeIntervalOfRetentionOrDefault:(id)arg8 maxNSigmaBetweenLastLocationAndVisitOrDefault:(id)arg9 qualitySnapshotDwellDurationOrDefault:(id)arg10 qualitySnapshotDisplayOnDurationOrDefault:(id)arg11 ;
-(unsigned long long)poiSnapshotCapacity;
-(unsigned long long)poiDisplayBufferCapacity;
-(unsigned long long)interVisitMetricSnapshotCapacity;
-(double)interVisitSnapshotUpdateInterval;
-(double)snapshotBufferTimeIntervalOfRetention;
-(unsigned long long)loiBufferPerTypeCapacity;
-(double)loiBufferTimeIntervalOfRetention;
-(unsigned long long)maxNSigmaBetweenLastLocationAndVisit;
-(double)qualitySnapshotDwellDuration;
-(double)qualitySnapshotDisplayOnDuration;
@end

