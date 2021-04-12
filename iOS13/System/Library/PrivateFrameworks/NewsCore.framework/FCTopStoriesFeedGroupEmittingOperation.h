/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCTopStoriesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation
-(void)performOperation;
-(void)_performOperation;
-(id)headlinesLogFromHeadlinePairs:(id)arg1 includeScore:(BOOL)arg2 ;
-(id)headlinesLogFromHeadlines:(id)arg1 includeScore:(BOOL)arg2 ;
-(void)_selectHeadlinesFromMandatory:(id)arg1 optional:(id)arg2 publishDate:(id)arg3 articleMetadataByArticleID:(id)arg4 cursor:(id)arg5 isAllowedToCollapse:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(void)_fetchHeadlinesForArticleIDs:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_buildSupergroup;
-(void)_buildGroupWithCatchUpOperation:(id)arg1 ;
-(id)_selectPremiumHeadlinesFromHeadlinePairs:(id)arg1 ;
-(void)_headlinesFromMandatory:(id)arg1 optional:(id)arg2 articleIDs:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_filterHeadlines:(id)arg1 withArticleMetadata:(id)arg2 ;
-(id)_feedTransformationWithOtherArticleIDs:(id)arg1 ;
-(id)_personalizedFeedTransformationWithLimit:(unsigned long long)arg1 otherArticleIDs:(id)arg2 preselectedArticles:(id)arg3 ;
-(BOOL)hasSeenAllPreviousArticleIDs:(id)arg1 ;
-(id)headlineLogFromHeadline:(id)arg1 includeScore:(BOOL)arg2 ;
@end

