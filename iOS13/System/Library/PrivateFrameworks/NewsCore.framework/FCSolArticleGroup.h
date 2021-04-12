/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)formGroup:(id)arg1 withMinClusterSize:(long long)arg2 maxClusterSize:(long long)arg3 maxPublisherOccurrences:(long long)arg4 maxUnpaidArticles:(long long)arg5 enforcePublisherCap:(BOOL)arg6 topicDiversityThreshold:(double)arg7 topicDiversityWindowSize:(long long)arg8 ;
+(id)predictBestGroup:(id)arg1 ungroupedArticles:(id)arg2 ungroupedTags:(id)arg3 articlesByTag:(id)arg4 heuristic:(id)arg5 autoFavoriteHeuristic:(id)arg6 ;
-(double)score;
-(double)personalizationScore;
-(void)setPersonalizationScore:(double)arg1 ;
-(FCHeadlineClusteringRules *)rules;
-(void)setRules:(FCHeadlineClusteringRules *)arg1 ;
-(NSMutableSet *)orphans;
-(NSMutableSet *)topArticles;
-(FCSolTagID *)tagId;
-(NSMutableSet *)articles;
-(void)intersectArticles:(id)arg1 ;
-(id)initWithTagId:(id)arg1 personalizationScore:(double)arg2 articles:(id)arg3 rules:(id)arg4 ;
-(void)computeTopArticlesAndScore;
-(void)setHeuristicScore:(double)arg1 ;
-(double)heuristicScore;
-(void)setArticles:(NSMutableSet *)arg1 ;
-(void)setTagId:(FCSolTagID *)arg1 ;
@end

