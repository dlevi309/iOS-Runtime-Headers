/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface GKThreadsafeDictionary : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)allObjects;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(void)writeToDictionary:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)dictionary;
-(id)dictionaryCopy;
-(void)readFromDictionary:(/*^block*/id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 objectProducerBlock:(/*^block*/id)arg2 ;
-(void)removeAllObjects;
-(id)allKeys;
-(id)objectForKeyWillReplace:(id)arg1 objectProducerBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

