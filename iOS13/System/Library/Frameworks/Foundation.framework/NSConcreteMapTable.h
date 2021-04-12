/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copy;
-(unsigned long long)count;
-(id)objectEnumerator;
-(id)allKeys;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)allValues;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllItems;
-(void)raiseCountUnderflowException;
-(unsigned long long)rehashAround:(unsigned long long)arg1 ;
-(void)rehash;
-(id)initWithKeyOptions:(unsigned long long)arg1 valueOptions:(unsigned long long)arg2 capacity:(unsigned long long)arg3 ;
-(id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned long long)arg3 ;
-(unsigned long long)__capacity;
-(id)keyPointerFunctions;
-(id)valuePointerFunctions;
-(void)setItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2 ;
-(void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(void)replaceItem:(const void*)arg1 forExistingKey:(const void*)arg2 ;
-(BOOL)mapMember:(const void*)arg1 originalKey:(const void*)arg2 value:(const void*)arg3 ;
-(unsigned long long)getKeys:(const void*)arg1 values:(const void*)arg2 ;
-(unsigned long long)realCount;
-(void)_setBackingStore;
-(void)assign:(unsigned long long)arg1 key:(const void*)arg2 value:(const void*)arg3 isNew:(BOOL)arg4 ;
-(void)grow;
-(void)checkCount:(const char*)arg1 ;
-(BOOL)containsKeys:(const void*)arg1 values:(const void*)arg2 count:(unsigned long long)arg3 ;
-(id)dump;
@end

