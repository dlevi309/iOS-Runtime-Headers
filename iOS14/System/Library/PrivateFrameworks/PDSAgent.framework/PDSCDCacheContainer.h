/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
*/

#import <PDSAgent/PDSCDCache.h>
#import <PDSAgent/PDSKVStore.h>

@class NSPersistentContainer, NSURL, NSString;

@interface PDSCDCacheContainer : NSObject <PDSCDCache, PDSKVStore> {

	NSPersistentContainer* _container;
	NSURL* _containingPath;

}

@property (assign,nonatomic,__weak) NSPersistentContainer * container;              //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NSURL * containingPath;                                //@synthesize containingPath=_containingPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)containingPath;
-(id)numberForKey:(id)arg1 ;
-(BOOL)updateEntryState:(unsigned char)arg1 forUser:(id)arg2 clientID:(id)arg3 withError:(id*)arg4 ;
-(id)dataForKey:(id)arg1 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_storeEntry:(id)arg1 transitionBlock:(/*^block*/id)arg2 context:(id)arg3 withError:(id*)arg4 ;
-(void)setContainingPath:(NSURL *)arg1 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(BOOL)updateAllEntriesWithState:(unsigned char)arg1 toState:(unsigned char)arg2 withError:(id*)arg3 ;
-(void)_KVEntryForKey:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)deleteEntry:(id)arg1 withError:(id*)arg2 ;
-(BOOL)_updateEntryState:(unsigned char)arg1 forUser:(id)arg2 clientID:(id)arg3 withError:(id*)arg4 ;
-(BOOL)_deleteEntry:(id)arg1 context:(id)arg2 withError:(id*)arg3 ;
-(id)loadAllActiveUsers;
-(id)loadAllUsersForClientID:(id)arg1 ;
-(BOOL)_updateAllEntriesWithState:(unsigned char)arg1 toState:(unsigned char)arg2 withError:(id*)arg3 ;
-(BOOL)storeEntry:(id)arg1 withError:(id*)arg2 ;
-(id)loadAllEntries;
-(void)setNumber:(id)arg1 forKey:(id)arg2 ;
-(void)setContainer:(NSPersistentContainer *)arg1 ;
-(id)loadAllUsers;
-(id)_cdUsersMatchingUserID:(id)arg1 userType:(short)arg2 inContext:(id)arg3 ;
-(id)initWithContainingPath:(id)arg1 ;
-(BOOL)storeEntries:(id)arg1 transitionBlock:(/*^block*/id)arg2 deleteEntries:(id)arg3 withError:(id*)arg4 ;
-(id)loadAllEntriesUser:(id)arg1 withClientID:(id)arg2 ;
-(id)_loadUsersIncludingOnlyActive:(BOOL)arg1 ;
-(id)_cdRegistrationsMatchingUser:(id)arg1 withClientID:(id)arg2 inContext:(id)arg3 ;
-(id)_cdRegistrationsMatchingEntry:(id)arg1 inContext:(id)arg2 ;
-(id)loadAllEntriesForClientID:(id)arg1 ;
-(id)_usersForClientID:(id)arg1 activeOnly:(BOOL)arg2 ;
-(id)loadAllEntriesUser:(id)arg1 ;
-(id)allStoredValues;
-(id)loadPendingEntries;
-(id)loadAllActiveUsersForClientID:(id)arg1 ;
-(BOOL)updateEntryState:(unsigned char)arg1 forUser:(id)arg2 withError:(id*)arg3 ;
-(id)_entriesFromRegistrations:(id)arg1 inContext:(id)arg2 ;
-(BOOL)hasPendingEntries;
-(BOOL)hasActiveEntries;
-(NSPersistentContainer *)container;
-(BOOL)storeEntry:(id)arg1 transitionBlock:(/*^block*/id)arg2 withError:(id*)arg3 ;
-(id)stringForKey:(id)arg1 ;
-(void)_syncBlockWithContext:(/*^block*/id)arg1 ;
-(id)loadWithError:(id*)arg1 ;
@end

