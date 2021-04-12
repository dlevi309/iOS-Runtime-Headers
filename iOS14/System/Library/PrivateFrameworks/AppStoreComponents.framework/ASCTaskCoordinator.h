/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


@class NSString, NSRecursiveLock, NSMutableDictionary, NSCache;

@interface ASCTaskCoordinator : NSObject {

	NSString* _name;
	NSRecursiveLock* _consistencyLock;
	NSMutableDictionary* _pendingResults;
	NSCache* _loadedResults;

}

@property (nonatomic,readonly) NSRecursiveLock * consistencyLock;                 //@synthesize consistencyLock=_consistencyLock - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingResults;              //@synthesize pendingResults=_pendingResults - In the implementation block
@property (nonatomic,readonly) NSCache * loadedResults;                           //@synthesize loadedResults=_loadedResults - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
+(id)log;
-(void)withLock:(/*^block*/id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSMutableDictionary *)pendingResults;
-(void)removeAllFinishedTasks;
-(id)taskForKey:(id)arg1 ;
-(id)taskForKey:(id)arg1 withCreatorBlock:(/*^block*/id)arg2 ;
-(BOOL)hasTaskForKey:(id)arg1 ;
-(NSRecursiveLock *)consistencyLock;
-(NSCache *)loadedResults;
-(void)taskForKey:(id)arg1 didCompleteWithResult:(id)arg2 ;
-(void)taskForKey:(id)arg1 didFailWithError:(id)arg2 ;
-(void)removeTaskForKey:(id)arg1 ;
@end

