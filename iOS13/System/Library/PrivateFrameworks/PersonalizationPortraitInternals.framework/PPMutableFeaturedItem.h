/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSMutableArray, NSDate, PPSourceStats;

@interface PPMutableFeaturedItem : NSObject {

	unsigned short _countForAlgorithm[15];
	unsigned short _rankCount[5];
	BOOL _strictFiltering;
	float _maxScore;
	float _minScore;
	float _meanScore;
	float _meanScoreWithOutliersRemoved;
	float _varianceScoreWithOutliersRemoved;
	float _sumDwellTimeInHours;
	float _recordCount;
	unsigned _countInMobileMail;
	unsigned _countInSafari;
	unsigned _countInMail;
	unsigned _countInMobileSafari;
	unsigned _countInMobileSlideShow;
	unsigned _countInMobileSMS;
	unsigned _countInChat;
	unsigned _countInNews;
	unsigned _countInMaps;
	unsigned _countInMobileCal;
	unsigned _countInCoreRoutine;
	unsigned _countInYelp;
	unsigned _countInMusic;
	unsigned _countInCal;
	unsigned _countInWebKit;
	unsigned _countInYoutube;
	unsigned _countInReminders;
	unsigned _countInMobileNotes;
	unsigned _countInSpotify;
	unsigned _countInNotes;
	unsigned _countInPodcast;
	unsigned _countInNetflix;
	float _meanInterArrivalHour;
	float _varianceInterArrivalHour;
	float _meanSourceDateInHours;
	float _varianceSourceDateInHours;
	float _timeSpanInHours;
	float _timeElapsedInHours;
	float _decayedSum;
	float _decayRate;
	unsigned long long _uniqueAlgorithmCount;
	unsigned long long _uniqueOsBuildCount;
	unsigned long long _uniqueAssetVersionCount;
	unsigned long long _uniqueBundleIdCount;
	unsigned long long _uniqueGroupIdCount;
	unsigned long long _uniqueSourceHourCount;
	NSMutableArray* _countInHour;
	unsigned long long _uniqueSourceDayOfWeekCount;
	NSDate* _scoringDate;
	PPSourceStats* _sourceStats;
	unsigned long long _namedEntityCharacterLength;

}

