/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface GKThreadsafeDictionary : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
-(void)dealloc;
-(id)description;
-(id)allKeys;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allObjects;
-(NSMutableDictionary *)dictionary;
-(id)initWithName:(id)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(void)writeToDictionary:(/*^block*/id)arg1 ;
-(void)readFromDictionary:(/*^block*/id)arg1 ;
-(id)objectForKeyWillReplace:(id)arg1 objectProducerBlock:(/*^block*/id)arg2 ;
-(id)objectForKey:(id)arg1 objectProducerBlock:(/*^block*/id)arg2 ;
-(id)dictionaryCopy;
@end

