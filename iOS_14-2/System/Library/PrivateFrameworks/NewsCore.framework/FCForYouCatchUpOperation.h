/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCMyArticlesOperation, FCTopStoriesOperation, FCEditorialOperation, FCForYouConfigHeadlinesOperation, NSOperationQueue, NSHashTable, NFUnfairLock, NSDictionary, NSError, FCForYouConfig, FCTopStoriesOperationResult, NSArray, NSMapTable, FCSpotlightOperationResult;

@interface FCForYouCatchUpOperation : FCOperation {

	long long _contentTypes;
	FCMyArticlesOperation* _myArticlesOperation;
	FCTopStoriesOperation* _topStoriesOperation;
	FCEditorialOperation* _editorialOperation;
	FCForYouConfigHeadlinesOperation* _forYouConfigOperation;
	NSOperationQueue* _operationQueue;
	NSHashTable* _conditionWaiters;
	NFUnfairLock* _conditionWaitersLock;

}

@property (assign,nonatomic) long long contentTypes;                                                //@synthesize contentTypes=_contentTypes - In the implementation block
@property (nonatomic,retain) FCMyArticlesOperation * myArticlesOperation;                           //@synthesize myArticlesOperation=_myArticlesOperation - In the implementation block
@property (nonatomic,retain) FCTopStoriesOperation * topStoriesOperation;                           //@synthesize topStoriesOperation=_topStoriesOperation - In the implementation block
@property (nonatomic,retain) FCEditorialOperation * editorialOperation;                             //@synthesize editorialOperation=_editorialOperation - In the implementation block
@property (nonatomic,retain) FCForYouConfigHeadlinesOperation * forYouConfigOperation;              //@synthesize forYouConfigOperation=_forYouConfigOperation - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                     //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * conditionWaiters;                                        //@synthesize conditionWaiters=_conditionWaiters - In the implementation block
@property (nonatomic,retain) NFUnfairLock * conditionWaitersLock;                                   //@synthesize conditionWaitersLock=_conditionWaitersLock - In the implementation block
@property (copy,readonly) NSDictionary * feedContextByFeedID; 
@property (nonatomic,copy,readonly) NSError * catchUpError; 
@property (nonatomic,copy,readonly) FCForYouConfig * forYouConfig; 
@property (nonatomic,copy,readonly) id<FCChannelProviding> topStoriesChannel; 
@property (nonatomic,copy,readonly) FCTopStoriesOperationResult * topStoriesResult; 
@property (nonatomic,copy,readonly) NSArray * trendingHeadlines; 
@property (nonatomic,copy,readonly) NSArray * nonEditorialFeedItems; 
@property (nonatomic,copy,readonly) NSMapTable * nonEditorialScoreProfiles; 
@property (nonatomic,copy,readonly) FCSpotlightOperationResult * spotlightResult; 
+(id)sharedCatchUpOperationForEdition:(id)arg1 contentTypes:(long long)arg2 configuration:(id)arg3 context:(id)arg4 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)performOperation;
-(NSOperationQueue *)operationQueue;
-(void)setConditionWaitersLock:(NFUnfairLock *)arg1 ;
-(id)orphanedEditorialHeadlinesAfterTransformation:(id)arg1 minFamilySize:(unsigned long long)arg2 ;
-(FCSpotlightOperationResult *)spotlightResult;
-(id)initWithContext:(id)arg1 configuration:(id)arg2 dateRange:(id)arg3 contentTypes:(long long)arg4 background:(BOOL)arg5 ;
-(long long)contentTypes;
-(FCEditorialOperation *)editorialOperation;
-(void)setConditionWaiters:(NSHashTable *)arg1 ;
-(void)operationDidFinishWithError:(id)arg1 ;
-(id)catchUpErrorForContentTypes:(long long)arg1 ;
-(id)waiterForCondition:(id)arg1 ;
-(NSArray *)nonEditorialFeedItems;
-(FCForYouConfig *)forYouConfig;
-(NSHashTable *)conditionWaiters;
-(id<FCChannelProviding>)topStoriesChannel;
-(void)_serviceConditionWaiters;
-(void)setForYouConfigOperation:(FCForYouConfigHeadlinesOperation *)arg1 ;
-(FCTopStoriesOperation *)topStoriesOperation;
-(void)setContentTypes:(long long)arg1 ;
-(NSDictionary *)feedContextByFeedID;
-(id)nonEditorialFeedItemsAfterTransformation:(id)arg1 ;
-(NSMapTable *)nonEditorialScoreProfiles;
-(NSError *)catchUpError;
-(BOOL)isWaitingForContentTypes:(long long)arg1 ;
-(FCTopStoriesOperationResult *)topStoriesResult;
-(void)setMyArticlesOperation:(FCMyArticlesOperation *)arg1 ;
-(FCMyArticlesOperation *)myArticlesOperation;
-(void)setEditorialOperation:(FCEditorialOperation *)arg1 ;
-(void)_addConditionWaiter:(id)arg1 ;
-(id)waiterForContentTypes:(long long)arg1 ;
-(FCForYouConfigHeadlinesOperation *)forYouConfigOperation;
-(void)enumerateEditorialSectionsByRecencyAfterTransformation:(id)arg1 minFamilySize:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(NSArray *)trendingHeadlines;
-(void)setTopStoriesOperation:(FCTopStoriesOperation *)arg1 ;
-(NFUnfairLock *)conditionWaitersLock;
@end

