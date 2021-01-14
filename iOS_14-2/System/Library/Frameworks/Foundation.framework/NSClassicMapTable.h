/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMapTable.h>

@interface NSClassicMapTable : NSMapTable {

	SCD_Struct_NS44* _keyCallBacks;
	SCD_Struct_NS45* _valueCallBacks;
	CFBasicHashRef _ht;

}
-(void)removeAllItems;
-(id)init;
-(unsigned long long)getKeys:(const void*)arg1 values:(const void*)arg2 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(BOOL)mapMember:(const void*)arg1 originalKey:(const void*)arg2 value:(const void*)arg3 ;
-(id)description;
-(id)copy;
-(id)objectForKey:(id)arg1 ;
-(id)allValues;
-(void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2 ;
-(id)allKeys;
-(void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

