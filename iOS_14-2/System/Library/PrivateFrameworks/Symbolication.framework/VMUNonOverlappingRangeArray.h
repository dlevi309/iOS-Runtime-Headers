/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMURangeArray.h>

@interface VMUNonOverlappingRangeArray : VMURangeArray
-(void)mergeRange:(VMURange)arg1 ;
-(void)mergeRange:(VMURange)arg1 excludingRanges:(id)arg2 ;
-(void)_mergeAllBitsOfRange:(VMURange)arg1 excludingRanges:(id)arg2 mergeRanges:(BOOL)arg3 ;
-(void)sortAndMergeRanges;
-(void)mergeRanges:(id)arg1 ;
-(void)mergeRanges:(id)arg1 excludingRanges:(id)arg2 ;
-(id)subtract:(id)arg1 mergeRanges:(BOOL)arg2 ;
-(void)addOrExtendRange:(VMURange)arg1 ;
@end

