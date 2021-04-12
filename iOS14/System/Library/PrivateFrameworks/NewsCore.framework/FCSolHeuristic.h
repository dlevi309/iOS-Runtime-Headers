/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	long long _maxEvergreenArticles;
	long long _heuristicSampleSize;
	/*^block*/id _utilityBlock;

}

@property (nonatomic,retain) NSArray * groupSizes;                             //@synthesize groupSizes=_groupSizes - In the implementation block
@property (nonatomic,readonly) BOOL alternate;                                 //@synthesize alternate=_alternate - In the implementation block
@property (nonatomic,readonly) long long iterations;                           //@synthesize iterations=_iterations - In the implementation block
@property (nonatomic,readonly) long long maxPublisherOccurrences;              //@synthesize maxPublisherOccurrences=_maxPublisherOccurrences - In the implementation block
@property (nonatomic,readonly) BOOL enforcePublisherCap;                       //@synthesize enforcePublisherCap=_enforcePublisherCap - In the implementation block
@property (nonatomic,readonly) long long maxUnpaidArticles;                    //@synthesize maxUnpaidArticles=_maxUnpaidArticles - In the implementation block
@property (nonatomic,readonly) long long maxEvergreenArticles;                 //@synthesize maxEvergreenArticles=_maxEvergreenArticles - In the implementation block
@property (nonatomic,readonly) long long heuristicSampleSize;                  //@synthesize heuristicSampleSize=_heuristicSampleSize - In the implementation block
@property (nonatomic,copy,readonly) id utilityBlock;                           //@synthesize utilityBlock=_utilityBlock - In the implementation block
-(id)initWithOption:(long long)arg1 minClusterSize:(long long)arg2 maxClusterSize:(long long)arg3 minIdealClusterSize:(long long)arg4 maxIdealClusterSize:(long long)arg5 maxPublisherOccurrences:(long long)arg6 enforcePublisherCap:(BOOL)arg7 maxUnpaidArticles:(long long)arg8 maxEvergreenArticles:(long long)arg9 heuristicSampleSize:(long long)arg10 utilityBlock:(/*^block*/id)arg11 ;
-(long long)iterations;
-(long long)heuristicSampleSize;
-(NSArray *)groupSizes;
-(id)utilityBlock;
-(void)setGroupSizes:(NSArray *)arg1 ;
-(long long)maxUnpaidArticles;
-(id)fillGroupsWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4 ;
-(long long)maxEvergreenArticles;
-(double)computeScoreWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4 ;
-(long long)maxPublisherOccurrences;
-(BOOL)enforcePublisherCap;
-(BOOL)alternate;
@end

