/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSHashTable.h>

@interface NSClassicHashTable : NSHashTable {

	SCD_Struct_NS26* _callBacks;
	CFBasicHashRef _ht;

}
-(void)removeItem:(const void*)arg1 ;
-(void)removeAllItems;
-(void)insertItem:(const void*)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)getKeys:(const void*)arg1 count:(unsigned long long*)arg2 ;
-(id)allObjects;
-(void*)getItem:(const void*)arg1 ;
-(id)description;
-(void)addObject:(id)arg1 ;
-(id)copy;
-(unsigned long long)hash;
-(void)insertKnownAbsentItem:(const void*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

