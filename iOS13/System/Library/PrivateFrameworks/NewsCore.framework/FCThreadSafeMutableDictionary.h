/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NFUnfairLock, NSMutableDictionary, NSArray, NSDictionary;

@interface FCThreadSafeMutableDictionary : NSObject {

	NFUnfairLock* _lock;
	NSMutableDictionary* _dictionary;

}

@property (readonly) unsigned long long count; 
@property (readonly) BOOL isEmpty; 
@property (nonatomic,copy,readonly) NSArray * allKeys; 
@property (nonatomic,copy,readonly) NSArray * allValues; 
@property (nonatomic,copy,readonly) NSDictionary * readOnlyDictionary; 
-(id)init;
-(unsigned long long)count;
-(NSArray *)allKeys;
-(BOOL)isEmpty;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(NSArray *)allValues;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)readWithAccessor:(/*^block*/id)arg1 ;
-(NSDictionary *)readOnlyDictionary;
-(void)readWriteWithAccessor:(/*^block*/id)arg1 ;
@end

