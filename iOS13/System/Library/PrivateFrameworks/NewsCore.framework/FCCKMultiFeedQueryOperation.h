/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, NSArray, NSError;

@interface FCCKMultiFeedQueryOperation : FCOperation {

	FCCKContentDatabase* _database;
	NSArray* _feedRequests;
	unsigned long long _resultsLimit;
	NSArray* _desiredKeys;
	long long _sortingFunction;
	long long _queryPriority;
	NSArray* _articleLinkKeys;
	/*^block*/id _queryCompletionHandler;
	NSArray* _networkEvents;
	NSArray* _resultFeedItemAndArticleRecords;
	NSArray* _resultTagRecords;
	NSArray* _resultIssueRecords;
	NSArray* _resultFeedResponses;
	NSError* _resultError;

}

@property (nonatomic,copy) NSArray * networkEvents;                                  //@synthesize networkEvents=_networkEvents - In the implementation block
@property (nonatomic,retain) NSArray * resultFeedItemAndArticleRecords;              //@synthesize resultFeedItemAndArticleRecords=_resultFeedItemAndArticleRecords - In the implementation block
@property (nonatomic,retain) NSArray * resultTagRecords;                             //@synthesize resultTagRecords=_resultTagRecords - In the implementation block
@property (nonatomic,retain) NSArray * resultIssueRecords;                           //@synthesize resultIssueRecords=_resultIssueRecords - In the implementation block
@property (nonatomic,retain) NSArray * resultFeedResponses;                          //@synthesize resultFeedResponses=_resultFeedResponses - In the implementation block
@property (nonatomic,retain) NSError * resultError;                                  //@synthesize resultError=_resultError - In the implementation block
@property (nonatomic,retain) FCCKContentDatabase * database;                         //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) NSArray * feedRequests;                                   //@synthesize feedRequests=_feedRequests - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                        //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                    //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (assign,nonatomic) long long sortingFunction;                              //@synthesize sortingFunction=_sortingFunction - In the implementation block
@property (assign,nonatomic) long long queryPriority;                                //@synthesize queryPriority=_queryPriority - In the implementation block
@property (nonatomic,copy) NSArray * articleLinkKeys;                                //@synthesize articleLinkKeys=_articleLinkKeys - In the implementation block
@property (nonatomic,copy) id queryCompletionHandler;                                //@synthesize queryCompletionHandler=_queryCompletionHandler - In the implementation block
-(void)setDatabase:(FCCKContentDatabase *)arg1 ;
-(FCCKContentDatabase *)database;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(unsigned long long)resultsLimit;
-(NSArray *)desiredKeys;
-(NSArray *)networkEvents;
-(id)_requiredKeys;
-(void)setQueryCompletionHandler:(id)arg1 ;
-(id)queryCompletionHandler;
-(void)performOperation;
-(NSError *)resultError;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)prepareOperation;
-(void)resetForRetry;
-(void)setResultError:(NSError *)arg1 ;
-(void)setFeedRequests:(NSArray *)arg1 ;
-(void)setNetworkEvents:(NSArray *)arg1 ;
-(NSArray *)feedRequests;
-(id)_constructFeedQuery;
-(void)_processResultsRecord:(id)arg1 feedItemAndArticleRecords:(id)arg2 tagRecords:(id)arg3 issueRecords:(id)arg4 ;
-(void)setResultFeedItemAndArticleRecords:(NSArray *)arg1 ;
-(void)setResultTagRecords:(NSArray *)arg1 ;
-(void)setResultIssueRecords:(NSArray *)arg1 ;
-(void)setResultFeedResponses:(NSArray *)arg1 ;
-(NSArray *)resultFeedResponses;
-(NSArray *)resultFeedItemAndArticleRecords;
-(NSArray *)resultTagRecords;
-(NSArray *)resultIssueRecords;
-(id)_predicateForPerFeedFieldName:(id)arg1 key:(id)arg2 defaultValue:(id)arg3 ;
-(long long)sortingFunction;
-(long long)queryPriority;
-(NSArray *)articleLinkKeys;
-(id)_feedRelativeDictionaryFromResultsArray:(id)arg1 ;
-(void)setSortingFunction:(long long)arg1 ;
-(void)setQueryPriority:(long long)arg1 ;
-(void)setArticleLinkKeys:(NSArray *)arg1 ;
@end

