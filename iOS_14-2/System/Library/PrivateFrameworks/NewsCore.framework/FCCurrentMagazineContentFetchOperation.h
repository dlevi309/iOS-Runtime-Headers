/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@protocol FCFeedTransforming;
@class FCCachePolicy, FCCloudContext, NSArray, NSString;

@interface FCCurrentMagazineContentFetchOperation : FCOperation {

	FCCachePolicy* _cachedPolicy;
	/*^block*/id _fetchCompletionHandler;
	FCCloudContext* _context;
	NSArray* _configIssueIDs;
	NSArray* _configArticleIDs;
	NSString* _trendingArticleListID;
	id<FCFeedTransforming> _currentHeadlinesTransformation;
	NSArray* _resultConfigIssues;
	NSArray* _resultConfigHeadlines;
	NSArray* _resultCurrentIssues;
	NSArray* _resultCurrentFeatureHeadlines;
	NSArray* _resultTrendingHeadlines;

}

@property (nonatomic,retain) FCCloudContext * context;                                           //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSArray * configIssueIDs;                                           //@synthesize configIssueIDs=_configIssueIDs - In the implementation block
@property (nonatomic,retain) NSArray * configArticleIDs;                                         //@synthesize configArticleIDs=_configArticleIDs - In the implementation block
@property (nonatomic,copy) NSString * trendingArticleListID;                                     //@synthesize trendingArticleListID=_trendingArticleListID - In the implementation block
@property (nonatomic,retain) id<FCFeedTransforming> currentHeadlinesTransformation;              //@synthesize currentHeadlinesTransformation=_currentHeadlinesTransformation - In the implementation block
@property (nonatomic,retain) NSArray * resultConfigIssues;                                       //@synthesize resultConfigIssues=_resultConfigIssues - In the implementation block
@property (nonatomic,retain) NSArray * resultConfigHeadlines;                                    //@synthesize resultConfigHeadlines=_resultConfigHeadlines - In the implementation block
@property (nonatomic,retain) NSArray * resultCurrentIssues;                                      //@synthesize resultCurrentIssues=_resultCurrentIssues - In the implementation block
@property (nonatomic,retain) NSArray * resultCurrentFeatureHeadlines;                            //@synthesize resultCurrentFeatureHeadlines=_resultCurrentFeatureHeadlines - In the implementation block
@property (nonatomic,retain) NSArray * resultTrendingHeadlines;                                  //@synthesize resultTrendingHeadlines=_resultTrendingHeadlines - In the implementation block
@property (nonatomic,retain) FCCachePolicy * cachedPolicy;                                       //@synthesize cachedPolicy=_cachedPolicy - In the implementation block
@property (nonatomic,copy) id fetchCompletionHandler;                                            //@synthesize fetchCompletionHandler=_fetchCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(id)init;
-(NSArray *)configIssueIDs;
-(NSArray *)configArticleIDs;
-(id<FCFeedTransforming>)currentHeadlinesTransformation;
-(void)_fetchConfigContentAndCurrentIssuesWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchCurrentFeatureHeadlinesWithCompletion:(/*^block*/id)arg1 ;
-(FCCachePolicy *)cachedPolicy;
-(id)_filterInaccessibleIssues:(id)arg1 ;
-(void)setResultConfigIssues:(NSArray *)arg1 ;
-(id)_filterInaccessibleHeadlines:(id)arg1 ;
-(void)setResultConfigHeadlines:(NSArray *)arg1 ;
-(void)setResultCurrentIssues:(NSArray *)arg1 ;
-(void)setResultCurrentFeatureHeadlines:(NSArray *)arg1 ;
-(void)setResultTrendingHeadlines:(NSArray *)arg1 ;
-(NSArray *)resultConfigIssues;
-(NSArray *)resultConfigHeadlines;
-(NSArray *)resultCurrentIssues;
-(NSArray *)resultCurrentFeatureHeadlines;
-(NSArray *)resultTrendingHeadlines;
-(id)initWithContext:(id)arg1 configIssueIDs:(id)arg2 configArticleIDs:(id)arg3 trendingArticleListID:(id)arg4 currentHeadlinesTransformation:(id)arg5 ;
-(void)setCachedPolicy:(FCCachePolicy *)arg1 ;
-(void)setConfigIssueIDs:(NSArray *)arg1 ;
-(void)setConfigArticleIDs:(NSArray *)arg1 ;
-(void)setCurrentHeadlinesTransformation:(id<FCFeedTransforming>)arg1 ;
-(FCCloudContext *)context;
-(void)setTrendingArticleListID:(NSString *)arg1 ;
-(NSString *)trendingArticleListID;
-(id)fetchCompletionHandler;
-(void)setFetchCompletionHandler:(id)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
@end

