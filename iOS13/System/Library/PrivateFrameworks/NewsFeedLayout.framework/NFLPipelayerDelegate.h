/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/


@protocol NFLPipelayerDelegate <NSObject>
@required
-(id)pipelayer:(id)arg1 descriptionForSegmentType:(unsigned long long)arg2;
-(unsigned long long)pipelayer:(id)arg1 numberOfUnitsUsedBySegmentType:(unsigned long long)arg2;
-(double)pipelayer:(id)arg1 transitionRankFromSegmentType:(unsigned long long)arg2 toSegmentType:(unsigned long long)arg3;
-(double)pipelayer:(id)arg1 secondaryScoreOfPath:(id)arg2 units:(id)arg3;
-(id)pipelayer:(id)arg1 nextSegmentTypeCandidatesForSegmentType:(unsigned long long)arg2;
-(BOOL)pipelayer:(id)arg1 maySegmentType:(unsigned long long)arg2 usePipeUnits:(id)arg3;
-(void)pipelayer:(id)arg1 segmentForUnits:(id)arg2 segmentType:(unsigned long long)arg3 qualityOfService:(long long)arg4 completion:(/*^block*/id)arg5;

@end

