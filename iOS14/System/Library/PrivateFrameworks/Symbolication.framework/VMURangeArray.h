/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCapacity:(unsigned)arg1 ;
-(id)init;
-(VMURange)range;
-(VMURange*)ranges;
-(BOOL)intersectsRange:(VMURange)arg1 ;
-(void)removeAllRanges;
-(BOOL)intersectsLocation:(unsigned long long)arg1 ;
-(id)initWithRanges:(const VMURange*)arg1 count:(unsigned)arg2 ;
-(void)addRanges:(id)arg1 ;
-(VMURange)rangeForLocation:(unsigned long long)arg1 ;
-(void)insertRange:(VMURange)arg1 atIndex:(unsigned)arg2 ;
-(VMURange)subrangeNotExcludedBySelfForRange:(VMURange)arg1 ;
-(VMURange)largestRange;
-(unsigned long long)sumLengths;
-(void)sort;
-(unsigned)count;
-(id)description;
-(void)addRange:(VMURange)arg1 ;
-(VMURange)rangeAtIndex:(unsigned)arg1 ;
-(unsigned long long)indexForLocation:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)removeRangeAtIndex:(unsigned)arg1 ;
@end

