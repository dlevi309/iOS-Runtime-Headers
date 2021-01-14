/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class NSString, NSMutableDictionary, _EFLRUCacheNode;

@interface EFLRUCache : NSObject <EFLoggable, EFPubliclyDescribable> {

	os_unfair_lock_s _lock;
	unsigned long long _capacity;
	NSMutableDictionary* _nodesByKey;
	unsigned long long _size;
	_EFLRUCacheNode* _firstNode;
	_EFLRUCacheNode* _lastNode;

}

@property (nonatomic,readonly) unsigned long long capacity;                       //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * nodesByKey;                  //@synthesize nodesByKey=_nodesByKey - In the implementation block
@property (assign,nonatomic) unsigned long long size;                             //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) _EFLRUCacheNode * firstNode;                         //@synthesize firstNode=_firstNode - In the implementation block
@property (nonatomic,retain) _EFLRUCacheNode * lastNode;                          //@synthesize lastNode=_lastNode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(id)log;
-(NSString *)ef_publicDescription;
-(_EFLRUCacheNode *)lastNode;
-(unsigned long long)capacity;
-(unsigned long long)size;
-(_EFLRUCacheNode *)firstNode;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
-(void)setSize:(unsigned long long)arg1 ;
-(NSString *)description;
-(NSMutableDictionary *)nodesByKey;
-(void)_pruneLastObject;
-(void)setLastNode:(_EFLRUCacheNode *)arg1 ;
-(void)_pushToTop:(id)arg1 ;
-(void)setFirstNode:(_EFLRUCacheNode *)arg1 ;
-(unsigned long long)test_size;
-(id)test_firstNode;
-(id)test_lastNode;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)initWithCapacity:(unsigned long long)arg1 ;
@end

