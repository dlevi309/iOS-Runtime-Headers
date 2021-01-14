/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@protocol OS_dispatch_queue;
@class NSCache, NSCountedSet, NSMutableDictionary, CKDispatchQueue, NSObject;

@interface CKDispatchCache : NSObject <IMSystemMonitorListener> {

	NSCache* _objectCache;
	NSCountedSet* _pendingKeys;
	NSMutableDictionary* _pendingGroups;
	CKDispatchQueue* _dispatchQueue;
	NSObject*<OS_dispatch_queue> _lockQueue;
	long long _dispatchPriority;

}

@property (nonatomic,retain) NSCache * objectCache;                               //@synthesize objectCache=_objectCache - In the implementation block
@property (nonatomic,retain) NSCountedSet * pendingKeys;                          //@synthesize pendingKeys=_pendingKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingGroups;                 //@synthesize pendingGroups=_pendingGroups - In the implementation block
@property (nonatomic,retain) CKDispatchQueue * dispatchQueue;                     //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lockQueue;              //@synthesize lockQueue=_lockQueue - In the implementation block
@property (assign,nonatomic) long long dispatchPriority;                          //@synthesize dispatchPriority=_dispatchPriority - In the implementation block
-(void)suspend;
-(id)init;
-(void)setLockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)lockQueue;
-(void)setDispatchQueue:(CKDispatchQueue *)arg1 ;
-(NSCache *)objectCache;
-(NSCountedSet *)pendingKeys;
-(void)endGeneratingForKey:(id)arg1 ;
-(id)initWithCacheLimit:(unsigned long long)arg1 dispatchPriority:(long long)arg2 ;
-(void)beginGeneratingForKey:(id)arg1 ;
-(void)setObjectCache:(NSCache *)arg1 ;
-(void)_endGeneratingForKeyUnlocked:(id)arg1 ;
-(void)_beginGeneratingForKeyUnlocked:(id)arg1 ;
-(BOOL)isGeneratingForKey:(id)arg1 ;
-(void)setCachedObject:(id)arg1 forKey:(id)arg2 ;
-(void)enqueueBlock:(/*^block*/id)arg1 withPriority:(long long)arg2 ;
-(BOOL)waitOnGenerationForKey:(id)arg1 ;
-(void)setPendingKeys:(NSCountedSet *)arg1 ;
-(long long)dispatchPriority;
-(void)setDispatchPriority:(long long)arg1 ;
-(CKDispatchQueue *)dispatchQueue;
-(void)enqueueGenerationBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 withPriority:(long long)arg3 forKey:(id)arg4 ;
-(void)systemApplicationDidSuspend;
-(void)emptyCache;
-(id)cachedObjectForKey:(id)arg1 ;
-(NSMutableDictionary *)pendingGroups;
-(void)setPendingGroups:(NSMutableDictionary *)arg1 ;
-(void)clearQueue;
-(void)resume;
-(void)dealloc;
@end

