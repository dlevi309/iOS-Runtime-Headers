/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMapTable.h>

@interface NSConcreteMapTable : NSMapTable {

	NSSlice* keys;
	NSSlice* values;
	unsigned long long count;
	unsigned long long capacity;
	unsigned long long keyOptions;
	unsigned long long valueOptions;
	unsigned long long mutations;
	os_unfair_lock_s growLock;
	BOOL shouldRehash;

}
+(BOOL)supportsSecureCoding;
-(void)removeAllItems;
-(id)dump;
-(void)grow;
-(unsigned long long)realCount;
-(void)rehash;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)objectEnumerator;
-(unsigned long long)getKeys:(const void*)arg1 values:(const void*)arg2 ;
-(BOOL)containsKeys:(const void*)arg1 values:(const void*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)__capacity;
-(void)encodeWithCoder:(id)arg1 ;
-(id)keyPointerFunctions;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(void)raiseCountUnderflowException;
-(id)valuePointerFunctions;
-(void)assign:(unsigned long long)arg1 key:(const void*)arg2 value:(const void*)arg3 isNew:(BOOL)arg4 ;
-(BOOL)mapMember:(const void*)arg1 originalKey:(const void*)arg2 value:(const void*)arg3 ;
-(unsigned long long)rehashAround:(unsigned long long)arg1 ;
-(id)description;
-(id)keyEnumerator;
-(id)copy;
-(id)objectForKey:(id)arg1 ;
-(void)setItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(id)allValues;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)checkCount:(const char*)arg1 ;
-(void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(void)_setBackingStore;
-(void)replaceItem:(const void*)arg1 forExistingKey:(const void*)arg2 ;
-(id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3 ;
-(id)allKeys;
-(void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3 ;
@end

