/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <libobjc.A.dylib/_CDContextPersisting.h>

@protocol OS_dispatch_queue;
@class _CDSharedMemoryKeyValueStore, NSObject, NSCountedSet, NSString;

@interface _CDSharedMemoryContextPersisting : NSObject <_CDContextPersisting> {

	_CDSharedMemoryKeyValueStore* _store;
	NSObject*<OS_dispatch_queue> _queue;
	NSCountedSet* _keyPathRegistrationCount;
	NSString* _localDeviceID;

}

@property (nonatomic,retain) _CDSharedMemoryKeyValueStore * store;                 //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSCountedSet * keyPathRegistrationCount;              //@synthesize keyPathRegistrationCount=_keyPathRegistrationCount - In the implementation block
@property (nonatomic,retain) NSString * localDeviceID;                             //@synthesize localDeviceID=_localDeviceID - In the implementation block
+(id)sharedMemoryKeyFromKeyPath:(id)arg1 ;
+(id)sharedMemoryKeyFromRegistration:(id)arg1 ;
+(id)persistenceWithSharedMemoryKeyValueStore:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(_CDSharedMemoryKeyValueStore *)store;
-(void)setStore:(_CDSharedMemoryKeyValueStore *)arg1 ;
-(id)initWithSharedMemoryKeyValueStore:(id)arg1 ;
-(void)deleteKeyPaths:(id)arg1 ;
-(id)allKeysForContextStore;
-(void)saveValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)saveRegistration:(id)arg1 ;
-(void)deleteRegistration:(id)arg1 ;
-(id)loadValues;
-(id)loadRegistrations;
-(void)deleteAllData;
-(void)deleteDataCreatedBefore:(id)arg1 ;
-(NSCountedSet *)keyPathRegistrationCount;
-(void)setKeyPathRegistrationCount:(NSCountedSet *)arg1 ;
-(NSString *)localDeviceID;
-(void)setLocalDeviceID:(NSString *)arg1 ;
@end

