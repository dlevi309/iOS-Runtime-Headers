/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSMutableDictionary, NSDictionary;

@interface PGSearchKeywordComputerKeywordAggregator : NSObject {

	NSMutableDictionary* _keywordsByCategoryMaskByDateIntervalByMomentUUID;

}

@property (readonly) NSDictionary * aggregatedKeywords; 
-(id)init;
-(NSDictionary *)aggregatedKeywords;
-(void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentNode:(id)arg2 ;
-(void)aggregateKeywordArraysByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 fromUniversalStartDate:(id)arg3 toEndDate:(id)arg4 ;
-(void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 duringDateInterval:(id)arg3 ;
@end

