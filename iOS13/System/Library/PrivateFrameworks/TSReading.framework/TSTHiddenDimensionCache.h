/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableIndexSet, NSIndexSet;

@interface TSTHiddenDimensionCache : NSObject <NSCopying> {

	unsigned long long mCount;
	NSMutableIndexSet* mCachedVisible;
	NSMutableIndexSet* mCachedUserVisible;
	NSMutableIndexSet* mInvalidRanges;
	unsigned long long mMarkIndex;

}

@property (nonatomic,readonly) NSIndexSet * visibleIndices; 
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate:(NSRange)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(NSIndexSet *)visibleIndices;
-(id)initWithUserHiddenInformation:(BOOL)arg1 ;
-(BOOL)isIndexHidden:(unsigned long long)arg1 ;
-(BOOL)isIndexUserHidden:(unsigned long long)arg1 ;
-(unsigned long long)numberHiddenIndicesInRange:(NSRange)arg1 ;
-(unsigned long long)numberUserHiddenIndicesInRange:(NSRange)arg1 ;
-(BOOL)anyHiddenIndicesInRange:(NSRange)arg1 ;
-(BOOL)anyUserHiddenIndicesInRange:(NSRange)arg1 ;
-(unsigned long long)findPreviousVisibleIndex:(unsigned long long)arg1 ;
-(unsigned long long)findNextVisibleIndex:(unsigned long long)arg1 ;
-(unsigned long long)findNthPreviousVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 ;
-(unsigned long long)findNthNextVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 ;
-(unsigned short)numberOfVisibleIndicesToMarkIndexFrom:(unsigned long long)arg1 ;
-(void)setMarkIndex:(unsigned long long)arg1 ;
-(void)setAllValuesToZero;
-(void)setAllInvalidValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)moveRangeFrom:(NSRange)arg1 toIndex:(unsigned long long)arg2 ;
-(void)deleteRange:(NSRange)arg1 ;
-(void)insertRange:(NSRange)arg1 ;
@end

