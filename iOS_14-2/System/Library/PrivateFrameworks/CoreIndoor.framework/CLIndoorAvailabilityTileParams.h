/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/


#import <CoreIndoor/CoreIndoor-Structs.h>
@interface CLIndoorAvailabilityTileParams : NSObject {

	optional<proto::params::LocalizerParameters> _optionalParams;
	BOOL _hasMotionActivityDebounceParameters;
	BOOL _hasNonFitnessToCyclingSeconds;
	BOOL _hasNonFitnessToRunningSeconds;
	BOOL _hasRunningToNonFitnessSeconds;
	BOOL _hasCyclingToNonFitnessSeconds;
	BOOL _hasRegionalPrefetchMaxFloorCount;
	float _indoorNumberOfDaysBeforeTileRedownload;
	unsigned _indoorLocationOfInterestMergeRadiusKM;
	unsigned _indoorPrefetchMaxFloorCount;
	unsigned _indoorPrefetchMaxTotalBytes;
	unsigned _indoorPrefetchRadiusKM;
	unsigned _nonFitnessToCyclingSeconds;
	unsigned _nonFitnessToRunningSeconds;
	unsigned _runningToNonFitnessSeconds;
	unsigned _cyclingToNonFitnessSeconds;
	unsigned _preferPredictionWithinNActivityCycles;
	float _regionalNumberOfDaysBeforeTileRedownload;
	unsigned _regionalLocationOfInterestMergeRadiusKM;
	unsigned _regionalPrefetchMaxFloorCount;
	unsigned _regionalPrefetchMaxTotalBytes;
	unsigned _regionalPrefetchRadiusKM;
	double _availabilityZScoreConfidenceInterval;

}

