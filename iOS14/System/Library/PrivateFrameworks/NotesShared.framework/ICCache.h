/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <CoreFoundation/NSCache.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSSet;

@interface ICCache : NSCache {

	NSObject*<OS_dispatch_source> _memoryWarningEventSource;
	NSMutableSet* _mutableKeys;
	NSObject*<OS_dispatch_queue> _mutableKeysAccessQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> memoryWarningEventSource;              //@synthesize memoryWarningEventSource=_memoryWarningEventSource - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableKeys;                                          //@synthesize mutableKeys=_mutableKeys - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mutableKeysAccessQueue;                 //@synthesize mutableKeysAccessQueue=_mutableKeysAccessQueue - In the implementation block
@property (nonatomic,readonly) NSSet * allKeys; 
+(void)purgeAllCaches;
+(id)cacheCollection;
-(NSMutableSet *)mutableKeys;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(id)init;
-(void)setMutableKeys:(NSMutableSet *)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)registerForMemoryWarnings;
-(void)unregisterForMemoryWarnings;
-(void)setMemoryWarningEventSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)memoryWarningEventSource;
-(void)receivedMemoryWarning;
-(NSObject*<OS_dispatch_queue>)mutableKeysAccessQueue;
-(void)removeObjectsWithKeyContainingString:(id)arg1 ;
-(void)setMutableKeysAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSSet *)allKeys;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

