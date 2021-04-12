/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSMutableDictionary, NSDictionary;

@interface PGSearchKeywordComputerKeywordAggregator : NSObject {

	NSMutableDictionary* _keywordsByCategoryMaskByDateIntervalByMomentUUID;

}

@property (readonly) NSDictionary * aggregatedKeywords; 
-(id)init;
-(NSDictionary *)aggregatedKeywords;
-(void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 fromUniversalStartDate:(id)arg3 toEndDate:(id)arg4 ;
-(void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentNode:(id)arg2 ;
-(void)aggregateKeywordArraysByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 fromUniversalStartDate:(id)arg3 toEndDate:(id)arg4 ;
-(void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 duringDateInterval:(id)arg3 ;
@end

