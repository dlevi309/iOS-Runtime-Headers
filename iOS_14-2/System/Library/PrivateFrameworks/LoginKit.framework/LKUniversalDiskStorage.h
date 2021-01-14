/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/


@protocol OS_dispatch_queue;
#import <LoginKit/LoginKit-Structs.h>
@class NSObject, NSDictionary;

@interface LKUniversalDiskStorage : NSObject {

	BOOL _storageDictionaryModified;
	NSObject*<OS_dispatch_queue> _storageQueue;
	NSDictionary* _storageDictionary;
	opaque_pthread_rwlock_t _lock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> storageQueue;                                      //@synthesize storageQueue=_storageQueue - In the implementation block
@property (assign,nonatomic) opaque_pthread_rwlock_t lock;                                                   //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSDictionary * storageDictionary;                                               //@synthesize storageDictionary=_storageDictionary - In the implementation block
@property (assign,getter=isStorageDictionaryModified,nonatomic) BOOL storageDictionaryModified;              //@synthesize storageDictionaryModified=_storageDictionaryModified - In the implementation block
+(id)sharedStorage;
+(id)localDirectoryPath;
+(id)localDictionaryPath;
-(id)init;
-(opaque_pthread_rwlock_t)lock;
-(void)setLock:(opaque_pthread_rwlock_t)arg1 ;
-(NSObject*<OS_dispatch_queue>)storageQueue;
-(void)setStorageQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_refreshStorageCacheIfNeeded;
-(NSDictionary *)storageDictionary;
-(void)setStorageDictionary:(NSDictionary *)arg1 ;
-(void)setStorageDictionaryModified:(BOOL)arg1 ;
-(BOOL)isStorageDictionaryModified;
-(void)saveKeyValuePairs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)retrieveValueForKey:(id)arg1 ;
-(void)clearKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)clearAllKeyValueStorage:(/*^block*/id)arg1 ;
@end

