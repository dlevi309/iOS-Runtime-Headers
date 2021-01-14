/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class TILRUDictionaryNode;

@interface TILRUDictionary : NSObject {

	CFDictionaryRef _dictionary;
	unsigned long long _maxCount;
	TILRUDictionaryNode* _head;
	TILRUDictionaryNode* _tail;

}
+(id)dictionaryWithMaximumCapacity:(unsigned long long)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)_addNodeToFront:(id)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(void)_moveNodeToFront:(id)arg1 ;
-(void)_removeNode:(id)arg1 ;
-(id)initWithMaximumCapacity:(unsigned long long)arg1 ;
-(id)allValuesInLRUOrder;
-(id)description;
-(unsigned long long)linkedListCount;
-(id)objectForKeyWithoutAffectingLRU:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)allKeysInLRUOrder;
-(id)allKeys;
-(void)_removeNodeFromLinkedList:(id)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

