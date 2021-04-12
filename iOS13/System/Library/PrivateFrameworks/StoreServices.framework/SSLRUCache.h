/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)_count;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(unsigned long long)maxSize;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(SSLogConfig *)logConfig;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(NSMutableDictionary *)backingDictionary;
-(SSDoubleLinkedList *)backingList;
-(void)_addObject:(id)arg1 forKey:(id)arg2 ;
-(void)_removeObjectForKey:(id)arg1 ;
-(id)allObjectsAndKeys;
-(void)setBackingDictionary:(NSMutableDictionary *)arg1 ;
-(void)setBackingList:(SSDoubleLinkedList *)arg1 ;
-(void)setLogConfig:(SSLogConfig *)arg1 ;
@end

