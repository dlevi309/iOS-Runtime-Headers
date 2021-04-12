/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPTextWrapper : NSObject
+(unsigned)splitLine:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 polygon:(id)arg3 type:(int)arg4 skipHint:(double*)arg5 ;
+(double)unobstructedSpanForPath:(id)arg1 startingSpan:(CGRect)arg2 columnBounds:(CGRect)arg3 ;
+(unsigned)p_wrappedSubrectsForRectOptimized:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 polygon:(id)arg3 type:(int)arg4 skipHint:(double*)arg5 ;
+(unsigned)p_wrappedSubrectsForRectGPC:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 polygon:(id)arg3 type:(int)arg4 skipHint:(double*)arg5 ;
@end

