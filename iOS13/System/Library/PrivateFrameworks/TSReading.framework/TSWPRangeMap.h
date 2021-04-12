/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPRangeMap : NSObject {

	NSRange _subRange;
	vector<_TSWPCharIndexAndAffinity, std::__1::allocator<_TSWPCharIndexAndAffinity> >* _unmappedIndexes;
	vector<_TSWPCharIndexAndAffinity, std::__1::allocator<_TSWPCharIndexAndAffinity> >* _mappedIndexes;

}
-(id)initWithSubRange:(NSRange)arg1 unmappedPairIndexes:(const vector<unsigned long, std::__1::allocator<unsigned long> >*)arg2 ;
-(id)initWithSubRange:(NSRange)arg1 unmappedIndexes:(const vector<unsigned long, std::__1::allocator<unsigned long> >*)arg2 affinity:(int)arg3 ;
-(void)adjustByDelta:(long long)arg1 ;
-(NSRange)unmappedCharRange:(NSRange)arg1 ;
-(unsigned long long)unmappedCharIndex:(unsigned long long)arg1 ;
-(NSRange)mappedCharRange:(NSRange)arg1 ;
-(unsigned long long)mappedCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)p_extendLeftMappedIndex:(unsigned long long)arg1 ;
-(unsigned long long)p_extendRightMappedIndex:(unsigned long long)arg1 ;
@end

