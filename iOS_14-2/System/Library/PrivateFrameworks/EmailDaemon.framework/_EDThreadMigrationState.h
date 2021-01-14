/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class NSCountedSet;

@interface _EDThreadMigrationState : NSObject {

	NSCountedSet* _objectIDsToMigrate;
	NSCountedSet* _recentlyMigratedObjectIDs;
	NSCountedSet* _recentlyDeletedObjectIDs;
	unsigned long long _state;
	unsigned long long _generation;

}

@property (assign,nonatomic) unsigned long long state;                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long generation;                   //@synthesize generation=_generation - In the implementation block
@property (nonatomic,readonly) unsigned long long unmigratedCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) BOOL isFullyMigrated; 
-(unsigned long long)generation;
-(void)fail;
-(id)init;
-(id)nextBatch;
-(void)setState:(unsigned long long)arg1 ;
-(void)reset;
-(unsigned long long)state;
-(BOOL)isEmpty;
-(void)cancel;
-(unsigned long long)unmigratedCount;
-(BOOL)isFullyMigrated;
-(BOOL)verifyIsMigratingGeneration:(unsigned long long)arg1 andIsInState:(unsigned long long)arg2 logIdentifier:(id)arg3 logAction:(id)arg4 logCount:(unsigned long long)arg5 ;
-(BOOL)verifyIsMigratingGeneration:(unsigned long long)arg1 andIsInState:(unsigned long long)arg2 orState:(unsigned long long)arg3 logIdentifier:(id)arg4 logAction:(id)arg5 logCount:(unsigned long long)arg6 ;
-(void)removeDeletedObjectIDs:(id)arg1 ;
-(void)removeMigratedObjectIDs:(id)arg1 ;
-(void)addObjectIDs:(id)arg1 ;
-(BOOL)isRecentlyMigrated:(id)arg1 ;
-(void)removeObjectIDs:(id)arg1 ;
-(void)addDeletedObjectIDs:(id)arg1 ;
-(void)_removeAllObjectIDs;
-(BOOL)_verifyIsMigratingGeneration:(unsigned long long)arg1 stateVerifier:(/*^block*/id)arg2 logIdentifier:(id)arg3 logAction:(id)arg4 logCount:(unsigned long long)arg5 ;
@end

