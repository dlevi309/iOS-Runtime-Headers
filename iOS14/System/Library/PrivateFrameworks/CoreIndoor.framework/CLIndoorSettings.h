/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
*/


#import <CoreIndoor/CoreIndoor-Structs.h>
@class NSSet, NSString, CLGpsPosition;

@interface CLIndoorSettings : NSObject {

	BOOL _pipelinedEnabled;
	NSSet* _disabledVenues;
	duration<long double, std::__1::ratio<1, 1> > _debounceInterval;
	duration<long long, std::__1::ratio<1, 1000000000> > _errorBackoffDuration;
	duration<long long, std::__1::ratio<1, 1> > _tilePrefetchActivityInterval;
	optional<unsigned int> _tilePrefetchPredictionActivityCycleAllowance;
	duration<long long, std::__1::ratio<1, 1> > _tilePrefetchRelevancyWindow;
	NSString* _indoorAvailabilityTilesServerUrl;
	NSSet* _forcedVenues;
	CLGpsPosition* _fakeLastFix;
	double _venueGroupDistance;
	optional<double> _tilePrefetchRadius;
	optional<unsigned long> _tilePrefetchMaxCount;
	optional<double> _prefetchClusterMergeRadius;
	optional<double> _indoorTilePrefetchRadius;
	optional<unsigned long> _indoorTilePrefetchMaxCount;
	optional<double> _indoorPrefetchClusterMergeRadius;
	optional<double> _regionalTilePrefetchRadius;
	optional<unsigned long> _regionalTilePrefetchMaxCount;
	optional<double> _regionalPrefetchClusterMergeRadius;

}

