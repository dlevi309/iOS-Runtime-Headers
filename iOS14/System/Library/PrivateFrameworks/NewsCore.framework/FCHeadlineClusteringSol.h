/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHeuristic:(FCSolHeuristic *)arg1 ;
-(FCSolHeuristic *)heuristic;
-(void)setArticlesByTag:(NSDictionary *)arg1 ;
-(NSDictionary *)headlinesById;
-(void)setTagScores:(NSDictionary *)arg1 ;
-(void)setAutoFavoriteHeuristic:(FCSolHeuristic *)arg1 ;
-(NSMutableSet *)groupableTags;
-(FCSolHeuristic *)autoFavoriteHeuristic;
-(double)specificityScoreForTag:(id)arg1 ;
-(void)setArticleGroups:(NSMutableArray *)arg1 ;
-(void)setHeadlinesById:(NSDictionary *)arg1 ;
-(NSMutableArray *)articleGroups;
-(NSDictionary *)articlesByTag;
-(void)setRules:(FCHeadlineClusteringRules *)arg1 ;
-(NSDictionary *)tagsByArticle;
-(double)computeGroupingUtility:(id)arg1 ;
-(void)setTagsByArticle:(NSDictionary *)arg1 ;
-(void)filterOverflowedOrphans:(id)arg1 ;
-(NSDictionary *)tagScores;
-(NSSet *)hardOrphans;
-(void)computeGrouping:(id)arg1 topK:(double)arg2 ;
-(void)setHardOrphans:(NSSet *)arg1 ;
-(id)sortedScoredArticles:(id)arg1 length:(long long)arg2 asc:(BOOL)arg3 ;
-(void)setArticleIds:(NSSet *)arg1 ;
-(void)setGroupableTags:(NSMutableSet *)arg1 ;
-(FCHeadlineClusteringRules *)rules;
-(id)computeBestGrouping:(id)arg1 tagScores:(id)arg2 headlinesById:(id)arg3 ;
-(void)optimizeForLayout:(id)arg1 ;
-(id)clusterHeadlinesByTopic:(id)arg1 subscribedTags:(id)arg2 personalizer:(id)arg3 rules:(id)arg4 translationProvider:(id)arg5 unpaidHeadlineIDs:(id)arg6 ;
-(NSSet *)articleIds;
@end