@property (nonatomic,readonly) unsigned long long uniqueAlgorithmCount;                    //@synthesize uniqueAlgorithmCount=_uniqueAlgorithmCount - In the implementation block
@property (nonatomic,readonly) float maxScore;                                             //@synthesize maxScore=_maxScore - In the implementation block
@property (nonatomic,readonly) float minScore;                                             //@synthesize minScore=_minScore - In the implementation block
@property (nonatomic,readonly) float meanScore;                                            //@synthesize meanScore=_meanScore - In the implementation block
@property (nonatomic,readonly) float meanScoreWithOutliersRemoved;                         //@synthesize meanScoreWithOutliersRemoved=_meanScoreWithOutliersRemoved - In the implementation block
@property (nonatomic,readonly) float varianceScoreWithOutliersRemoved;                     //@synthesize varianceScoreWithOutliersRemoved=_varianceScoreWithOutliersRemoved - In the implementation block
@property (nonatomic,readonly) float sumDwellTimeInHours;                                  //@synthesize sumDwellTimeInHours=_sumDwellTimeInHours - In the implementation block
@property (nonatomic,readonly) float recordCount;                                          //@synthesize recordCount=_recordCount - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueOsBuildCount;                      //@synthesize uniqueOsBuildCount=_uniqueOsBuildCount - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueAssetVersionCount;                 //@synthesize uniqueAssetVersionCount=_uniqueAssetVersionCount - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueBundleIdCount;                     //@synthesize uniqueBundleIdCount=_uniqueBundleIdCount - In the implementation block
@property (nonatomic,readonly) unsigned countInMobileMail;                                 //@synthesize countInMobileMail=_countInMobileMail - In the implementation block
@property (nonatomic,readonly) unsigned countInSafari;                                     //@synthesize countInSafari=_countInSafari - In the implementation block
@property (nonatomic,readonly) unsigned countInMail;                                       //@synthesize countInMail=_countInMail - In the implementation block
@property (nonatomic,readonly) unsigned countInMobileSafari;                               //@synthesize countInMobileSafari=_countInMobileSafari - In the implementation block
@property (nonatomic,readonly) unsigned countInMobileSlideShow;                            //@synthesize countInMobileSlideShow=_countInMobileSlideShow - In the implementation block
@property (nonatomic,readonly) unsigned countInMobileSMS;                                  //@synthesize countInMobileSMS=_countInMobileSMS - In the implementation block
@property (nonatomic,readonly) unsigned countInChat;                                       //@synthesize countInChat=_countInChat - In the implementation block
@property (nonatomic,readonly) unsigned countInNews;                                       //@synthesize countInNews=_countInNews - In the implementation block
@property (nonatomic,readonly) unsigned countInMaps;                                       //@synthesize countInMaps=_countInMaps - In the implementation block
@property (nonatomic,readonly) unsigned countInMobileCal;                                  //@synthesize countInMobileCal=_countInMobileCal - In the implementation block
@property (nonatomic,readonly) unsigned countInCoreRoutine;                                //@synthesize countInCoreRoutine=_countInCoreRoutine - In the implementation block
@property (nonatomic,readonly) unsigned countInYelp;                                       //@synthesize countInYelp=_countInYelp - In the implementation block
@property (nonatomic,readonly) unsigned countInMusic;                                      //@synthesize countInMusic=_countInMusic - In the implementation block
@property (nonatomic,readonly) unsigned countInCal;                                        //@synthesize countInCal=_countInCal - In the implementation block
@property (nonatomic,readonly) unsigned countInWebKit;                                     //@synthesize countInWebKit=_countInWebKit - In the implementation block
@property (nonatomic,readonly) unsigned countInYoutube;                                    //@synthesize countInYoutube=_countInYoutube - In the implementation block
@property (nonatomic,readonly) unsigned countInReminders;                                  //@synthesize countInReminders=_countInReminders - In the implementation block
@property (nonatomic,readonly) unsigned countInMobileNotes;                                //@synthesize countInMobileNotes=_countInMobileNotes - In the implementation block
@property (nonatomic,readonly) unsigned countInSpotify;                                    //@synthesize countInSpotify=_countInSpotify - In the implementation block
@property (nonatomic,readonly) unsigned countInNotes;                                      //@synthesize countInNotes=_countInNotes - In the implementation block
@property (nonatomic,readonly) unsigned countInPodcast;                                    //@synthesize countInPodcast=_countInPodcast - In the implementation block
@property (nonatomic,readonly) unsigned countInNetflix;                                    //@synthesize countInNetflix=_countInNetflix - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueGroupIdCount;                      //@synthesize uniqueGroupIdCount=_uniqueGroupIdCount - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueSourceHourCount;                   //@synthesize uniqueSourceHourCount=_uniqueSourceHourCount - In the implementation block
@property (nonatomic,readonly) NSMutableArray * countInHour;                               //@synthesize countInHour=_countInHour - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueSourceDayOfWeekCount;              //@synthesize uniqueSourceDayOfWeekCount=_uniqueSourceDayOfWeekCount - In the implementation block
@property (nonatomic,readonly) float meanInterArrivalHour;                                 //@synthesize meanInterArrivalHour=_meanInterArrivalHour - In the implementation block
@property (nonatomic,readonly) float varianceInterArrivalHour;                             //@synthesize varianceInterArrivalHour=_varianceInterArrivalHour - In the implementation block
@property (nonatomic,readonly) float meanSourceDateInHours;                                //@synthesize meanSourceDateInHours=_meanSourceDateInHours - In the implementation block
@property (nonatomic,readonly) float varianceSourceDateInHours;                            //@synthesize varianceSourceDateInHours=_varianceSourceDateInHours - In the implementation block
@property (nonatomic,readonly) float timeSpanInHours;                                      //@synthesize timeSpanInHours=_timeSpanInHours - In the implementation block
@property (nonatomic,readonly) float timeElapsedInHours;                                   //@synthesize timeElapsedInHours=_timeElapsedInHours - In the implementation block
@property (nonatomic,readonly) float decayedSum;                                           //@synthesize decayedSum=_decayedSum - In the implementation block
@property (nonatomic,readonly) float decayRate;                                            //@synthesize decayRate=_decayRate - In the implementation block
@property (nonatomic,readonly) BOOL strictFiltering;                                       //@synthesize strictFiltering=_strictFiltering - In the implementation block
@property (nonatomic,readonly) NSDate * scoringDate;                                       //@synthesize scoringDate=_scoringDate - In the implementation block
@property (nonatomic,readonly) PPSourceStats * sourceStats;                                //@synthesize sourceStats=_sourceStats - In the implementation block
@property (nonatomic,readonly) unsigned long long namedEntityCharacterLength;              //@synthesize namedEntityCharacterLength=_namedEntityCharacterLength - In the implementation block
-(float)maxScore;
-(float)minScore;
-(float)decayRate;
-(NSDate *)scoringDate;
-(float)recordCount;
-(unsigned long long)uniqueBundleIdCount;
-(float)decayedSum;
-(id)initWithMutableAggregatedItem:(id)arg1 scoringDate:(id)arg2 decayRate:(float)arg3 sourceStats:(id)arg4 strictFiltering:(BOOL)arg5 ;
-(void)updateSpecializedFeaturesNamedEntity:(id)arg1 ;
-(id)generateScoreDict;
-(id)computeModelScoreAndReturnFeaturesWithScoreInterpreter:(id)arg1 ;
-(float)computeModelScoreWithScoreInterpreter:(id)arg1 ;
-(unsigned long long)uniqueAlgorithmCount;
-(float)meanScore;
-(float)meanScoreWithOutliersRemoved;
-(float)varianceScoreWithOutliersRemoved;
-(float)sumDwellTimeInHours;
-(unsigned long long)uniqueOsBuildCount;
-(unsigned long long)uniqueAssetVersionCount;
-(unsigned)countInMobileMail;
-(unsigned)countInSafari;
-(unsigned)countInMail;
-(unsigned)countInMobileSafari;
-(unsigned)countInMobileSlideShow;
-(unsigned)countInMobileSMS;
-(unsigned)countInChat;
-(unsigned)countInNews;
-(unsigned)countInMaps;
-(unsigned)countInMobileCal;
-(unsigned)countInCoreRoutine;
-(unsigned)countInYelp;
-(unsigned)countInMusic;
-(unsigned)countInCal;
-(unsigned)countInWebKit;
-(unsigned)countInYoutube;
-(unsigned)countInReminders;
-(unsigned)countInMobileNotes;
-(unsigned)countInSpotify;
-(unsigned)countInNotes;
-(unsigned)countInPodcast;
-(unsigned)countInNetflix;
-(unsigned long long)uniqueGroupIdCount;
-(unsigned long long)uniqueSourceHourCount;
-(NSMutableArray *)countInHour;
-(unsigned long long)uniqueSourceDayOfWeekCount;
-(float)meanInterArrivalHour;
-(float)varianceInterArrivalHour;
-(float)meanSourceDateInHours;
-(float)varianceSourceDateInHours;
-(float)timeSpanInHours;
-(float)timeElapsedInHours;
-(BOOL)strictFiltering;
-(PPSourceStats *)sourceStats;
-(unsigned long long)namedEntityCharacterLength;
@end

