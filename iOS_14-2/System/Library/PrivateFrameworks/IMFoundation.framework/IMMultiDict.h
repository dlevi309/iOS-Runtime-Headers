/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@class NSMutableDictionary, NSArray;

@interface IMMultiDict : NSObject {

	unsigned long long _count;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (assign,nonatomic) unsigned long long count;                      //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) NSArray * allKeys; 
-(unsigned long long)countForKey:(id)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(void)removeObjectsForKey:(id)arg1 ;
-(id)init;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(id)objectsForKey:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(NSMutableDictionary *)dictionary;
-(void)removeAllObjects;
-(id)peekObjectForKey:(id)arg1 ;
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
-(id)popObjectForKey:(id)arg1 ;
-(void)enqueueObject:(id)arg1 forKey:(id)arg2 ;
-(id)headObjectForKey:(id)arg1 ;
-(void)pushObject:(id)arg1 forKey:(id)arg2 ;
-(id)dequeueObjectForKey:(id)arg1 ;
-(NSArray *)allKeys;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
@end

