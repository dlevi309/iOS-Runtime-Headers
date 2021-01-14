/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSKnownKeysDictionary.h>

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {

	int _cd_rc;
	int _count;
	NSKnownKeysMappingStrategy* _keySearch;
	id _values[0];

}
+(id)alloc;
+(BOOL)supportsSecureCoding;
+(id)initForKeys:(id)arg1 ;
+(id)initWithObjects:(id*)arg1 forKeys:(id*)arg2 count:(unsigned long long)arg3 ;
+(Class)classForKeyedUnarchiver;
+(id)initWithDictionary:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)initWithSearchStrategy:(id)arg1 ;
+(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)initWithCoder:(id)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
-(const id*)knownKeyValuesPointer;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(oneway void)release;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)_tryRetain;
-(id)objectEnumerator;
-(const id*)values;
-(id)retain;
-(BOOL)_isDeallocating;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(void)_setValues:(id*)arg1 retain:(BOOL)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setValues:(id*)arg1 ;
-(id)keyEnumerator;
-(Class)classForCoder;
-(void)getObjects:(id*)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)retainCount;
-(void)removeAllObjects;
-(unsigned long long)_valueCountByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)allValues;
-(void)setValue:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)mapping;
-(void)getKeys:(id*)arg1 ;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

