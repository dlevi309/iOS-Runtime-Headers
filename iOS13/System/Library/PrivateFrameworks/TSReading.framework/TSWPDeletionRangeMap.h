/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSWPRangeArray;

@interface TSWPDeletionRangeMap : NSObject {

	unsigned long long _subRangeStart;
	TSWPRangeArray* _removedRanges;

}
-(void)dealloc;
-(void)adjustByDelta:(long long)arg1 ;
-(NSRange)unmappedCharRange:(NSRange)arg1 ;
-(unsigned long long)unmappedCharIndex:(unsigned long long)arg1 ;
-(NSRange)mappedCharRange:(NSRange)arg1 ;
-(unsigned long long)mappedCharIndex:(unsigned long long)arg1 ;
-(id)initWithSubRange:(NSRange)arg1 removeRanges:(id)arg2 ;
-(id)inverseRangesInStorageRange:(NSRange)arg1 ;
-(BOOL)containsCharIndex:(unsigned long long)arg1 ;
@end