@property (nonatomic,readonly) double availabilityZScoreConfidenceInterval;                   //@synthesize availabilityZScoreConfidenceInterval=_availabilityZScoreConfidenceInterval - In the implementation block
@property (nonatomic,readonly) float indoorNumberOfDaysBeforeTileRedownload;                  //@synthesize indoorNumberOfDaysBeforeTileRedownload=_indoorNumberOfDaysBeforeTileRedownload - In the implementation block
@property (nonatomic,readonly) unsigned indoorLocationOfInterestMergeRadiusKM;                //@synthesize indoorLocationOfInterestMergeRadiusKM=_indoorLocationOfInterestMergeRadiusKM - In the implementation block
@property (nonatomic,readonly) unsigned indoorPrefetchMaxFloorCount;                          //@synthesize indoorPrefetchMaxFloorCount=_indoorPrefetchMaxFloorCount - In the implementation block
@property (nonatomic,readonly) unsigned indoorPrefetchMaxTotalBytes;                          //@synthesize indoorPrefetchMaxTotalBytes=_indoorPrefetchMaxTotalBytes - In the implementation block
@property (nonatomic,readonly) unsigned indoorPrefetchRadiusKM;                               //@synthesize indoorPrefetchRadiusKM=_indoorPrefetchRadiusKM - In the implementation block
@property (nonatomic,readonly) BOOL hasMotionActivityDebounceParameters;                      //@synthesize hasMotionActivityDebounceParameters=_hasMotionActivityDebounceParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasNonFitnessToCyclingSeconds;                            //@synthesize hasNonFitnessToCyclingSeconds=_hasNonFitnessToCyclingSeconds - In the implementation block
@property (nonatomic,readonly) unsigned nonFitnessToCyclingSeconds;                           //@synthesize nonFitnessToCyclingSeconds=_nonFitnessToCyclingSeconds - In the implementation block
@property (nonatomic,readonly) BOOL hasNonFitnessToRunningSeconds;                            //@synthesize hasNonFitnessToRunningSeconds=_hasNonFitnessToRunningSeconds - In the implementation block
@property (nonatomic,readonly) unsigned nonFitnessToRunningSeconds;                           //@synthesize nonFitnessToRunningSeconds=_nonFitnessToRunningSeconds - In the implementation block
@property (nonatomic,readonly) BOOL hasRunningToNonFitnessSeconds;                            //@synthesize hasRunningToNonFitnessSeconds=_hasRunningToNonFitnessSeconds - In the implementation block
@property (nonatomic,readonly) unsigned runningToNonFitnessSeconds;                           //@synthesize runningToNonFitnessSeconds=_runningToNonFitnessSeconds - In the implementation block
@property (nonatomic,readonly) BOOL hasCyclingToNonFitnessSeconds;                            //@synthesize hasCyclingToNonFitnessSeconds=_hasCyclingToNonFitnessSeconds - In the implementation block
@property (nonatomic,readonly) unsigned cyclingToNonFitnessSeconds;                           //@synthesize cyclingToNonFitnessSeconds=_cyclingToNonFitnessSeconds - In the implementation block
@property (nonatomic,readonly) unsigned preferPredictionWithinNActivityCycles;                //@synthesize preferPredictionWithinNActivityCycles=_preferPredictionWithinNActivityCycles - In the implementation block
@property (nonatomic,readonly) BOOL hasRegionalPrefetchMaxFloorCount;                         //@synthesize hasRegionalPrefetchMaxFloorCount=_hasRegionalPrefetchMaxFloorCount - In the implementation block
@property (nonatomic,readonly) float regionalNumberOfDaysBeforeTileRedownload;                //@synthesize regionalNumberOfDaysBeforeTileRedownload=_regionalNumberOfDaysBeforeTileRedownload - In the implementation block
@property (nonatomic,readonly) unsigned regionalLocationOfInterestMergeRadiusKM;              //@synthesize regionalLocationOfInterestMergeRadiusKM=_regionalLocationOfInterestMergeRadiusKM - In the implementation block
@property (nonatomic,readonly) unsigned regionalPrefetchMaxFloorCount;                        //@synthesize regionalPrefetchMaxFloorCount=_regionalPrefetchMaxFloorCount - In the implementation block
@property (nonatomic,readonly) unsigned regionalPrefetchMaxTotalBytes;                        //@synthesize regionalPrefetchMaxTotalBytes=_regionalPrefetchMaxTotalBytes - In the implementation block
@property (nonatomic,readonly) unsigned regionalPrefetchRadiusKM;                             //@synthesize regionalPrefetchRadiusKM=_regionalPrefetchRadiusKM - In the implementation block
-(unsigned)cyclingToNonFitnessSeconds;
-(id)init;
-(BOOL)hasNonFitnessToRunningSeconds;
-(BOOL)hasNonFitnessToCyclingSeconds;
-(float)regionalNumberOfDaysBeforeTileRedownload;
-(unsigned)indoorPrefetchMaxFloorCount;
-(unsigned)indoorPrefetchMaxTotalBytes;
-(unsigned)regionalPrefetchMaxTotalBytes;
-(unsigned)indoorPrefetchRadiusKM;
-(unsigned)nonFitnessToRunningSeconds;
-(unsigned)runningToNonFitnessSeconds;
-(unsigned)nonFitnessToCyclingSeconds;
-(BOOL)hasRunningToNonFitnessSeconds;
-(unsigned)regionalLocationOfInterestMergeRadiusKM;
-(BOOL)hasMotionActivityDebounceParameters;
-(double)availabilityZScoreConfidenceInterval;
-(float)indoorNumberOfDaysBeforeTileRedownload;
-(BOOL)hasCyclingToNonFitnessSeconds;
-(unsigned)regionalPrefetchRadiusKM;
-(optional<proto::params::LocalizerParameters>=Baligned_storage<proto::params::LocalizerParameters>=(dummy_u=[280c]a8)}}Ref)localizerParams;
-(unsigned)preferPredictionWithinNActivityCycles;
-(unsigned)regionalPrefetchMaxFloorCount;
-(id)initWithAvailabilityTile:(AvailabilityTile*)arg1 ;
-(BOOL)hasRegionalPrefetchMaxFloorCount;
-(unsigned)indoorLocationOfInterestMergeRadiusKM;
@end

