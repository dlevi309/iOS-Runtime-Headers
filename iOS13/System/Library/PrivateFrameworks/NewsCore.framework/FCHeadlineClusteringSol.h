/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCHeadlineClustering.h>

@class FCHeadlineClusteringRules, NSSet, NSDictionary, FCSolHeuristic, NSMutableArray, NSMutableSet, NSString;

@interface FCHeadlineClusteringSol : NSObject <FCHeadlineClustering> {

	FCHeadlineClusteringRules* _rules;
	NSSet* _articleIds;
	NSDictionary* _articlesByTag;
	NSDictionary* _tagsByArticle;
	NSDictionary* _tagScores;
	NSDictionary* _headlinesById;
	NSSet* _hardOrphans;
	FCSolHeuristic* _heuristic;
	FCSolHeuristic* _autoFavoriteHeuristic;
	NSMutableArray* _articleGroups;
	NSMutableSet* _groupableTags;

}

@property (nonatomic,retain) FCHeadlineClusteringRules * rules;                   //@synthesize rules=_rules - In the implementation block
@property (nonatomic,retain) NSSet * articleIds;                                  //@synthesize articleIds=_articleIds - In the implementation block
@property (nonatomic,retain) NSDictionary * articlesByTag;                        //@synthesize articlesByTag=_articlesByTag - In the implementation block
@property (nonatomic,retain) NSDictionary * tagsByArticle;                        //@synthesize tagsByArticle=_tagsByArticle - In the implementation block
@property (nonatomic,retain) NSDictionary * tagScores;                            //@synthesize tagScores=_tagScores - In the implementation block
@property (nonatomic,retain) NSDictionary * headlinesById;                        //@synthesize headlinesById=_headlinesById - In the implementation block
@property (nonatomic,retain) NSSet * hardOrphans;                                 //@synthesize hardOrphans=_hardOrphans - In the implementation block
@property (nonatomic,retain) FCSolHeuristic * heuristic;                          //@synthesize heuristic=_heuristic - In the implementation block
@property (nonatomic,retain) FCSolHeuristic * autoFavoriteHeuristic;              //@synthesize autoFavoriteHeuristic=_autoFavoriteHeuristic - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleGroups;                      //@synthesize articleGroups=_articleGroups - In the implementation block
@property (nonatomic,retain) NSMutableSet * groupableTags;                        //@synthesize groupableTags=_groupableTags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCHeadlineClusteringRules *)rules;
-(void)setRules:(FCHeadlineClusteringRules *)arg1 ;
-(void)setHeuristic:(FCSolHeuristic *)arg1 ;
-(FCSolHeuristic *)heuristic;
-(id)clusterHeadlinesByTopic:(id)arg1 subscribedTags:(id)arg2 personalizer:(id)arg3 rules:(id)arg4 translationProvider:(id)arg5 unpaidHeadlineIDs:(id)arg6 ;
-(void)setGroupableTags:(NSMutableSet *)arg1 ;
-(NSMutableSet *)groupableTags;
-(id)sortedScoredArticles:(id)arg1 length:(long long)arg2 asc:(BOOL)arg3 ;
-(double)specificityScoreForTag:(id)arg1 ;
-(double)computeGroupingUtility:(id)arg1 ;
-(void)setAutoFavoriteHeuristic:(FCSolHeuristic *)arg1 ;
-(NSSet *)articleIds;
-(NSMutableArray *)articleGroups;
-(NSDictionary *)articlesByTag;
-(FCSolHeuristic *)autoFavoriteHeuristic;
-(void)setTagsByArticle:(NSDictionary *)arg1 ;
-(void)setTagScores:(NSDictionary *)arg1 ;
-(void)setHeadlinesById:(NSDictionary *)arg1 ;
-(NSDictionary *)tagsByArticle;
-(void)setArticleIds:(NSSet *)arg1 ;
-(void)setArticlesByTag:(NSDictionary *)arg1 ;
-(void)setArticleGroups:(NSMutableArray *)arg1 ;
-(NSDictionary *)tagScores;
-(void)setHardOrphans:(NSSet *)arg1 ;
-(NSSet *)hardOrphans;
-(void)computeGrouping:(id)arg1 topK:(double)arg2 ;
-(void)filterOverflowedOrphans:(id)arg1 ;
-(void)optimizeForLayout:(id)arg1 ;
-(id)computeBestGrouping:(id)arg1 tagScores:(id)arg2 headlinesById:(id)arg3 ;
-(NSDictionary *)headlinesById;
@end

