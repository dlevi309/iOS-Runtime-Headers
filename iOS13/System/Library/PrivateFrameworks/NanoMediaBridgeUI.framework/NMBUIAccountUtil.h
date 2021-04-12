/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSManager, ACAccountStore, ACAccount;

@interface NMBUIAccountUtil : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSSManager* _nssManager;
	ACAccountStore* _accountStore;
	ACAccount* _itunesAccount;
	ACAccount* _idmsAccount;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSSManager * nssManager;                             //@synthesize nssManager=_nssManager - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                       //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACAccount * itunesAccount;                           //@synthesize itunesAccount=_itunesAccount - In the implementation block
@property (nonatomic,retain) ACAccount * idmsAccount;                             //@synthesize idmsAccount=_idmsAccount - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(void)_handleAccountStoreDidChangeNotification:(id)arg1 ;
-(NSSManager *)nssManager;
-(void)setNssManager:(NSSManager *)arg1 ;
-(void)sendITunesAccountToGizmoIfNecessary;
-(void)_sendITunesAccountToGizmoIfNecessary;
-(ACAccount *)itunesAccount;
-(id)_idmsAccountForCurrentAccount;
-(BOOL)_doesAccount:(id)arg1 matchAccountDict:(id)arg2 ;
-(void)_signGizmoIntoITunesAccount;
-(BOOL)_doesAccount:(id)arg1 matchAccount:(id)arg2 ;
-(id)_itunesAccountNoAuth;
-(id)_signInOptions;
-(void)_attemptSignIn;
-(BOOL)_doesAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3 matchAccountWithAltDSID:(id)arg4 DSID:(id)arg5 username:(id)arg6 ;
-(BOOL)hasITunesAccount;
-(ACAccount *)idmsAccount;
-(void)setItunesAccount:(ACAccount *)arg1 ;
-(void)setIdmsAccount:(ACAccount *)arg1 ;
@end

