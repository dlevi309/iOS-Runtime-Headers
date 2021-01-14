/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/


@protocol OS_dispatch_group;
@class NSArray, NoteContext, ACAccountStore, NSObject, NSLock;

@interface AccountUtilities : NSObject {

	NSArray* _accountIDsEnabledForNotes;
	NoteContext* _noteContext;
	ACAccountStore* _accountStore;
	NSObject*<OS_dispatch_group> _backgroundDispatchGroup;
	NSLock* _updateAccountInfosLock;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                                     //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> backgroundDispatchGroup;              //@synthesize backgroundDispatchGroup=_backgroundDispatchGroup - In the implementation block
@property (retain) NSLock * updateAccountInfosLock;                                             //@synthesize updateAccountInfosLock=_updateAccountInfosLock - In the implementation block
+(id)sharedAccountUtilities;
-(id)init;
-(void)_accountStoreDidChange:(id)arg1 ;
-(id)defaultStoreSyncIdWithDesiredSyncId:(id)arg1 ;
-(void)startKeepingAccountInfosUpToDate;
-(ACAccountStore *)accountStore;
-(NSObject*<OS_dispatch_group>)backgroundDispatchGroup;
-(id)localAccountDisplayName;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)updateAccountInfos;
-(id)accountsEnabledForNotes;
-(void)setUpdateAccountInfosLock:(NSLock *)arg1 ;
-(id)accountIDsEnabledForNotes;
-(void)setBackgroundDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(id)freshContext;
-(BOOL)localNotesExist;
-(NSLock *)updateAccountInfosLock;
-(void)dealloc;
@end

