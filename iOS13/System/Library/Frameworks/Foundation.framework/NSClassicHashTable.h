/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSHashTable.h>

@interface NSClassicHashTable : NSHashTable {

	SCD_Struct_NS23* _callBacks;
	CFBasicHashRef _ht;

}
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copy;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(id)allObjects;
-(void*)getItem:(const void*)arg1 ;
-(void)removeItem:(const void*)arg1 ;
-(void)removeAllItems;
-(void)insertKnownAbsentItem:(const void*)arg1 ;
-(void)getKeys:(const void*)arg1 count:(unsigned long long*)arg2 ;
-(void)insertItem:(const void*)arg1 ;
@end

