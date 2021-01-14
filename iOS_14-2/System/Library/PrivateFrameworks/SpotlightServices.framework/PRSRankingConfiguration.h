/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class NSMutableDictionary, NSArray, SSPlistDataReader, NSNumber, NSMutableOrderedSet, NSString, NSDictionary;

@interface PRSRankingConfiguration : NSObject {

	BOOL _allow_coreduet_influence;
	BOOL _disableResultTruncation;
	float _numAppsDeduped;
	NSMutableDictionary* _categoryEngagements;
	NSArray* _rankingQueries;
	NSMutableDictionary* _queryDependentCategoryProbabilities;
	SSPlistDataReader* _queryIndependentCategoryProbabilities;
	NSNumber* _localResultQualityThreshold;
	NSMutableOrderedSet* _cepBlocklistSet;
	NSArray* _parsecCategoryOrder;
	NSString* _shortcutSectionBundleID;
	NSDictionary* _sqfData;
	NSDictionary* _serverFeatures;

}

@property (nonatomic,retain) NSMutableDictionary * categoryEngagements;                              //@synthesize categoryEngagements=_categoryEngagements - In the implementation block
@property (nonatomic,retain) NSArray * rankingQueries;                                               //@synthesize rankingQueries=_rankingQueries - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * queryDependentCategoryProbabilities;              //@synthesize queryDependentCategoryProbabilities=_queryDependentCategoryProbabilities - In the implementation block
@property (nonatomic,retain) SSPlistDataReader * queryIndependentCategoryProbabilities;              //@synthesize queryIndependentCategoryProbabilities=_queryIndependentCategoryProbabilities - In the implementation block
@property (nonatomic,retain) NSNumber * localResultQualityThreshold;                                 //@synthesize localResultQualityThreshold=_localResultQualityThreshold - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * cepBlocklistSet;                                  //@synthesize cepBlocklistSet=_cepBlocklistSet - In the implementation block
@property (nonatomic,retain) NSArray * parsecCategoryOrder;                                          //@synthesize parsecCategoryOrder=_parsecCategoryOrder - In the implementation block
@property (nonatomic,retain) NSString * shortcutSectionBundleID;                                     //@synthesize shortcutSectionBundleID=_shortcutSectionBundleID - In the implementation block
@property (assign,nonatomic) BOOL allow_coreduet_influence;                                          //@synthesize allow_coreduet_influence=_allow_coreduet_influence - In the implementation block
@property (nonatomic,retain) NSDictionary * sqfData;                                                 //@synthesize sqfData=_sqfData - In the implementation block
@property (nonatomic,retain) NSDictionary * serverFeatures;                                          //@synthesize serverFeatures=_serverFeatures - In the implementation block
@property (assign,nonatomic) BOOL disableResultTruncation;                                           //@synthesize disableResultTruncation=_disableResultTruncation - In the implementation block
@property (assign,nonatomic) float numAppsDeduped;                                                   //@synthesize numAppsDeduped=_numAppsDeduped - In the implementation block
-(id)init;
-(NSArray *)rankingQueries;
-(void)setServerFeatures:(NSDictionary *)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(NSDictionary *)serverFeatures;
-(NSDictionary *)sqfData;
-(void)setRankingQueries:(NSArray *)arg1 ;
-(NSArray *)parsecCategoryOrder;
-(void)setParsecCategoryOrder:(NSArray *)arg1 ;
-(void)setQueryDependentCategoryProbabilities:(NSMutableDictionary *)arg1 ;
-(void)setCepBlocklistSet:(NSMutableOrderedSet *)arg1 ;
-(void)setAllow_coreduet_influence:(BOOL)arg1 ;
-(void)setNumAppsDeduped:(float)arg1 ;
-(BOOL)disableResultTruncation;
-(void)setDisableResultTruncation:(BOOL)arg1 ;
-(void)updateWithSQFData:(id)arg1 ;
-(SSPlistDataReader *)queryIndependentCategoryProbabilities;
-(void)setQueryIndependentCategoryProbabilities:(SSPlistDataReader *)arg1 ;
-(void)appendToExistingCEPBlocklist:(id)arg1 ;
-(float)numAppsDeduped;
-(void)updateQueryDependentProbabilityAndBlocklistSetWith:(id)arg1 ;
-(NSMutableOrderedSet *)cepBlocklistSet;
-(NSMutableDictionary *)queryDependentCategoryProbabilities;
-(double)queryDependentProbabilityForCategory:(id)arg1 ;
-(float)engagementProbabilityForCategory:(id)arg1 ;
-(double)queryIndependentProbabilityForCategory:(id)arg1 ;
-(float)maxEngagementProbability;
-(NSMutableDictionary *)categoryEngagements;
-(void)setCategoryEngagements:(NSMutableDictionary *)arg1 ;
-(NSNumber *)localResultQualityThreshold;
-(void)setLocalResultQualityThreshold:(NSNumber *)arg1 ;
-(NSString *)shortcutSectionBundleID;
-(void)setShortcutSectionBundleID:(NSString *)arg1 ;
-(BOOL)allow_coreduet_influence;
-(void)setSqfData:(NSDictionary *)arg1 ;
@end

