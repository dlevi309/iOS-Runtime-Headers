/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface NSConstantDictionary : NSDictionary <NSFastEnumeration> {

	unsigned long long _options;
	unsigned long long _count;
	const id* _keys;
	const id* _objects;

}
+(id)new;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)__apply:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(oneway void)release;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(BOOL)_tryRetain;
-(id)objectEnumerator;
-(id)mutableCopy;
-(id)retain;
-(BOOL)_isDeallocating;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)autorelease;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyEnumerator;
-(id)copy;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)retainCount;
-(id)allValues;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

