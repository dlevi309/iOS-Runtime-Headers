/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSSet.h>

@interface __NSFrozenSetM : NSSet {

	SCD_Struct_NS21* storage;
	A{__cow_state_t}* cow;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)getObjects:(id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS19*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(id)objectEnumerator;
-(id)mutableCopy;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)member:(id)arg1 ;
-(double)clumpingFactor;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)clumpingInterestingThreshold;
-(void)dealloc;
@end

