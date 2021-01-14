/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, AMSDoubleLinkedList;

@interface AMSLRUCache : NSObject {

	unsigned long long _maxSize;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _backingDictionary;
	AMSDoubleLinkedList* _backingList;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * backingDictionary;               //@synthesize backingDictionary=_backingDictionary - In the implementation block
@property (nonatomic,retain) AMSDoubleLinkedList * backingList;                     //@synthesize backingList=_backingList - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long maxSize;                          //@synthesize maxSize=_maxSize - In the implementation block
-(id)init;
-(id)allObjectsAndKeys;
-(unsigned long long)_count;
-(void)_addObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(NSMutableDictionary *)backingDictionary;
-(id)description;
-(id)objectForKey:(id)arg1 withCreationBlock:(/*^block*/id)arg2 ;
-(void)setBackingDictionary:(NSMutableDictionary *)arg1 ;
-(void)_removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)maxSize;
-(void)removeAllObjects;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setBackingList:(AMSDoubleLinkedList *)arg1 ;
-(AMSDoubleLinkedList *)backingList;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