@property (assign,nonatomic) BOOL pipelinedEnabled;                                                            //@synthesize pipelinedEnabled=_pipelinedEnabled - In the implementation block
@property (nonatomic,copy) NSSet * disabledVenues;                                                             //@synthesize disabledVenues=_disabledVenues - In the implementation block
@property (assign,nonatomic) duration<long double debounceInterval;                                            //@synthesize debounceInterval=_debounceInterval - In the implementation block
@property (assign,nonatomic) duration<long long errorBackoffDuration;                                          //@synthesize errorBackoffDuration=_errorBackoffDuration - In the implementation block
@property (assign,nonatomic) duration<long long tilePrefetchActivityInterval;                                  //@synthesize tilePrefetchActivityInterval=_tilePrefetchActivityInterval - In the implementation block
@property (assign,nonatomic) optional<unsigned int> tilePrefetchPredictionActivityCycleAllowance;              //@synthesize tilePrefetchPredictionActivityCycleAllowance=_tilePrefetchPredictionActivityCycleAllowance - In the implementation block
@property (assign,nonatomic) optional<double> tilePrefetchRadius;                                              //@synthesize tilePrefetchRadius=_tilePrefetchRadius - In the implementation block
@property (assign,nonatomic) optional<unsigned long> tilePrefetchMaxCount;                                     //@synthesize tilePrefetchMaxCount=_tilePrefetchMaxCount - In the implementation block
@property (assign,nonatomic) optional<double> prefetchClusterMergeRadius;                                      //@synthesize prefetchClusterMergeRadius=_prefetchClusterMergeRadius - In the implementation block
@property (assign,nonatomic) optional<double> indoorTilePrefetchRadius;                                        //@synthesize indoorTilePrefetchRadius=_indoorTilePrefetchRadius - In the implementation block
@property (assign,nonatomic) optional<unsigned long> indoorTilePrefetchMaxCount;                               //@synthesize indoorTilePrefetchMaxCount=_indoorTilePrefetchMaxCount - In the implementation block
@property (assign,nonatomic) optional<double> indoorPrefetchClusterMergeRadius;                                //@synthesize indoorPrefetchClusterMergeRadius=_indoorPrefetchClusterMergeRadius - In the implementation block
@property (assign,nonatomic) optional<double> regionalTilePrefetchRadius;                                      //@synthesize regionalTilePrefetchRadius=_regionalTilePrefetchRadius - In the implementation block
@property (assign,nonatomic) optional<unsigned long> regionalTilePrefetchMaxCount;                             //@synthesize regionalTilePrefetchMaxCount=_regionalTilePrefetchMaxCount - In the implementation block
@property (assign,nonatomic) optional<double> regionalPrefetchClusterMergeRadius;                              //@synthesize regionalPrefetchClusterMergeRadius=_regionalPrefetchClusterMergeRadius - In the implementation block
@property (assign,nonatomic) duration<long long tilePrefetchRelevancyWindow;                                   //@synthesize tilePrefetchRelevancyWindow=_tilePrefetchRelevancyWindow - In the implementation block
@property (nonatomic,copy) NSString * indoorAvailabilityTilesServerUrl;                                        //@synthesize indoorAvailabilityTilesServerUrl=_indoorAvailabilityTilesServerUrl - In the implementation block
@property (nonatomic,copy) NSSet * forcedVenues;                                                               //@synthesize forcedVenues=_forcedVenues - In the implementation block
@property (nonatomic,retain) CLGpsPosition * fakeLastFix;                                                      //@synthesize fakeLastFix=_fakeLastFix - In the implementation block
@property (assign,nonatomic) double venueGroupDistance;                                                        //@synthesize venueGroupDistance=_venueGroupDistance - In the implementation block
+(id)settingToSet:(id)arg1 ;
-(optional<unsigned long>)tilePrefetchMaxCount;
-(void)setErrorBackoffDuration:(duration<long long)arg1 ;
-(optional<double>)indoorTilePrefetchRadius;
-(void)setIndoorTilePrefetchMaxCount:(optional<unsigned long>)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(optional<double>)indoorPrefetchClusterMergeRadius;
-(id)init;
-(void)setTilePrefetchActivityInterval:(duration<long long)arg1 ;
-(duration<long long)errorBackoffDuration;
-(optional<unsigned int>)tilePrefetchPredictionActivityCycleAllowance;
-(void)setDebounceInterval:(duration<long double)arg1 ;
-(BOOL)pipelinedEnabled;
-(duration<long long)tilePrefetchActivityInterval;
-(optional<double>)tilePrefetchRadius;
-(duration<long double)debounceInterval;
-(CLGpsPosition *)fakeLastFix;
-(double)venueGroupDistance;
-(void)setForcedVenues:(NSSet *)arg1 ;
-(void)setRegionalTilePrefetchRadius:(optional<double>)arg1 ;
-(void)setTilePrefetchPredictionActivityCycleAllowance:(optional<unsigned int>)arg1 ;
-(optional<unsigned long>)indoorTilePrefetchMaxCount;
-(void)setTilePrefetchMaxCount:(optional<unsigned long>)arg1 ;
-(void)setPipelinedEnabled:(BOOL)arg1 ;
-(void)setRegionalPrefetchClusterMergeRadius:(optional<double>)arg1 ;
-(void)setDisabledVenues:(NSSet *)arg1 ;
-(void)setVenueGroupDistance:(double)arg1 ;
-(NSSet *)disabledVenues;
-(void)setIndoorAvailabilityTilesServerUrl:(NSString *)arg1 ;
-(void)setFakeLastFix:(CLGpsPosition *)arg1 ;
-(NSSet *)forcedVenues;
-(NSString *)indoorAvailabilityTilesServerUrl;
-(void)setTilePrefetchRadius:(optional<double>)arg1 ;
-(void)setRegionalTilePrefetchMaxCount:(optional<unsigned long>)arg1 ;
-(void)setIndoorTilePrefetchRadius:(optional<double>)arg1 ;
-(void)setIndoorPrefetchClusterMergeRadius:(optional<double>)arg1 ;
-(optional<double>)regionalPrefetchClusterMergeRadius;
-(optional<double>)regionalTilePrefetchRadius;
-(void)setTilePrefetchRelevancyWindow:(duration<long long)arg1 ;
-(optional<double>)prefetchClusterMergeRadius;
-(void)setPrefetchClusterMergeRadius:(optional<double>)arg1 ;
-(optional<unsigned long>)regionalTilePrefetchMaxCount;
-(duration<long long)tilePrefetchRelevancyWindow;
@end

