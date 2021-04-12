/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface __NSCFSet : NSMutableSet {

	unsigned char _cfinfo[4];
	unsigned _rc;
	unsigned _bits[4];
	void* _callbacks;
	id* _values;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(oneway void)release;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS19*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)_tryRetain;
-(id)objectEnumerator;
-(id)retain;
-(BOOL)_isDeallocating;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)member:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(Class)classForCoder;
-(void)getObjects:(id*)arg1 ;
-(unsigned long long)retainCount;
-(void)removeAllObjects;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)_trueCount;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

