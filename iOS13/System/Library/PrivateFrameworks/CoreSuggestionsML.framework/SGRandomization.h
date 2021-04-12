/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


#import <CoreSuggestionsML/CoreSuggestionsML-Structs.h>
@interface SGRandomization : NSObject
+(void)shuffleMutableArray:(id)arg1 withRng:(id)arg2 ;
+(void)shuffleMutableArray:(id)arg1 inRange:(NSRange)arg2 withRng:(id)arg3 ;
+(void)shuffleMutableArray:(id)arg1 inApproxEqualEpsilon:(double)arg2 withValueBlock:(/*^block*/id)arg3 withRng:(id)arg4 ;
+(id)shuffledSamplingWithoutReplacementForK:(unsigned long long)arg1 fromN:(unsigned long long)arg2 withRng:(id)arg3 ;
@end

