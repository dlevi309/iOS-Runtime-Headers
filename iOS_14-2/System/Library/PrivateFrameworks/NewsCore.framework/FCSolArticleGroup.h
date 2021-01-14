/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCSolTagID, NSMutableSet, FCHeadlineClusteringRules;

@interface FCSolArticleGroup : NSObject {

	FCSolTagID* _tagId;
	NSMutableSet* _articles;
	double _personalizationScore;
	FCHeadlineClusteringRules* _rules;
	NSMutableSet* _topArticles;
	NSMutableSet* _orphans;
	double _score;
	double _heuristicScore;

}

@property (assign,nonatomic) double heuristicScore;                          //@synthesize heuristicScore=_heuristicScore - In the implementation block
@property (nonatomic,retain) FCSolTagID * tagId;                             //@synthesize tagId=_tagId - In the implementation block
@property (nonatomic,retain) NSMutableSet * articles;                        //@synthesize articles=_articles - In the implementation block
@property (assign,nonatomic) double personalizationScore;                    //@synthesize personalizationScore=_personalizationScore - In the implementation block
@property (nonatomic,retain) FCHeadlineClusteringRules * rules;              //@synthesize rules=_rules - In the implementation block
@property (nonatomic,readonly) NSMutableSet * topArticles;                   //@synthesize topArticles=_topArticles - In the implementation block
@property (nonatomic,readonly) NSMutableSet * orphans;                       //@synthesize orphans=_orphans - In the implementation block
@property (nonatomic,readonly) double score;                                 //@synthesize score=_score - In the implementation block
+(id)formGroup:(id)arg1 withMinClusterSize:(long long)arg2 maxClusterSize:(long long)arg3 maxPublisherOccurrences:(long long)arg4 maxUnpaidArticles:(long long)arg5 maxEvergreenArticles:(long long)arg6 enforcePublisherCap:(BOOL)arg7 ;
+(id)predictBestGroup:(id)arg1 ungroupedArticles:(id)arg2 ungroupedTags:(id)arg3 articlesByTag:(id)arg4 heuristic:(id)arg5 autoFavoriteHeuristic:(id)arg6 ;
+(id)formBestOfGroup:(id)arg1 clusteringRules:(id)arg2 topicDiversityThreshold:(double)arg3 topicDiversityWindowSize:(long long)arg4 allowUnfilteredArticles:(BOOL)arg5 ;
-(void)setPersonalizationScore:(double)arg1 ;
-(double)personalizationScore;
-(FCSolTagID *)tagId;
-(double)score;
-(void)setRules:(FCHeadlineClusteringRules *)arg1 ;
-(NSMutableSet *)orphans;
-(NSMutableSet *)articles;
-(void)setTagId:(FCSolTagID *)arg1 ;
-(NSMutableSet *)topArticles;
-(id)initWithTagId:(id)arg1 personalizationScore:(double)arg2 articles:(id)arg3 rules:(id)arg4 ;
-(void)intersectArticles:(id)arg1 ;
-(FCHeadlineClusteringRules *)rules;
-(void)setArticles:(NSMutableSet *)arg1 ;
-(void)computeTopArticlesAndScore;
-(void)setHeuristicScore:(double)arg1 ;
-(double)heuristicScore;
@end

