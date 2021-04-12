/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSSet *)allKeys;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(void)setMutableKeys:(NSMutableSet *)arg1 ;
-(NSMutableSet *)mutableKeys;
-(void)registerForMemoryWarnings;
-(void)unregisterForMemoryWarnings;
-(void)setMemoryWarningEventSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)memoryWarningEventSource;
-(void)receivedMemoryWarning;
-(NSObject*<OS_dispatch_queue>)mutableKeysAccessQueue;
-(void)removeObjectsWithKeyContainingString:(id)arg1 ;
-(void)setMutableKeysAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

