/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(id)init;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(NSArray *)allValues;
-(void)readWithAccessor:(/*^block*/id)arg1 ;
-(void)readWriteWithAccessor:(/*^block*/id)arg1 ;
-(BOOL)isEmpty;
-(NSDictionary *)readOnlyDictionary;
-(NSArray *)allKeys;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

