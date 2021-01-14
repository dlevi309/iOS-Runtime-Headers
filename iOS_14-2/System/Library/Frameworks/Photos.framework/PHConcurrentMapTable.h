/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface PHConcurrentMapTable : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSMapTable* _protectedTable;

}
+(id)mapTable;
-(id)init;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)allKeys;
-(void)_dispatchIsolatedWriteAsync:(/*^block*/id)arg1 ;
-(void)_dispatchIsolatedWriteSync:(/*^block*/id)arg1 ;
-(void)_dispatchIsolatedRead:(/*^block*/id)arg1 ;
-(BOOL)tryRemoveObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

