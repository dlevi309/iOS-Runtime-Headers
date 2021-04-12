/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(void)_accountStoreDidChange:(id)arg1 ;
-(id)localAccountDisplayName;
-(id)defaultStoreSyncIdWithDesiredSyncId:(id)arg1 ;
-(void)updateAccountInfos;
-(BOOL)localNotesExist;
-(NSObject*<OS_dispatch_group>)backgroundDispatchGroup;
-(NSLock *)updateAccountInfosLock;
-(id)freshContext;
-(void)startKeepingAccountInfosUpToDate;
-(id)accountsEnabledForNotes;
-(id)accountIDsEnabledForNotes;
-(void)setBackgroundDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setUpdateAccountInfosLock:(NSLock *)arg1 ;
@end

