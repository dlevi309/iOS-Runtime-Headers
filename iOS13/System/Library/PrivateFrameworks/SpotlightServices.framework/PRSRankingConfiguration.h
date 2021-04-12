/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class NSMutableDictionary, NSArray, SSPlistDataReader, NSMutableOrderedSet, NSString, NSDictionary, PRSRankingServerKnobs;

@interface PRSRankingConfiguration : NSObject {

	BOOL _allow_coreduet_influence;
	BOOL _disableResultTruncation;
	float _numAppsDeduped;
	NSMutableDictionary* _categoryEngagements;
	NSArray* _rankingQueries;
	NSMutableDictionary* _queryDependentCategoryProbabilities;
	SSPlistDataReader* _queryIndependentCategoryProbabilities;
	NSMutableOrderedSet* _cepBlacklistSet;
	NSArray* _parsecCategoryOrder;
	NSString* _shortcutSectionBundleID;
	NSDictionary* _sqfData;
	NSDictionary* _serverFeatures;
	PRSRankingServerKnobs* _serverKnobs;

}

@property (retain) NSMutableDictionary * categoryEngagements;                              //@synthesize categoryEngagements=_categoryEngagements - In the implementation block
@property (retain) NSArray * rankingQueries;                                               //@synthesize rankingQueries=_rankingQueries - In the implementation block
@property (retain) NSMutableDictionary * queryDependentCategoryProbabilities;              //@synthesize queryDependentCategoryProbabilities=_queryDependentCategoryProbabilities - In the implementation block
@property (retain) SSPlistDataReader * queryIndependentCategoryProbabilities;              //@synthesize queryIndependentCategoryProbabilities=_queryIndependentCategoryProbabilities - In the implementation block
@property (retain) NSMutableOrderedSet * cepBlacklistSet;                                  //@synthesize cepBlacklistSet=_cepBlacklistSet - In the implementation block
@property (retain) NSArray * parsecCategoryOrder;                                          //@synthesize parsecCategoryOrder=_parsecCategoryOrder - In the implementation block
@property (retain) NSString * shortcutSectionBundleID;                                     //@synthesize shortcutSectionBundleID=_shortcutSectionBundleID - In the implementation block
@property (assign) BOOL allow_coreduet_influence;                                          //@synthesize allow_coreduet_influence=_allow_coreduet_influence - In the implementation block
@property (retain) NSDictionary * sqfData;                                                 //@synthesize sqfData=_sqfData - In the implementation block
@property (retain) NSDictionary * serverFeatures;                                          //@synthesize serverFeatures=_serverFeatures - In the implementation block
@property (retain) PRSRankingServerKnobs * serverKnobs;                                    //@synthesize serverKnobs=_serverKnobs - In the implementation block
@property (assign) BOOL disableResultTruncation;                                           //@synthesize disableResultTruncation=_disableResultTruncation - In the implementation block
@property (assign) float numAppsDeduped;                                                   //@synthesize numAppsDeduped=_numAppsDeduped - In the implementation block
-(id)init;
-(NSDictionary *)serverFeatures;
-(void)setServerFeatures:(NSDictionary *)arg1 ;
-(NSArray *)rankingQueries;
-(void)setRankingQueries:(NSArray *)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(NSArray *)parsecCategoryOrder;
-(void)setParsecCategoryOrder:(NSArray *)arg1 ;
-(void)setQueryDependentCategoryProbabilities:(NSMutableDictionary *)arg1 ;
-(void)setCepBlacklistSet:(NSMutableOrderedSet *)arg1 ;
-(void)setAllow_coreduet_influence:(BOOL)arg1 ;
-(void)setNumAppsDeduped:(float)arg1 ;
-(PRSRankingServerKnobs *)serverKnobs;
-(void)setServerKnobs:(PRSRankingServerKnobs *)arg1 ;
-(BOOL)disableResultTruncation;
-(void)setDisableResultTruncation:(BOOL)arg1 ;
-(NSDictionary *)sqfData;
-(void)updateWithSQFData:(id)arg1 ;
-(SSPlistDataReader *)queryIndependentCategoryProbabilities;
-(void)setQueryIndependentCategoryProbabilities:(SSPlistDataReader *)arg1 ;
-(void)appendToExistingCEPBlacklist:(id)arg1 ;
-(float)numAppsDeduped;
-(void)updateQueryDependentProbabilityAndBlacklistSetWith:(id)arg1 ;
-(NSMutableOrderedSet *)cepBlacklistSet;
-(NSMutableDictionary *)queryDependentCategoryProbabilities;
-(double)queryDependentProbabilityForCategory:(id)arg1 ;
-(float)engagementProbabilityForCategory:(id)arg1 ;
-(double)queryIndependentProbabilityForCategory:(id)arg1 ;
-(NSMutableDictionary *)categoryEngagements;
-(void)setCategoryEngagements:(NSMutableDictionary *)arg1 ;
-(NSString *)shortcutSectionBundleID;
-(void)setShortcutSectionBundleID:(NSString *)arg1 ;
-(BOOL)allow_coreduet_influence;
-(void)setSqfData:(NSDictionary *)arg1 ;
@end

