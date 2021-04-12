/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class PRSRankingConfiguration, NSMutableString, NSString, NSSet;

@interface SSRankingManager : NSObject {

	BOOL _isInternalDevice;
	BOOL _isCancelled;
	PRSRankingConfiguration* _rankingConfiguration;
	NSMutableString* _logValues;
	double _blendingTime;
	NSString* _query;
	NSSet* _allowedTopHitSections;

}

@property (retain) NSString * query;                                                      //@synthesize query=_query - In the implementation block
@property (retain) NSSet * allowedTopHitSections;                                         //@synthesize allowedTopHitSections=_allowedTopHitSections - In the implementation block
@property (assign) BOOL isInternalDevice;                                                 //@synthesize isInternalDevice=_isInternalDevice - In the implementation block
@property (assign) BOOL isCancelled;                                                      //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,retain) PRSRankingConfiguration * rankingConfiguration;              //@synthesize rankingConfiguration=_rankingConfiguration - In the implementation block
@property (retain) NSMutableString * logValues;                                           //@synthesize logValues=_logValues - In the implementation block
@property (assign,nonatomic) double blendingTime;                                         //@synthesize blendingTime=_blendingTime - In the implementation block
+(void)initialize;
+(void)fetchDuetValues;
+(id)getCoreDuetValues;
-(NSString *)query;
-(void)cancel;
-(BOOL)isCancelled;
-(void)setQuery:(NSString *)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(void)setIsCancelled:(BOOL)arg1 ;
-(BOOL)isInternalDevice;
-(void)setIsInternalDevice:(BOOL)arg1 ;
-(PRSRankingConfiguration *)rankingConfiguration;
-(NSMutableString *)logValues;
-(void)applyTopHitRankingPolicyToSection:(id)arg1 topResultSection:(id)arg2 maxTopHitCount:(long long)arg3 isShortcut:(BOOL)arg4 ;
-(void)setRankingConfiguration:(PRSRankingConfiguration *)arg1 ;
-(void)setLogValues:(NSMutableString *)arg1 ;
-(void)setAllowedTopHitSections:(NSSet *)arg1 ;
-(id)removeBlackListedSectionsForMapping:(id)arg1 withRankingConfiguration:(id)arg2 ;
-(double)roundedValueForScore:(double)arg1 ;
-(void)updateServerScoresUsingBlockOrder:(id)arg1 bundleFeatures:(id)arg2 ;
-(void)refineSectionShowingVisibleResultsWithBetterTextMatches:(id)arg1 ;
-(void)addCEPValuesForTTR;
-(id)relativeRankWithAbsRank:(id)arg1 numberValues:(unsigned long long)arg2 ;
-(id)makeTopHitSectionUsingSections:(id)arg1 withItemRanker:(id)arg2 sectionHeader:(id)arg3 shortcutResult:(id)arg4 ;
-(id)removeBlackListedSectionsForMapping:(id)arg1 ;
-(long long)compareDate:(id)arg1 withDate:(id)arg2 ;
-(id)rankSectionsUsingBundleIDToSectionMapping:(id)arg1 withRanker:(id)arg2 isPeopleSearch:(BOOL)arg3 isScopedAppSearch:(BOOL)arg4 queryId:(unsigned long long)arg5 isCJK:(BOOL)arg6 ;
-(id)applyTopSectionPolicy:(id)arg1 withTopHitSection:(id)arg2 isPeopleSearch:(BOOL)arg3 triggerEvent:(unsigned long long)arg4 correction:(id)arg5 ;
-(id)groupSectionsByCategory:(id)arg1 genreMap:(id)arg2 topSections:(id)arg3 ;
-(id)rankAppsAtTopForScopedSearchWithSections:(id)arg1 ;
-(void)finalizeLog;
-(id)keyForSection:(id)arg1 ;
-(void)updateWithNewRankingInfo:(id)arg1 ;
-(double)blendingTime;
-(void)setBlendingTime:(double)arg1 ;
-(NSSet *)allowedTopHitSections;
@end

