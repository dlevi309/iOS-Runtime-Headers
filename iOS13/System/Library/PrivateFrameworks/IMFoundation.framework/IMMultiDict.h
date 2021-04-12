/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@class NSMutableDictionary, NSArray;

@interface IMMultiDict : NSObject {

	NSMutableDictionary* _dictionary;
	unsigned long long _count;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                    //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) NSArray * allKeys; 
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(NSArray *)allKeys;
-(void)removeAllObjects;
-(unsigned long long)countForKey:(id)arg1 ;
-(NSMutableDictionary *)dictionary;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
-(void)pushObject:(id)arg1 forKey:(id)arg2 ;
-(id)peekObjectForKey:(id)arg1 ;
-(id)popObjectForKey:(id)arg1 ;
-(void)enqueueObject:(id)arg1 forKey:(id)arg2 ;
-(id)headObjectForKey:(id)arg1 ;
-(id)dequeueObjectForKey:(id)arg1 ;
-(id)objectsForKey:(id)arg1 ;
-(void)removeObjectsForKey:(id)arg1 ;
@end

