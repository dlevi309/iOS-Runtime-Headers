/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCKContentDatabase.h>

@class NSSet, NSMutableArray, NSMutableSet, FCCKTestFeedQueryEndpoint, FCCKTestOrderFeedQueryEndpoint, FCCKTestMultiFetchQueryEndpoint;

@interface FCCKTestContentDatabase : FCCKContentDatabase {

	BOOL _simulateNetworkError;
	NSSet* _fetchedKeys;
	NSMutableArray* _records;
	NSMutableSet* _droppedFeeds;
	FCCKTestFeedQueryEndpoint* _feedQueryEndpoint;
	FCCKTestOrderFeedQueryEndpoint* _orderFeedQueryEndpoint;
	FCCKTestMultiFetchQueryEndpoint* _multiFetchQueryEndpoint;

}

@property (nonatomic,retain) NSMutableArray * records;                                               //@synthesize records=_records - In the implementation block
@property (nonatomic,retain) NSMutableSet * droppedFeeds;                                            //@synthesize droppedFeeds=_droppedFeeds - In the implementation block
@property (nonatomic,retain) FCCKTestFeedQueryEndpoint * feedQueryEndpoint;                          //@synthesize feedQueryEndpoint=_feedQueryEndpoint - In the implementation block
@property (nonatomic,retain) FCCKTestOrderFeedQueryEndpoint * orderFeedQueryEndpoint;                //@synthesize orderFeedQueryEndpoint=_orderFeedQueryEndpoint - In the implementation block
@property (nonatomic,retain) FCCKTestMultiFetchQueryEndpoint * multiFetchQueryEndpoint;              //@synthesize multiFetchQueryEndpoint=_multiFetchQueryEndpoint - In the implementation block
@property (nonatomic,copy) NSSet * fetchedKeys;                                                      //@synthesize fetchedKeys=_fetchedKeys - In the implementation block
@property (assign,nonatomic) BOOL simulateNetworkError;                                              //@synthesize simulateNetworkError=_simulateNetworkError - In the implementation block
+(id)testingDatabase;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(NSMutableSet *)droppedFeeds;
-(NSSet *)fetchedKeys;
-(NSMutableArray *)records;
-(void)addOperation:(id)arg1 ;
-(id)insertTestArticle;
-(void)setOrderFeedQueryEndpoint:(FCCKTestOrderFeedQueryEndpoint *)arg1 ;
-(id)insertTestTagWithType:(id)arg1 feedID:(id)arg2 ;
-(void)setFeedQueryEndpoint:(FCCKTestFeedQueryEndpoint *)arg1 ;
-(void)populateWithBasicTestFeeds;
-(void)insertArticleID:(id)arg1 atTopOfFeedID:(id)arg2 ;
-(void)insertRecord:(id)arg1 ;
-(void)setMultiFetchQueryEndpoint:(FCCKTestMultiFetchQueryEndpoint *)arg1 ;
-(void)setDroppedFeeds:(NSMutableSet *)arg1 ;
-(id)insertTestArticleWithProperties:(id)arg1 ;
-(void)insertTestTagWithID:(id)arg1 type:(id)arg2 properties:(id)arg3 ;
-(id)insertTestIssueListReferencingIssueIDs:(id)arg1 ;
-(id)addArticlesToTopOfFeed:(id)arg1 count:(unsigned long long)arg2 ;
-(void)updateArticleID:(id)arg1 inFeedID:(id)arg2 withProperties:(id)arg3 ;
-(void)insertArticleID:(id)arg1 inFeedID:(id)arg2 withOrder:(unsigned long long)arg3 subOrder:(unsigned long long)arg4 ;
-(unsigned long long)orderForArticleID:(id)arg1 feedID:(id)arg2 ;
-(void)updateArticleWithID:(id)arg1 properties:(id)arg2 ;
-(void)setFetchedKeys:(NSSet *)arg1 ;
-(void)deleteArticleWithID:(id)arg1 ;
-(void)insertTestIssueWithID:(id)arg1 properties:(id)arg2 ;
-(id)records:(id)arg1 withDesiredKeys:(id)arg2 ;
-(void)setSimulateNetworkError:(BOOL)arg1 ;
-(void)simulateDroppedFeedForFeedID:(id)arg1 ;
-(id)insertTestTagWithType:(id)arg1 properties:(id)arg2 ;
-(BOOL)simulateNetworkError;
-(BOOL)shouldUseCloudd;
-(id)insertTestArticleListReferencingArticleIDs:(id)arg1 ;
-(FCCKTestOrderFeedQueryEndpoint *)orderFeedQueryEndpoint;
-(void)updateArticleWithID:(id)arg1 modDate:(id)arg2 properties:(id)arg3 ;
-(FCCKTestFeedQueryEndpoint *)feedQueryEndpoint;
-(id)insertTestIssueWithProperties:(id)arg1 ;
-(id)insertTestForYouConfigWithProperties:(id)arg1 ;
-(void)insertTestArticleWithID:(id)arg1 properties:(id)arg2 ;
-(FCCKTestMultiFetchQueryEndpoint *)multiFetchQueryEndpoint;
-(void)deleteFeedID:(id)arg1 ;
-(id)insertTestTagWithType:(id)arg1 feedID:(id)arg2 properties:(id)arg3 ;
-(void)insertArticleID:(id)arg1 inFeedID:(id)arg2 withOrder:(unsigned long long)arg3 ;
-(id)initWithContainerIdentifier:(id)arg1 productionEnvironment:(BOOL)arg2 networkBehaviorMonitor:(id)arg3 ;
-(void)insertArticleID:(id)arg1 atBottomOfFeedID:(id)arg2 ;
-(void)updateTagWithID:(id)arg1 properties:(id)arg2 ;
@end

