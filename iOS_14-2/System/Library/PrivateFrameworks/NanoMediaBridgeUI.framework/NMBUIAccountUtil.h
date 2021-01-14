/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(ACAccountStore *)accountStore;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)dealloc;
-(void)_handleAccountStoreDidChangeNotification:(id)arg1 ;
-(void)setNssManager:(NSSManager *)arg1 ;
-(NSSManager *)nssManager;
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
-(void)sendITunesAccountToGizmoIfNecessary;
-(BOOL)hasITunesAccount;
-(ACAccount *)idmsAccount;
-(void)setItunesAccount:(ACAccount *)arg1 ;
-(void)setIdmsAccount:(ACAccount *)arg1 ;
@end

