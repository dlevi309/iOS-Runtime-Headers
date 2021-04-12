/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray;

@interface FCSolHeuristic : NSObject {

	BOOL _alternate;
	BOOL _enforcePublisherCap;
	NSArray* _groupSizes;
	long long _iterations;
	long long _maxPublisherOccurrences;
	long long _maxUnpaidArticles;
	long long _heuristicSampleSize;
	/*^block*/id _utilityBlock;
	double _topicDiversityThreshold;
	long long _topicDiversityWindowSize;

}

@property (nonatomic,retain) NSArray * groupSizes;                              //@synthesize groupSizes=_groupSizes - In the implementation block
@property (nonatomic,readonly) BOOL alternate;                                  //@synthesize alternate=_alternate - In the implementation block
@property (nonatomic,readonly) long long iterations;                            //@synthesize iterations=_iterations - In the implementation block
@property (nonatomic,readonly) long long maxPublisherOccurrences;               //@synthesize maxPublisherOccurrences=_maxPublisherOccurrences - In the implementation block
@property (nonatomic,readonly) BOOL enforcePublisherCap;                        //@synthesize enforcePublisherCap=_enforcePublisherCap - In the implementation block
@property (nonatomic,readonly) long long maxUnpaidArticles;                     //@synthesize maxUnpaidArticles=_maxUnpaidArticles - In the implementation block
@property (nonatomic,readonly) long long heuristicSampleSize;                   //@synthesize heuristicSampleSize=_heuristicSampleSize - In the implementation block
@property (nonatomic,copy,readonly) id utilityBlock;                            //@synthesize utilityBlock=_utilityBlock - In the implementation block
@property (nonatomic,readonly) double topicDiversityThreshold;                  //@synthesize topicDiversityThreshold=_topicDiversityThreshold - In the implementation block
@property (nonatomic,readonly) long long topicDiversityWindowSize;              //@synthesize topicDiversityWindowSize=_topicDiversityWindowSize - In the implementation block
-(long long)iterations;
-(long long)heuristicSampleSize;
-(NSArray *)groupSizes;
-(BOOL)alternate;
-(id)fillGroupsWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4 ;
-(id)utilityBlock;
-(id)initWithOption:(long long)arg1 minClusterSize:(long long)arg2 maxClusterSize:(long long)arg3 minIdealClusterSize:(long long)arg4 maxIdealClusterSize:(long long)arg5 maxPublisherOccurrences:(long long)arg6 enforcePublisherCap:(BOOL)arg7 maxUnpaidArticles:(long long)arg8 heuristicSampleSize:(long long)arg9 utilityBlock:(/*^block*/id)arg10 topicDiversityThreshold:(double)arg11 topicDiversityWindowSize:(long long)arg12 ;
-(double)computeScoreWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4 ;
-(void)setGroupSizes:(NSArray *)arg1 ;
-(long long)maxPublisherOccurrences;
-(BOOL)enforcePublisherCap;
-(long long)maxUnpaidArticles;
-(double)topicDiversityThreshold;
-(long long)topicDiversityWindowSize;
@end

