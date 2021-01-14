/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSMutableArray, NSDate, PPSourceStats, PPDecayedFeedbackCounts;

@interface PPMutableFeaturedItem : NSObject {

	unsigned short _countForAlgorithm[16];
	unsigned short _countForNECategory[20];
	unsigned short _rankCount[5];
	BOOL _userCreated;
	BOOL _strictFiltering;
	BOOL _matchesPrimaryLanguage;
	float _maxScore;
	float _minScore;
	float _meanScore;
	float _meanScoreWithOutliersRemoved;
	float _varianceScoreWithOutliersRemoved;
	float _sumDwellTimeInHours;
	float _recordCount;
	unsigned _exactMatchInSourceTextCount;
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
	float _relativeTimeToRelevanceDate;
	float _decayedSum;
	float _decayRate;
	unsigned long long _uniqueAlgorithmCount;
	unsigned long long _uniqueNamedEntityCategoryCount;
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
	PPDecayedFeedbackCounts* _decayedFeedbackCounts;
	unsigned long long _sumLengthSeconds;
	unsigned long long _sumLengthCharacters;
	unsigned long long _sumDonationCount;
	unsigned long long _sumContactHandleCount;

}

@property (nonatomic,readonly) unsigned long long uniqueAlgorithmCount;                        //@synthesize uniqueAlgorithmCount=_uniqueAlgorithmCount - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueNamedEntityCategoryCount;              //@synthesize uniqueNamedEntityCategoryCount=_uniqueNamedEntityCategoryCount - In the implementation block
@property (nonatomic,readonly) float maxScore;                                                 //@synthesize maxScore=_maxScore - In the implementation block
@property (nonatomic,readonly) float minScore;                                                 //@synthesize minScore=_minScore - In the implementation block
@property (nonatomic,readonly) float meanScore;                                                //@synthesize meanScore=_meanScore - In the implementation block
@property (nonatomic,readonly) float meanScoreWithOutliersRemoved;                             //@synthesize meanScoreWithOutliersRemoved=_meanScoreWithOutliersRemoved - In the implementation block
@property (nonatomic,readonly) float varianceScoreWithOutliersRemoved;                         //@synthesize varianceScoreWithOutliersRemoved=_varianceScoreWithOutliersRemoved - In the implementation block
@property (nonatomic,readonly) float sumDwellTimeInHours;                                      //@synthesize sumDwellTimeInHours=_sumDwellTimeInHours - In the implementation block
@property (nonatomic,readonly) float recordCount;                                              //@synthesize recordCount=_recordCount - In the implementation block
@property (nonatomic,readonly) unsigned exactMatchInSourceTextCount;                           //@synthesize exactMatchInSourceTextCount=_exactMatchInSourceTextCount - In the implementation block
@property (nonatomic,readonly) BOOL userCreated;                                               //@synthesize userCreated=_userCreated - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueOsBuildCount;                          //@synthesize uniqueOsBuildCount=_uniqueOsBuildCount - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueAssetVersionCount;                     //@synthesize uniqueAssetVersionCount=_uniqueAssetVersionCount - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueBundleIdCount;                         //@synthesize uniqueBundleIdCount=_uniqueBundleIdCount - In the implementation block
@property (nonatomic,readonly) unsigned countInMobileMail;                                     //@synthesize countInMobileMail=_countInMobileMail - In the implementation block
@property (nonatomic,readonly) unsigned countInSafari;                                         //@synthesize countInSafari=_countInSafari - In the implementation block
@property (nonatomic,readonly) unsigned countInMail;                                           //@synthesize countInMail=_countInMail - In the implementation block
@property (nonatomic,readonly) unsigned countInMobileSafari;                                   //@synthesize countInMobileSafari=_countInMobileSafari - In the implementation block
@property (nonatomic,readonly) unsigned countInMobileSlideShow;                                //@synthesize countInMobileSlideShow=_countInMobileSlideShow - In the implementation block
@property (nonatomic,readonly) unsigned countInMobileSMS;                                      //@synthesize countInMobileSMS=_countInMobileSMS - In the implementation block
@property (nonatomic,readonly) unsigned countInChat;                                           //@synthesize countInChat=_countInChat - In the implementation block
@property (nonatomic,readonly) unsigned countInNews;                                           //@synthesize countInNews=_countInNews - In the implementation block
@property (nonatomic,readonly) unsigned countInMaps;                                           //@synthesize countInMaps=_countInMaps - In the implementation block
@property (nonatomic,readonly) unsigned countInMobileCal;                                      //@synthesize countInMobileCal=_countInMobileCal - In the implementation block
@property (nonatomic,readonly) unsigned countInCoreRoutine;                                    //@synthesize countInCoreRoutine=_countInCoreRoutine - In the implementation block
@property (nonatomic,readonly) unsigned countInYelp;                                           //@synthesize countInYelp=_countInYelp - In the implementation block
@property (nonatomic,readonly) unsigned countInMusic;                                          //@synthesize countInMusic=_countInMusic - In the implementation block
@property (nonatomic,readonly) unsigned countInCal;                                            //@synthesize countInCal=_countInCal - In the implementation block
@property (nonatomic,readonly) unsigned countInWebKit;                                         //@synthesize countInWebKit=_countInWebKit - In the implementation block
@property (nonatomic,readonly) unsigned countInYoutube;                                        //@synthesize countInYoutube=_countInYoutube - In the implementation block
@property (nonatomic,readonly) unsigned countInReminders;                                      //@synthesize countInReminders=_countInReminders - In the implementation block
@property (nonatomic,readonly) unsigned countInMobileNotes;                                    //@synthesize countInMobileNotes=_countInMobileNotes - In the implementation block
@property (nonatomic,readonly) unsigned countInSpotify;                                        //@synthesize countInSpotify=_countInSpotify - In the implementation block
@property (nonatomic,readonly) unsigned countInNotes;                                          //@synthesize countInNotes=_countInNotes - In the implementation block
@property (nonatomic,readonly) unsigned countInPodcast;                                        //@synthesize countInPodcast=_countInPodcast - In the implementation block
@property (nonatomic,readonly) unsigned countInNetflix;                                        //@synthesize countInNetflix=_countInNetflix - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueGroupIdCount;                          //@synthesize uniqueGroupIdCount=_uniqueGroupIdCount - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueSourceHourCount;                       //@synthesize uniqueSourceHourCount=_uniqueSourceHourCount - In the implementation block
@property (nonatomic,readonly) NSMutableArray * countInHour;                                   //@synthesize countInHour=_countInHour - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueSourceDayOfWeekCount;                  //@synthesize uniqueSourceDayOfWeekCount=_uniqueSourceDayOfWeekCount - In the implementation block
@property (nonatomic,readonly) float meanInterArrivalHour;                                     //@synthesize meanInterArrivalHour=_meanInterArrivalHour - In the implementation block
@property (nonatomic,readonly) float varianceInterArrivalHour;                                 //@synthesize varianceInterArrivalHour=_varianceInterArrivalHour - In the implementation block
@property (nonatomic,readonly) float meanSourceDateInHours;                                    //@synthesize meanSourceDateInHours=_meanSourceDateInHours - In the implementation block
@property (nonatomic,readonly) float varianceSourceDateInHours;                                //@synthesize varianceSourceDateInHours=_varianceSourceDateInHours - In the implementation block
@property (nonatomic,readonly) float timeSpanInHours;                                          //@synthesize timeSpanInHours=_timeSpanInHours - In the implementation block
@property (nonatomic,readonly) float timeElapsedInHours;                                       //@synthesize timeElapsedInHours=_timeElapsedInHours - In the implementation block
@property (nonatomic,readonly) float relativeTimeToRelevanceDate;                              //@synthesize relativeTimeToRelevanceDate=_relativeTimeToRelevanceDate - In the implementation block
@property (nonatomic,readonly) float decayedSum;                                               //@synthesize decayedSum=_decayedSum - In the implementation block
@property (nonatomic,readonly) float decayRate;                                                //@synthesize decayRate=_decayRate - In the implementation block
@property (nonatomic,readonly) BOOL strictFiltering;                                           //@synthesize strictFiltering=_strictFiltering - In the implementation block
@property (nonatomic,readonly) NSDate * scoringDate;                                           //@synthesize scoringDate=_scoringDate - In the implementation block
@property (nonatomic,readonly) PPSourceStats * sourceStats;                                    //@synthesize sourceStats=_sourceStats - In the implementation block
@property (nonatomic,readonly) unsigned long long namedEntityCharacterLength;                  //@synthesize namedEntityCharacterLength=_namedEntityCharacterLength - In the implementation block
@property (nonatomic,readonly) BOOL matchesPrimaryLanguage;                                    //@synthesize matchesPrimaryLanguage=_matchesPrimaryLanguage - In the implementation block
@property (nonatomic,readonly) PPDecayedFeedbackCounts * decayedFeedbackCounts;                //@synthesize decayedFeedbackCounts=_decayedFeedbackCounts - In the implementation block
@property (nonatomic,readonly) unsigned long long sumLengthSeconds;                            //@synthesize sumLengthSeconds=_sumLengthSeconds - In the implementation block
@property (nonatomic,readonly) unsigned long long sumLengthCharacters;                         //@synthesize sumLengthCharacters=_sumLengthCharacters - In the implementation block
@property (nonatomic,readonly) unsigned long long sumDonationCount;                            //@synthesize sumDonationCount=_sumDonationCount - In the implementation block
@property (nonatomic,readonly) unsigned long long sumContactHandleCount;                       //@synthesize sumContactHandleCount=_sumContactHandleCount - In the implementation block
-(float)decayedSum;
-(NSDate *)scoringDate;
-(float)decayRate;
-(NSMutableArray *)countInHour;
-(unsigned)countInMobileSlideShow;
-(unsigned)countInWebKit;
-(id)computeModelScoreAndReturnFeaturesWithScoreInterpreter:(id)arg1 ;
-(/*^block*/id)inputInitializationBlock;
-(unsigned)countInMail;
-(unsigned long long)namedEntityCharacterLength;
-(unsigned)countInCal;
-(unsigned long long)uniqueGroupIdCount;
-(float)varianceSourceDateInHours;
-(float)recordCount;
-(PPSourceStats *)sourceStats;
-(float)varianceInterArrivalHour;
-(unsigned long long)uniqueOsBuildCount;
-(unsigned)countInReminders;
-(float)maxScore;
-(unsigned long long)uniqueAlgorithmCount;
-(unsigned)countInCoreRoutine;
-(unsigned)countInNetflix;
-(unsigned)countInMobileMail;
-(unsigned long long)uniqueSourceHourCount;
-(id)initWithMutableAggregatedItem:(id)arg1 scoringDate:(id)arg2 decayRate:(float)arg3 sourceStats:(id)arg4 decayedFeedbackCounts:(id)arg5 strictFiltering:(BOOL)arg6 ;
-(BOOL)strictFiltering;
-(unsigned long long)uniqueNamedEntityCategoryCount;
-(float)minScore;
-(float)relativeTimeToRelevanceDate;
-(unsigned)countInPodcast;
-(BOOL)matchesPrimaryLanguage;
-(unsigned)exactMatchInSourceTextCount;
-(unsigned)countInNews;
-(unsigned long long)sumContactHandleCount;
-(unsigned)countInSafari;
-(float)meanSourceDateInHours;
-(float)meanScoreWithOutliersRemoved;
-(PPDecayedFeedbackCounts *)decayedFeedbackCounts;
-(unsigned)countInMobileSafari;
-(unsigned)countInSpotify;
-(unsigned long long)uniqueSourceDayOfWeekCount;
-(/*^block*/id)inputAssignmentBlock;
-(unsigned)countInNotes;
-(unsigned long long)sumLengthSeconds;
-(float)varianceScoreWithOutliersRemoved;
-(unsigned long long)uniqueAssetVersionCount;
-(float)meanInterArrivalHour;
-(float)sumDwellTimeInHours;
-(float)timeElapsedInHours;
-(unsigned)countInMobileCal;
-(unsigned long long)sumLengthCharacters;
-(float)computeModelScoreWithScoreInterpreter:(id)arg1 ;
-(float)meanScore;
-(unsigned)countInMobileNotes;
-(unsigned long long)uniqueBundleIdCount;
-(void)updateSpecializedFeaturesNamedEntity:(id)arg1 ;
-(unsigned)countInChat;
-(float)timeSpanInHours;
-(unsigned)countInYoutube;
-(unsigned)countInMobileSMS;
-(unsigned)countInYelp;
-(unsigned long long)sumDonationCount;
-(BOOL)userCreated;
-(unsigned)countInMaps;
-(unsigned)countInMusic;
@end

