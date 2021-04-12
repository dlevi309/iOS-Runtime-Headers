/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)allKeys;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_dispatchIsolatedWriteAsync:(/*^block*/id)arg1 ;
-(void)_dispatchIsolatedWriteSync:(/*^block*/id)arg1 ;
-(void)_dispatchIsolatedRead:(/*^block*/id)arg1 ;
-(BOOL)tryRemoveObjectForKey:(id)arg1 ;
@end

