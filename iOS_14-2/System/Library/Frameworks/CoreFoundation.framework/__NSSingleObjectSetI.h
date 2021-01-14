/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSSet.h>

@interface __NSSingleObjectSetI : NSSet {

	id element;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)getObjects:(id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(id)objectEnumerator;
-(unsigned long long)count;
-(BOOL)containsObject:(id)arg1 ;
-(id)member:(id)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

