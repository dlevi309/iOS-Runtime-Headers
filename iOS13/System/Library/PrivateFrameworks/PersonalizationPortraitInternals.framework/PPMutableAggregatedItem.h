/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class PPU16CountedSet, NSMutableSet, NSCountedSet, NSDate;

@interface PPMutableAggregatedItem : NSObject {

	float _maxScore;
	float _minScore;
	float _sumScore;
	unsigned _sumDwellTimeInSeconds;
	unsigned _recordCount;
	float _sumOfSourceDateInHours;
	float _sumOfSquaredSourceDateInHours;
	float _sumOfSquaredInterArrivalHours;
	float _decayedSum;
	float _decayRate;
	PPU16CountedSet* _algorithmCountedSet;
	PPU16CountedSet* _rankHistogram;
	NSMutableSet* _osBuildSet;
	NSMutableSet* _assetVersionSet;
	NSCountedSet* _bundleIdCountedSet;
	NSMutableSet* _groupIdSet;
	PPU16CountedSet* _sourceHourCountedSet;
	PPU16CountedSet* _sourceDayOfWeekCountedSet;
	NSDate* _maxSourceDate;
	NSDate* _minSourceDate;

}

@property (nonatomic,readonly) PPU16CountedSet * algorithmCountedSet;                    //@synthesize algorithmCountedSet=_algorithmCountedSet - In the implementation block
@property (nonatomic,readonly) float maxScore;                                           //@synthesize maxScore=_maxScore - In the implementation block
@property (nonatomic,readonly) float minScore;                                           //@synthesize minScore=_minScore - In the implementation block
@property (nonatomic,readonly) float sumScore;                                           //@synthesize sumScore=_sumScore - In the implementation block
@property (nonatomic,readonly) PPU16CountedSet * rankHistogram;                          //@synthesize rankHistogram=_rankHistogram - In the implementation block
@property (nonatomic,readonly) unsigned sumDwellTimeInSeconds;                           //@synthesize sumDwellTimeInSeconds=_sumDwellTimeInSeconds - In the implementation block
@property (nonatomic,readonly) unsigned recordCount;                                     //@synthesize recordCount=_recordCount - In the implementation block
@property (nonatomic,readonly) NSMutableSet * osBuildSet;                                //@synthesize osBuildSet=_osBuildSet - In the implementation block
@property (nonatomic,readonly) NSMutableSet * assetVersionSet;                           //@synthesize assetVersionSet=_assetVersionSet - In the implementation block
@property (nonatomic,readonly) NSCountedSet * bundleIdCountedSet;                        //@synthesize bundleIdCountedSet=_bundleIdCountedSet - In the implementation block
@property (nonatomic,readonly) NSMutableSet * groupIdSet;                                //@synthesize groupIdSet=_groupIdSet - In the implementation block
@property (nonatomic,readonly) PPU16CountedSet * sourceHourCountedSet;                   //@synthesize sourceHourCountedSet=_sourceHourCountedSet - In the implementation block
@property (nonatomic,readonly) PPU16CountedSet * sourceDayOfWeekCountedSet;              //@synthesize sourceDayOfWeekCountedSet=_sourceDayOfWeekCountedSet - In the implementation block
@property (nonatomic,readonly) NSDate * maxSourceDate;                                   //@synthesize maxSourceDate=_maxSourceDate - In the implementation block
@property (nonatomic,readonly) NSDate * minSourceDate;                                   //@synthesize minSourceDate=_minSourceDate - In the implementation block
@property (nonatomic,readonly) float sumOfSourceDateInHours;                             //@synthesize sumOfSourceDateInHours=_sumOfSourceDateInHours - In the implementation block
@property (nonatomic,readonly) float sumOfSquaredSourceDateInHours;                      //@synthesize sumOfSquaredSourceDateInHours=_sumOfSquaredSourceDateInHours - In the implementation block
@property (nonatomic,readonly) float sumOfSquaredInterArrivalHours;                      //@synthesize sumOfSquaredInterArrivalHours=_sumOfSquaredInterArrivalHours - In the implementation block
@property (nonatomic,readonly) float decayedSum;                                         //@synthesize decayedSum=_decayedSum - In the implementation block
@property (nonatomic,readonly) float decayRate;                                          //@synthesize decayRate=_decayRate - In the implementation block
+(float)_decay:(float)arg1 decayRate:(float)arg2 timeElapsedSeconds:(double)arg3 ;
-(float)maxScore;
-(float)minScore;
-(float)decayRate;
-(unsigned)recordCount;
-(void)_resetPropertiesWithAlgorithmMaxValue:(unsigned long long)arg1 ;
-(id)_sortRecordsByDescendingSourceDate:(id)arg1 ;
-(unsigned long long)_processRecord:(id)arg1 algorithm:(unsigned long long)arg2 previousSourceDate:(id)arg3 scoringDate:(id)arg4 perRecordDecayRate:(float)arg5 score:(float)arg6 decayedSumAddend:(float)arg7 ;
-(id)initWithNamedEntityRecords:(id)arg1 scoringDate:(id)arg2 multiplier:(float)arg3 decayRate:(float)arg4 sorted:(BOOL)arg5 ;
-(id)initWithNamedEntityRecords:(id)arg1 scoringDate:(id)arg2 multiplier:(float)arg3 perRecordDecayRate:(float)arg4 decayRate:(float)arg5 ;
-(unsigned long long)_processNamedEntityRecords:(id)arg1 scoringDate:(id)arg2 multiplier:(float)arg3 perRecordDecayRate:(float)arg4 ;
-(id)initWithTopicRecords:(id)arg1 scoringDate:(id)arg2 decayRate:(float)arg3 sorted:(BOOL)arg4 ;
-(id)initWithTopicRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4 ignoreMultiplier:(BOOL)arg5 ;
-(unsigned long long)_processTopicRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 ignoreMultiplier:(BOOL)arg4 ;
-(PPU16CountedSet *)algorithmCountedSet;
-(float)sumScore;
-(PPU16CountedSet *)rankHistogram;
-(unsigned)sumDwellTimeInSeconds;
-(NSMutableSet *)osBuildSet;
-(NSMutableSet *)assetVersionSet;
-(NSCountedSet *)bundleIdCountedSet;
-(NSMutableSet *)groupIdSet;
-(PPU16CountedSet *)sourceHourCountedSet;
-(PPU16CountedSet *)sourceDayOfWeekCountedSet;
-(NSDate *)maxSourceDate;
-(NSDate *)minSourceDate;
-(float)sumOfSourceDateInHours;
-(float)sumOfSquaredSourceDateInHours;
-(float)sumOfSquaredInterArrivalHours;
-(float)decayedSum;
@end

