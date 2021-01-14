/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, SSDoubleLinkedList, SSLogConfig;

@interface SSLRUCache : NSObject {

	unsigned long long _maxSize;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _backingDictionary;
	SSDoubleLinkedList* _backingList;
	SSLogConfig* _logConfig;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * backingDictionary;               //@synthesize backingDictionary=_backingDictionary - In the implementation block
@property (nonatomic,retain) SSDoubleLinkedList * backingList;                      //@synthesize backingList=_backingList - In the implementation block
@property (nonatomic,retain) SSLogConfig * logConfig;                               //@synthesize logConfig=_logConfig - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long maxSize;                          //@synthesize maxSize=_maxSize - In the implementation block
-(id)init;
-(void)setLogConfig:(SSLogConfig *)arg1 ;
-(SSLogConfig *)logConfig;
-(id)allObjectsAndKeys;
-(unsigned long long)_count;
-(void)_addObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(NSMutableDictionary *)backingDictionary;
-(id)description;
-(void)setBackingDictionary:(NSMutableDictionary *)arg1 ;
-(void)_removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)maxSize;
-(void)removeAllObjects;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setBackingList:(SSDoubleLinkedList *)arg1 ;
-(SSDoubleLinkedList *)backingList;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

