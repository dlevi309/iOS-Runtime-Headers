/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<FCHeadlineClusterOrdering>)headlineClusterOrderer;
-(void)setHeadlineClusterer:(id<FCHeadlineClustering>)arg1 ;
-(id)_joinedFeedTransformation;
-(id)_nonEditorialFeedTransformationWithFeedContext:(id)arg1 showStoriesOnlyFromFavorites:(BOOL)arg2 ;
-(id)_sortClusteredHeadlinesForDisplay:(id)arg1 withAdditionalData:(id)arg2 scoresByArticleID:(id)arg3 topicsByID:(id)arg4 translationProvider:(id)arg5 ;
-(id)interleaveHeadlines:(id)arg1 withPublisherDiversificationPenalty:(double)arg2 ;
-(void)setEmittableGroupTypes:(NSSet *)arg1 ;
-(id<FCHeadlineClustering>)headlineClusterer;
-(void)_performOperation;
-(NSSet *)emittableGroupTypes;
-(void)setHeadlineClusterOrderer:(id<FCHeadlineClusterOrdering>)arg1 ;
@end

