/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol REElementRelevanceEngineDelegate <NSObject>
@required
-(void)relevanceEngine:(id)arg1 elementWasAdded:(id)arg2;
-(void)relevanceEngine:(id)arg1 didUpdateRelevanceOfElement:(id)arg2;
-(void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3;
-(void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3;
-(void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4;
-(void)relevanceEngine:(id)arg1 performedBatchUpdates:(/*^block*/id)arg2;
-(void)relevanceEngine:(id)arg1 elementWasRemoved:(id)arg2;

@end

