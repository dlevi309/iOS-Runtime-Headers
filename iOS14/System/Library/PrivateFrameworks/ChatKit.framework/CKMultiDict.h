/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface CKMultiDict : NSObject {

	NSObject*<OS_dispatch_queue> _lockQueue;
	unsigned long long _count;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lockQueue;              //@synthesize lockQueue=_lockQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dictionary;                    //@synthesize dictionary=_dictionary - In the implementation block
-(void)removeObjectsForKey:(id)arg1 ;
-(id)init;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(void)setLockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)lockQueue;
-(id)objectsForKey:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(NSMutableDictionary *)dictionary;
-(void)removeAllObjects;
-(id)peekObjectForKey:(id)arg1 ;
-(id)popObjectForKey:(id)arg1 ;
-(void)enqueueObject:(id)arg1 forKey:(id)arg2 ;
-(id)headObjectForKey:(id)arg1 ;
-(void)pushObject:(id)arg1 forKey:(id)arg2 ;
-(id)dequeueObjectForKey:(id)arg1 ;
-(id)allKeys;
@end

