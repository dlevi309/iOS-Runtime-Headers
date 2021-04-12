/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSArray;

@interface JFXThreadSafeDictionary : NSObject {

	NSMutableDictionary* _dict;
	NSObject*<OS_dispatch_queue> _concurrentQueue;

}

@property (nonatomic,retain) NSMutableDictionary * dict;                                //@synthesize dict=_dict - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> concurrentQueue;              //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (readonly) unsigned long long count; 
@property (readonly) NSArray * allKeys; 
@property (readonly) NSArray * allValues; 
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(void)setDict:(NSMutableDictionary *)arg1 ;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(id)init;
-(void)setDictionary:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)dict;
-(id)valueForKey:(id)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setConcurrentQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(NSArray *)allValues;
-(NSArray *)allKeys;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

