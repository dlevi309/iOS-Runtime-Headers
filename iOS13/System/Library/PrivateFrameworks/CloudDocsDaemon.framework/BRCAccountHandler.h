/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue, BRCAccountHandlerDelegate;
@class BRCAccountSession, NSString, NSObject, NSMutableDictionary;

@interface BRCAccountHandler : NSObject <MCProfileConnectionObserver> {

	BRCAccountSession* _session;
	NSString* _currentAccountID;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _migrationStatusSetterQueue;
	BOOL _hasSetMigrationComplete;
	NSMutableDictionary* _syncPolicyByFolderType;
	id<BRCAccountHandlerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _pushQueue;

}

@property (assign,nonatomic,__weak) id<BRCAccountHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BRCAccountSession * session;                              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> pushQueue;                   //@synthesize pushQueue=_pushQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)primaryiCloudAccount;
+(id)accountIDPath;
+(id)dbAccountID;
+(id)mobileDocsAccountID;
+(void)_migrateAccountIfNecessaryForAccountID:(id)arg1 ;
+(BOOL)destroyCurrentAccountSynchronously;
+(id)icloudDriveAccountID;
+(BOOL)icloudAccountIsInCarry;
+(id)primaryiCloudAccountID;
-(id)init;
-(void)dealloc;
-(id<BRCAccountHandlerDelegate>)delegate;
-(void)setDelegate:(id<BRCAccountHandlerDelegate>)arg1 ;
-(BRCAccountSession *)session;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)setMigrationStatus:(char)arg1 forDSID:(id)arg2 shouldUpdateAccount:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
-(BOOL)setDBAccountID:(id)arg1 ;
-(void)reloadSyncedFolderPoliciesDisableiCloudDesktop:(BOOL)arg1 ;
-(BOOL)_loadCurrentOnDiskAccountSessionWithError:(id*)arg1 ;
-(void)jetsamCloudDocsApps;
-(void)__destroySessionWithIntents:(id)arg1 ;
-(void)reloadSyncedFolderPolicies;
-(void)_destroyCurrentSessionSynchronously;
-(BOOL)_createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2 ;
-(void)_handleAccountWillChange;
-(void)_handleAccountDidChange;
-(void)_updateAccountToAccountID:(id)arg1 ;
-(void)setSyncPolicy:(long long)arg1 forSyncedFolderType:(unsigned long long)arg2 ;
-(void)startAndLoadCurrentAccountSynchronously;
-(void)destroyCurrentSessionSynchronously;
-(BOOL)createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2 ;
-(void)markMigrationCompletedForDSID:(id)arg1 ;
-(long long)syncPolicyforSyncedFolderType:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)pushQueue;
@end

