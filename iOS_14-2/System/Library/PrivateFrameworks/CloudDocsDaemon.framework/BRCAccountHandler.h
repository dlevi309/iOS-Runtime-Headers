/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue, BRCAccountHandlerDelegate, OS_dispatch_workloop;
@class BRCAccountSession, NSString, NSObject, NSMutableDictionary;

@interface BRCAccountHandler : NSObject <MCProfileConnectionObserver> {

	BRCAccountSession* _session;
	NSString* _currentAccountID;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _migrationStatusSetterQueue;
	BOOL _hasSetMigrationComplete;
	NSMutableDictionary* _syncPolicyByFolderType;
	id<BRCAccountHandlerDelegate> _delegate;
	NSObject*<OS_dispatch_workloop> _pushWorkloop;

}

@property (assign,nonatomic,__weak) id<BRCAccountHandlerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BRCAccountSession * session;                               //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_workloop> pushWorkloop;              //@synthesize pushWorkloop=_pushWorkloop - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)destroyCurrentAccountSynchronously;
+(id)primaryiCloudAccountID;
+(id)primaryiCloudAccount;
+(id)mobileDocsAccountID;
+(id)accountIDPath;
+(void)_migrateAccountIfNecessaryForAccountID:(id)arg1 ;
+(id)dbAccountID;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)__destroySessionWithIntents:(id)arg1 ;
-(id)init;
-(void)setMigrationStatus:(char)arg1 forDSID:(id)arg2 shouldUpdateAccount:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2 ;
-(id<BRCAccountHandlerDelegate>)delegate;
-(BOOL)_loadCurrentOnDiskAccountSessionWithError:(id*)arg1 ;
-(BRCAccountSession *)session;
-(void)reloadSyncedFolderPoliciesDisableiCloudDesktop:(BOOL)arg1 ;
-(void)_updateAccountToAccountID:(id)arg1 ;
-(BOOL)_createCurrentAccountSessionWithID:(id)arg1 error:(id*)arg2 ;
-(void)setSyncPolicy:(long long)arg1 forSyncedFolderType:(unsigned long long)arg2 ;
-(void)setDelegate:(id<BRCAccountHandlerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_workloop>)pushWorkloop;
-(void)_cleanupPushAndActivitiesStatesWhenNoSessionExists;
-(void)reloadSyncedFolderPolicies;
-(BOOL)setDBAccountID:(id)arg1 ;
-(long long)syncPolicyforSyncedFolderType:(unsigned long long)arg1 ;
-(void)jetsamCloudDocsApps;
-(void)_handleAccountWillChange;
-(void)startAndLoadCurrentAccountSynchronously;
-(void)_handleAccountDidChange;
-(void)_destroyCurrentSessionSynchronously;
-(void)markMigrationCompletedForDSID:(id)arg1 ;
-(void)destroyCurrentSessionSynchronously;
-(void)dealloc;
@end

