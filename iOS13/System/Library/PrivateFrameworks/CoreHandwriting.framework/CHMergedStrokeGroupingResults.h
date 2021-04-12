/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CHStrokeGroupingResult.h>

@class NSDictionary;

@interface CHMergedStrokeGroupingResults : CHStrokeGroupingResult {

	NSDictionary* _groupingResultsByStrategyIdentifier;

}

@property (nonatomic,retain,readonly) NSDictionary * groupingResultsByStrategyIdentifier;              //@synthesize groupingResultsByStrategyIdentifier=_groupingResultsByStrategyIdentifier - In the implementation block
-(void)dealloc;
-(id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 groupingResultsByStrategyIdentifier:(id)arg4 ;
-(NSDictionary *)groupingResultsByStrategyIdentifier;
@end

