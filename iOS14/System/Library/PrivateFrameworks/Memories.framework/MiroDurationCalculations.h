/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@interface MiroDurationCalculations : NSObject
+(double)durationForItemCount:(long long)arg1 inPickList:(id)arg2 withBlueprint:(id)arg3 respectTrim:(BOOL)arg4 localOnly:(BOOL)arg5 ;
+(double)rawDurationOfItems:(id)arg1 inRange:(NSRange)arg2 ;
+(long long)itemCountInPickList:(id)arg1 forDuration:(double)arg2 ;
+(double)biasedDurationOfItems:(id)arg1 inRange:(NSRange)arg2 ;
+(id)_itemsForDuration:(double)arg1 inPickList:(id)arg2 blueprint:(id)arg3 localOnly:(BOOL)arg4 respectTrim:(BOOL)arg5 ;
+(double)maxPleasantDurationOfItems:(id)arg1 inRange:(NSRange)arg2 ;
+(int)durationRangeForFrozenPickList:(id)arg1 ;
+(double)maxDurationForPickList:(id)arg1 withBlueprint:(id)arg2 ;
+(Buckets)doAllTheThingsForPickList:(id)arg1 ;
+(long long)itemCountInPickList:(id)arg1 forDuration:(double)arg2 withBlueprint:(id)arg3 respectTrim:(BOOL)arg4 outputResidual:(double*)arg5 ;
@end

