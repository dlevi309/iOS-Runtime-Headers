/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/REMChangeObject.h>

@class REMChangeTransaction, NSArray, _REMNSPersistentHistoryChangeStorage, NSPersistentHistoryChange;

@interface REMNSPersistentHistoryChange : REMChangeObject {

	BOOL _isCoalesced;
	REMChangeTransaction* _internal_ChangeTransaction;
	NSArray* _coalescedChanges;
	_REMNSPersistentHistoryChangeStorage* _storage;
	NSPersistentHistoryChange* _persistentHistoryChange;

}

@property (retain) _REMNSPersistentHistoryChangeStorage * storage;                                  //@synthesize storage=_storage - In the implementation block
@property (__weak,readonly) NSPersistentHistoryChange * persistentHistoryChange;                    //@synthesize persistentHistoryChange=_persistentHistoryChange - In the implementation block
@property (assign,nonatomic,__weak) REMChangeTransaction * internal_ChangeTransaction;              //@synthesize internal_ChangeTransaction=_internal_ChangeTransaction - In the implementation block
@property (assign,nonatomic) BOOL isCoalesced;                                                      //@synthesize isCoalesced=_isCoalesced - In the implementation block
@property (nonatomic,retain) NSArray * coalescedChanges;                                            //@synthesize coalescedChanges=_coalescedChanges - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortStringForChangeType:(long long)arg1 ;
+(id)stringForChangeType:(long long)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(void)setStorage:(_REMNSPersistentHistoryChangeStorage *)arg1 ;
-(long long)changeType;
-(BOOL)isCoalesced;
-(id)transaction;
-(_REMNSPersistentHistoryChangeStorage *)storage;
-(NSArray *)coalescedChanges;
-(NSPersistentHistoryChange *)persistentHistoryChange;
-(REMChangeTransaction *)internal_ChangeTransaction;
-(void)setInternal_ChangeTransaction:(REMChangeTransaction *)arg1 ;
-(id)initWithPersistentHistoryChange:(id)arg1 ;
-(id)changedManagedObjectID;
-(void)resolveWithObjectID:(id)arg1 ;
-(id)copyForCoalescing;
-(void)setIsCoalesced:(BOOL)arg1 ;
-(void)setCoalescedChanges:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)changedObjectID;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(long long)changeID;
-(id)updatedProperties;
-(id)tombstone;
-(BOOL)isEqual:(id)arg1 ;
@end

