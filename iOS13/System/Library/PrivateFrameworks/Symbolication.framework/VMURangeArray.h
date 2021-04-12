/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VMURangeArray : NSObject <NSCopying> {

	unsigned _count;
	VMURange* _ranges;
	unsigned _max;
	BOOL _sorted;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)count;
-(VMURange)rangeAtIndex:(unsigned)arg1 ;
-(VMURange)range;
-(void)setCapacity:(unsigned)arg1 ;
-(void)sort;
-(void)addRange:(VMURange)arg1 ;
-(BOOL)intersectsRange:(VMURange)arg1 ;
-(VMURange*)ranges;
-(unsigned long long)indexForLocation:(unsigned long long)arg1 ;
-(void)removeRangeAtIndex:(unsigned)arg1 ;
-(void)removeAllRanges;
-(BOOL)intersectsLocation:(unsigned long long)arg1 ;
-(id)initWithRanges:(const VMURange*)arg1 count:(unsigned)arg2 ;
-(void)addRanges:(id)arg1 ;
-(VMURange)rangeForLocation:(unsigned long long)arg1 ;
-(void)insertRange:(VMURange)arg1 atIndex:(unsigned)arg2 ;
-(VMURange)subrangeNotExcludedBySelfForRange:(VMURange)arg1 ;
-(VMURange)largestRange;
-(unsigned long long)sumLengths;
@end

