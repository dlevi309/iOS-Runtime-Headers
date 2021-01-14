/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
*/


@protocol _DKKnowledgeQuerying;
@class NSArray, NSString;

@interface ARPHomeControlSuggester : NSObject {

	id<_DKKnowledgeQuerying> _knowledgeStore;
	NSArray* _homeKitEventsSortedByStartDate;
	double _scoreThresholdForMicrolocationSuggestionsConsidered;
	double _highScoreThresholdForMicroLocationSuggestionMerge;
	double _lowScoreThresholdForMicroLocationSuggestionMerge;
	double _highScoreThresholdForTimeBasedSuggestionMerge;
	double _lowScoreThresholdForTimeBasedSuggestionMerge;
	double _scoreSceneBoost;
	NSString* _correlationsSessionFile;

}

@property (nonatomic,readonly) id<_DKKnowledgeQuerying> knowledgeStore;                               //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) NSArray * homeKitEventsSortedByStartDate;                                //@synthesize homeKitEventsSortedByStartDate=_homeKitEventsSortedByStartDate - In the implementation block
@property (assign,nonatomic) double scoreThresholdForMicrolocationSuggestionsConsidered;              //@synthesize scoreThresholdForMicrolocationSuggestionsConsidered=_scoreThresholdForMicrolocationSuggestionsConsidered - In the implementation block
@property (assign,nonatomic) double highScoreThresholdForMicroLocationSuggestionMerge;                //@synthesize highScoreThresholdForMicroLocationSuggestionMerge=_highScoreThresholdForMicroLocationSuggestionMerge - In the implementation block
@property (assign,nonatomic) double lowScoreThresholdForMicroLocationSuggestionMerge;                 //@synthesize lowScoreThresholdForMicroLocationSuggestionMerge=_lowScoreThresholdForMicroLocationSuggestionMerge - In the implementation block
@property (assign,nonatomic) double highScoreThresholdForTimeBasedSuggestionMerge;                    //@synthesize highScoreThresholdForTimeBasedSuggestionMerge=_highScoreThresholdForTimeBasedSuggestionMerge - In the implementation block
@property (assign,nonatomic) double lowScoreThresholdForTimeBasedSuggestionMerge;                     //@synthesize lowScoreThresholdForTimeBasedSuggestionMerge=_lowScoreThresholdForTimeBasedSuggestionMerge - In the implementation block
@property (assign,nonatomic) double scoreSceneBoost;                                                  //@synthesize scoreSceneBoost=_scoreSceneBoost - In the implementation block
@property (nonatomic,copy) NSString * correlationsSessionFile;                                        //@synthesize correlationsSessionFile=_correlationsSessionFile - In the implementation block
+(id)suggester;
+(id)defaultCorrelationsSessionFile;
-(NSArray *)homeKitEventsSortedByStartDate;
-(void)setScoreSceneBoost:(double)arg1 ;
-(id)homeKitEventsWithPredicate:(id)arg1 sortStartDateAscending:(BOOL)arg2 ;
-(double)lowScoreThresholdForTimeBasedSuggestionMerge;
-(void)setCorrelationsSessionFile:(NSString *)arg1 ;
-(void)setHomeKitEventsSortedByStartDate:(NSArray *)arg1 ;
-(id)initWithKnowledgeStore:(id)arg1 scoreThresholdForMicrolocationSuggestionsConsidered:(double)arg2 highScoreThresholdForMicroLocationSuggestionMerge:(double)arg3 lowScoreThresholdForMicroLocationSuggestionMerge:(double)arg4 highScoreThresholdForTimeBasedSuggestionMerge:(double)arg5 lowScoreThresholdForTimeBasedSuggestionMerge:(double)arg6 ;
-(NSString *)correlationsSessionFile;
-(double)highScoreThresholdForTimeBasedSuggestionMerge;
-(id)nextActionBasedsuggestionsWithMaxSuggestions:(unsigned long long)arg1 referenceDate:(id)arg2 correlationsFile:(id)arg3 ;
-(double)scoreSceneBoost;
-(id)microlocationBasedsuggestionsWithMaxSuggestions:(unsigned long long)arg1 referenceDate:(id)arg2 correlationsFile:(id)arg3 ;
-(id)suggestionsWithMaxSuggestions:(unsigned long long)arg1 ;
-(void)setHighScoreThresholdForTimeBasedSuggestionMerge:(double)arg1 ;
-(id)timeBasedSuggestionsWithMaxSuggestions:(unsigned long long)arg1 referenceDate:(id)arg2 ;
-(id)homeKitScenesWithPredicate:(id)arg1 sortStartDateAscending:(BOOL)arg2 ;
-(id)frequencybasedSuggestionsWitMaxSuggestions:(unsigned long long)arg1 ;
-(double)scoreThresholdForMicrolocationSuggestionsConsidered;
-(id)suggestionsWithMaxSuggestions:(unsigned long long)arg1 referenceDate:(id)arg2 correlationsFile:(id)arg3 ;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)timeBucketFrequencyBasedSuggestionsWithMaxSuggestions:(unsigned long long)arg1 events:(id)arg2 referenceDate:(id)arg3 ;
-(void)setLowScoreThresholdForTimeBasedSuggestionMerge:(double)arg1 ;
-(id)homeKitAccessoriesWithPredicate:(id)arg1 sortStartDateAscending:(BOOL)arg2 ;
-(void)setHighScoreThresholdForMicroLocationSuggestionMerge:(double)arg1 ;
-(id)timeBasedSuggestionsWithMaxSuggestions:(unsigned long long)arg1 referenceDate:(id)arg2 fallBackToFrequency:(BOOL)arg3 ;
-(double)highScoreThresholdForMicroLocationSuggestionMerge;
-(double)lowScoreThresholdForMicroLocationSuggestionMerge;
-(id)initWithKnowledgeStore:(id)arg1 ;
-(void)setLowScoreThresholdForMicroLocationSuggestionMerge:(double)arg1 ;
-(id)frequencybasedSuggestionsWitMaxSuggestions:(unsigned long long)arg1 events:(id)arg2 ;
-(id)frequencybasedSuggestionsWitMaxSuggestions:(unsigned long long)arg1 events:(id)arg2 useScenes:(BOOL)arg3 ;
-(void)setScoreThresholdForMicrolocationSuggestionsConsidered:(double)arg1 ;
@end

