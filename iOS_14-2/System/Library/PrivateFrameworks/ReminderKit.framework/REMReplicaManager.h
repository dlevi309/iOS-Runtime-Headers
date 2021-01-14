/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


#import <ReminderKit/ReminderKit-Structs.h>
@class NSMutableOrderedSet, NSMutableDictionary;

@interface REMReplicaManager : NSObject {

	BOOL _isPersistable;
	BOOL _exceededMaxSerializedSize;
	os_unfair_lock_s _ivarLock;
	NSMutableOrderedSet* _replicaUUIDs;
	NSMutableDictionary* _replicaEntries;
	unsigned long long _currentVersion;
	unsigned long long _maxLastSavedVersion;

}

@property (assign,nonatomic) os_unfair_lock_s ivarLock;                           //@synthesize ivarLock=_ivarLock - In the implementation block
@property (assign,nonatomic) BOOL isPersistable;                                  //@synthesize isPersistable=_isPersistable - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * replicaUUIDs;                  //@synthesize replicaUUIDs=_replicaUUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * replicaEntries;                //@synthesize replicaEntries=_replicaEntries - In the implementation block
@property (assign,nonatomic) unsigned long long currentVersion;                   //@synthesize currentVersion=_currentVersion - In the implementation block
@property (assign,nonatomic) unsigned long long maxLastSavedVersion;              //@synthesize maxLastSavedVersion=_maxLastSavedVersion - In the implementation block
@property (assign,nonatomic) BOOL exceededMaxSerializedSize;                      //@synthesize exceededMaxSerializedSize=_exceededMaxSerializedSize - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)unsavedReplicaManagersForAccountIDs:(id)arg1 ;
+(BOOL)disablesInMemoryOnlyCheck;
+(BOOL)shouldUseNewInMemoryOnlyReplicaManager;
+(id)replicaManagerWithSerializedData:(id)arg1 error:(id*)arg2 ;
+(id)replicaManagerForAccountID:(id)arg1 store:(id)arg2 ;
+(void)setDisablesInMemoryOnlyCheck:(BOOL)arg1 ;
+(id)replicaManagerIfLoadedForAccountID:(id)arg1 ;
+(void)setReplicaManager:(id)arg1 forAccountID:(id)arg2 ;
-(id)init;
-(void)setCurrentVersion:(unsigned long long)arg1 ;
-(void)commonInit;
-(os_unfair_lock_s)ivarLock;
-(unsigned long long)currentVersion;
-(void)setIvarLock:(os_unfair_lock_s)arg1 ;
-(id)description;
-(id)persistenceDescription;
-(void)setIsPersistable:(BOOL)arg1 ;
-(NSMutableOrderedSet *)replicaUUIDs;
-(NSMutableDictionary *)replicaEntries;
-(id)l_checkoutReplicaUUIDForClient:(id)arg1 ;
-(void)performLocked:(/*^block*/id)arg1 ;
-(BOOL)l_updateVersionOfEntry:(id)arg1 forClient:(id)arg2 ;
-(id)l_replicaUUIDsDescription;
-(void)modifyReplicaEntryForClient:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)l_replicaEntriesDescriptionForPersistence:(BOOL)arg1 ;
-(unsigned long long)maxLastSavedVersion;
-(id)initWithArchive:(const ReplicaManager*)arg1 error:(id*)arg2 ;
-(void)setMaxLastSavedVersion:(unsigned long long)arg1 ;
-(void)encodeIntoArchive:(ReplicaManager*)arg1 ;
-(BOOL)exceededMaxSerializedSize;
-(id)l_serializedDataWithError:(id*)arg1 ;
-(void)setExceededMaxSerializedSize:(BOOL)arg1 ;
-(void)updateVersionForClient:(id)arg1 ;
-(id)checkoutReplicaUUIDForClient:(id)arg1 ;
-(void)returnReplicaForClient:(id)arg1 ;
-(id)serializedDataCappedAtMaxSize:(BOOL)arg1 error:(id*)arg2 ;
-(void)didSaveVersion:(unsigned long long)arg1 ;
-(unsigned long long)replicaEntryCount;
-(id)availabilityOfFirstReplicaForCRDTID:(id)arg1 ;
-(id)clockOfFirstReplicaForCRDTID:(id)arg1 ;
-(BOOL)hasEqualPersistedEntriesAs:(id)arg1 ;
-(void)setReplicaUUIDs:(NSMutableOrderedSet *)arg1 ;
-(void)addRandomReplicaEntriesWithCount:(long long)arg1 ;
-(void)setReplicaEntries:(NSMutableDictionary *)arg1 ;
-(BOOL)isPersistable;
-(BOOL)hasUnsavedChanges;
@end

