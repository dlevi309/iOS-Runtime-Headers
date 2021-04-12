/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/VEKPipelineStage.h>

@class VEKProduction, NSArray;

@interface VEKPicklistStage : VEKPipelineStage {

	VEKProduction* _production;
	NSArray* _featuredPeople;
	double _maximumPossibleMemoryDuration;

}

@property (assign,nonatomic,__weak) VEKProduction * production;                   //@synthesize production=_production - In the implementation block
@property (nonatomic,retain) NSArray * featuredPeople;                            //@synthesize featuredPeople=_featuredPeople - In the implementation block
@property (nonatomic,readonly) double maximumPossibleMemoryDuration;              //@synthesize maximumPossibleMemoryDuration=_maximumPossibleMemoryDuration - In the implementation block
-(VEKProduction *)production;
-(void)setProduction:(VEKProduction *)arg1 ;
-(id)outputTypes;
-(id)inputTypes;
-(double)maximumPossibleMemoryDuration;
-(NSArray *)featuredPeople;
-(BOOL)needsTitleCard;
-(id)runStageWithInput:(id)arg1 ;
-(id)memoryClassificationKeys;
-(id)fudgedDurationInfoWithBuckets:(id)arg1 pickList:(id)arg2 ;
-(long long)pickedItemCountForBuckets:(Buckets)arg1 pickList:(id)arg2 ;
-(double)durationRangeForBuckets:(Buckets)arg1 ;
-(double)maximumPossibleMemoryDurationForPickList:(id)arg1 ;
-(double)maxDurationRangeForBuckets:(Buckets)arg1 ;
-(double)titleCardDuration;
-(BOOL)memoryClassificationBased;
-(void)setFeaturedPeople:(NSArray *)arg1 ;
@end

