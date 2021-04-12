/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSArray;

@interface JTThreadSafeDictionary : NSObject {

	NSMutableDictionary* _dict;
	NSObject*<OS_dispatch_queue> _concurrentQueue;

}

@property (nonatomic,retain) NSMutableDictionary * dict;                                //@synthesize dict=_dict - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> concurrentQueue;              //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (readonly) unsigned long long count; 
@property (readonly) NSArray * allKeys; 
@property (readonly) NSArray * allValues; 
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(NSArray *)allKeys;
-(void)removeAllObjects;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(NSArray *)allValues;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)setDictionary:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(NSMutableDictionary *)dict;
-(void)setDict:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(void)setConcurrentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

