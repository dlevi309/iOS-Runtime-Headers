/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@protocol FCHeadlineClustering, FCHeadlineClusterOrdering;
@class NSSet;

@interface FCMyArticlesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation {

	id<FCHeadlineClustering> _headlineClusterer;
	id<FCHeadlineClusterOrdering> _headlineClusterOrderer;
	NSSet* _emittableGroupTypes;

}

@property (nonatomic,retain) id<FCHeadlineClustering> headlineClusterer;                        //@synthesize headlineClusterer=_headlineClusterer - In the implementation block
@property (nonatomic,retain) id<FCHeadlineClusterOrdering> headlineClusterOrderer;              //@synthesize headlineClusterOrderer=_headlineClusterOrderer - In the implementation block
@property (nonatomic,retain) NSSet * emittableGroupTypes;                                       //@synthesize emittableGroupTypes=_emittableGroupTypes - In the implementation block
-(void)performOperation;
-(void)_performOperation;
-(NSSet *)emittableGroupTypes;
-(id<FCHeadlineClustering>)headlineClusterer;
-(void)setHeadlineClusterer:(id<FCHeadlineClustering>)arg1 ;
-(id<FCHeadlineClusterOrdering>)headlineClusterOrderer;
-(void)setHeadlineClusterOrderer:(id<FCHeadlineClusterOrdering>)arg1 ;
-(id)_nonEditorialFeedTransformationWithFeedContext:(id)arg1 showStoriesOnlyFromFavorites:(BOOL)arg2 ;
-(id)_joinedFeedTransformation;
-(id)_sortClusteredHeadlinesForDisplay:(id)arg1 withAdditionalData:(id)arg2 scoresByArticleID:(id)arg3 topicsByID:(id)arg4 translationProvider:(id)arg5 ;
-(id)interleaveHeadlines:(id)arg1 withPublisherDiversificationPenalty:(double)arg2 ;
-(void)setEmittableGroupTypes:(NSSet *)arg1 ;
@end

