/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@interface RangeDataManager : NSObject
+(id)collapseRanges:(id)arg1 ;
+(id)unionOfRangeLists:(id)arg1 ;
+(id)intersectionOfRanges1:(id)arg1 ranges2:(id)arg2 ;
+(id)unionOfRanges1:(id)arg1 ranges2:(id)arg2 ;
+(id)intersectionOfRangeLists:(id)arg1 ;
+(id)stringForRanges:(id)arg1 ;
+(void)unionOfRangeLists:(id)arg1 interleavedIntoList1:(id*)arg2 andList2:(id*)arg3 ;
+(id)invertedRanges:(id)arg1 duration:(long long)arg2 ;
+(BOOL)location:(long long)arg1 isInRanges:(id)arg2 foundRange:(SCD_Struct_Ra25*)arg3 ;
+(void)ranges:(id)arg1 addRange:(SCD_Struct_Ra25)arg2 forKey:(id)arg3 ;
@end

