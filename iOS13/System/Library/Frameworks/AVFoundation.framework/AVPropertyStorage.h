/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSArray;

@interface AVPropertyStorage : NSObject {

	NSObject*<OS_dispatch_queue> _storageAccessWorkQueue;
	NSMutableDictionary* _propertyStorage;
	NSArray* _keysRequiringExplicitPerThreadSignal;
	long long _cachePolicy;

}
-(id)init;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCachePolicy:(long long)arg1 keysRequiringExplicitPerThreadSignal:(id)arg2 ;
-(BOOL)shouldUsePropertyStorageCacheForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 defaultObjectBlock:(/*^block*/id)arg2 ;
-(void)willAccessKVOForKey:(id)arg1 ;
-(void)didAccessKVOForKey:(id)arg1 ;
-(void)willAccessKVOForAllKeys;
-(void)didAccessKVOForAllKeys;
@end

