/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@class TSUNoCopyDictionary, NSMutableArray;

@interface TSULRUCache : NSObject {

	TSUNoCopyDictionary* mData;
	NSMutableArray* mOrderedKeys;
	unsigned long long mMax;
	id mCallbackTarget;
	SEL mCallback;

}

@property (nonatomic,readonly) unsigned long long maxSize; 
-(void)p_removeOldestObject;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)maxSize;
-(void)removeAllObjects;
-(id)allValues;
-(id)allKeys;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)clearEvictionCallbackTarget;
@end

