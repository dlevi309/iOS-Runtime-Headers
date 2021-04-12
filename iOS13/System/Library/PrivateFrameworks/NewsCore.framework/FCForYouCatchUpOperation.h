/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCMyArticlesOperation, FCTopStoriesOperation, FCEditorialOperation, NSOperationQueue, NSHashTable, NFUnfairLock, NSDictionary, NSError, FCForYouConfig, FCTopStoriesOperationResult, NSArray, NSMapTable, FCVideoArticlesOperationResult, FCSpotlightOperationResult;

@interface FCForYouCatchUpOperation : FCOperation {

	long long _contentTypes;
	FCMyArticlesOperation* _myArticlesOperation;
	FCTopStoriesOperation* _topStoriesOperation;
	FCEditorialOperation* _editorialOperation;
	NSOperationQueue* _operationQueue;
	NSHashTable* _conditionWaiters;
	NFUnfairLock* _conditionWaitersLock;

}

@property (assign,nonatomic) long long contentTypes;                                                //@synthesize contentTypes=_contentTypes - In the implementation block
@property (nonatomic,retain) FCMyArticlesOperation * myArticlesOperation;                           //@synthesize myArticlesOperation=_myArticlesOperation - In the implementation block
@property (nonatomic,retain) FCTopStoriesOperation * topStoriesOperation;                           //@synthesize topStoriesOperation=_topStoriesOperation - In the implementation block
@property (nonatomic,retain) FCEditorialOperation * editorialOperation;                             //@synthesize editorialOperation=_editorialOperation - In the implementation block
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
@property (nonatomic,copy,readonly) FCVideoArticlesOperationResult * topVideosResult; 
@property (nonatomic,copy,readonly) FCVideoArticlesOperationResult * moreVideosResult; 
@property (nonatomic,copy,readonly) FCSpotlightOperationResult * spotlightResult; 
+(id)sharedCatchUpOperationForEdition:(id)arg1 contentTypes:(long long)arg2 configuration:(id)arg3 context:(id)arg4 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)performOperation;
-(void)operationDidFinishWithError:(id)arg1 ;
-(NSDictionary *)feedContextByFeedID;
-(id)waiterForContentTypes:(long long)arg1 ;
-(FCVideoArticlesOperationResult *)topVideosResult;
-(FCForYouConfig *)forYouConfig;
-(FCTopStoriesOperationResult *)topStoriesResult;
-(id)nonEditorialFeedItemsAfterTransformation:(id)arg1 ;
-(NSMapTable *)nonEditorialScoreProfiles;
-(FCVideoArticlesOperationResult *)moreVideosResult;
-(NSArray *)nonEditorialFeedItems;
-(id)orphanedEditorialHeadlinesAfterTransformation:(id)arg1 minFamilySize:(unsigned long long)arg2 ;
-(void)enumerateEditorialSectionsByRecencyAfterTransformation:(id)arg1 minFamilySize:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(NSArray *)trendingHeadlines;
-(BOOL)isWaitingForContentTypes:(long long)arg1 ;
-(id)waiterForCondition:(id)arg1 ;
-(FCSpotlightOperationResult *)spotlightResult;
-(id<FCChannelProviding>)topStoriesChannel;
-(NSError *)catchUpError;
-(id)initWithContext:(id)arg1 configuration:(id)arg2 dateRange:(id)arg3 contentTypes:(long long)arg4 background:(BOOL)arg5 ;
-(NFUnfairLock *)conditionWaitersLock;
-(void)_serviceConditionWaiters;
-(FCTopStoriesOperation *)topStoriesOperation;
-(FCMyArticlesOperation *)myArticlesOperation;
-(FCEditorialOperation *)editorialOperation;
-(void)_addConditionWaiter:(id)arg1 ;
-(long long)contentTypes;
-(id)catchUpErrorForContentTypes:(long long)arg1 ;
-(NSHashTable *)conditionWaiters;
-(id)allFeedItemsAfterTransformation:(id)arg1 ;
-(void)setContentTypes:(long long)arg1 ;
-(void)setMyArticlesOperation:(FCMyArticlesOperation *)arg1 ;
-(void)setTopStoriesOperation:(FCTopStoriesOperation *)arg1 ;
-(void)setEditorialOperation:(FCEditorialOperation *)arg1 ;
-(void)setConditionWaiters:(NSHashTable *)arg1 ;
-(void)setConditionWaitersLock:(NFUnfairLock *)arg1 ;
@end

