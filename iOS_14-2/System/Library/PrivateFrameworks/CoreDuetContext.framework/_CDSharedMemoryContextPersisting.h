/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <libobjc.A.dylib/_CDContextPersisting.h>

@protocol OS_dispatch_queue;
@class _CDSharedMemoryKeyValueStore, NSObject, NSCountedSet, NSString;

@interface _CDSharedMemoryContextPersisting : NSObject <_CDContextPersisting> {

	_CDSharedMemoryKeyValueStore* _store;
	NSObject*<OS_dispatch_queue> _queue;
	NSCountedSet* _keyPathRegistrationCount;
	NSCountedSet* _legacyKeyPathRegistrationCount;
	NSString* _localDeviceID;

}

@property (nonatomic,retain) _CDSharedMemoryKeyValueStore * store;                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSCountedSet * keyPathRegistrationCount;                    //@synthesize keyPathRegistrationCount=_keyPathRegistrationCount - In the implementation block
@property (nonatomic,retain) NSCountedSet * legacyKeyPathRegistrationCount;              //@synthesize legacyKeyPathRegistrationCount=_legacyKeyPathRegistrationCount - In the implementation block
@property (nonatomic,retain) NSString * localDeviceID;                                   //@synthesize localDeviceID=_localDeviceID - In the implementation block
+(id)persistenceWithSharedMemoryKeyValueStore:(id)arg1 ;
+(id)sharedMemoryKeyFromKeyPath:(id)arg1 ;
+(id)sharedMemoryKeyFromRegistration:(id)arg1 ;
-(NSString *)localDeviceID;
-(id)allKeysForContextStore;
-(void)setStore:(_CDSharedMemoryKeyValueStore *)arg1 ;
-(_CDSharedMemoryKeyValueStore *)store;
-(void)saveRegistration:(id)arg1 ;
-(NSCountedSet *)legacyKeyPathRegistrationCount;
-(id)loadRegistrations;
-(void)deleteDataCreatedBefore:(id)arg1 ;
-(void)setLegacyKeyPathRegistrationCount:(NSCountedSet *)arg1 ;
-(void)deleteAllData;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)loadValues;
-(void)setLocalDeviceID:(NSString *)arg1 ;
-(NSCountedSet *)keyPathRegistrationCount;
-(void)deleteRegistration:(id)arg1 ;
-(id)initWithSharedMemoryKeyValueStore:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)saveValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)deleteKeyPaths:(id)arg1 ;
-(void)setKeyPathRegistrationCount:(NSCountedSet *)arg1 ;
@end

