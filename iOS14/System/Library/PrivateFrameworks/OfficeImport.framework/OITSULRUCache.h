/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OITSUNoCopyDictionary, NSMutableArray, NSArray;

@interface OITSULRUCache : NSObject {

	OITSUNoCopyDictionary* mData;
	NSMutableArray* mOrderedKeys;
	unsigned long long mMax;
	id mCallbackTarget;
	SEL mCallback;

}

@property (nonatomic,readonly) unsigned long long maxSize; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allValues; 
@property (nonatomic,readonly) NSArray * allKeys; 
-(void)p_removeOldestObject;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)maxSize;
-(void)removeAllObjects;
-(NSArray *)allValues;
-(NSArray *)allKeys;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)clearEvictionCallbackTarget;
@end

