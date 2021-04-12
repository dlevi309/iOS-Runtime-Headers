/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
*/


@class DAAccount, DATrustHandler;

@interface DAAgent : NSObject {

	BOOL _isMonitoring;
	BOOL _syncWhenReachable;
	BOOL _isWaitingForPassword;
	DAAccount* _account;
	double _lastRetryTimeout;
	/*^block*/id _networkReachableBlock;

}

@property (nonatomic,retain) DAAccount * account;                          //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) double lastRetryTimeout;                      //@synthesize lastRetryTimeout=_lastRetryTimeout - In the implementation block
@property (assign,nonatomic) BOOL syncWhenReachable;                       //@synthesize syncWhenReachable=_syncWhenReachable - In the implementation block
@property (nonatomic,copy) id networkReachableBlock;                       //@synthesize networkReachableBlock=_networkReachableBlock - In the implementation block
@property (assign,nonatomic) BOOL isWaitingForPassword;                    //@synthesize isWaitingForPassword=_isWaitingForPassword - In the implementation block
@property (assign,nonatomic) BOOL isMonitoring;                            //@synthesize isMonitoring=_isMonitoring - In the implementation block
@property (nonatomic,readonly) DATrustHandler * trustHandler; 
+(id)launchingAgentWithAccount:(id)arg1 ;
-(id)description;
-(DAAccount *)account;
-(void)setAccount:(DAAccount *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)startMonitoring;
-(BOOL)isMonitoring;
-(void)shutdown;
-(void)_reachabilityChanged:(id)arg1 ;
-(id)stateString;
-(DATrustHandler *)trustHandler;
-(void)saveXpcActivity:(id)arg1 ;
-(BOOL)syncWhenReachable;
-(id)networkReachableBlock;
-(void)setSyncWhenReachable:(BOOL)arg1 ;
-(void)setNetworkReachableBlock:(id)arg1 ;
-(void)setIsMonitoring:(BOOL)arg1 ;
-(void)observeReachabilityWithBlock:(/*^block*/id)arg1 ;
-(void)stopObservingReachability;
-(BOOL)monitorFoldersWithSyncKeyMap:(id)arg1 ;
-(void)resumeMonitoringFoldersWithSyncKeyMap:(id)arg1 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)refreshFolderListRequireChangedFolders:(BOOL)arg1 isUserRequested:(BOOL)arg2 ;
-(void)syncFolderIDs:(id)arg1 forDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 callback:(/*^block*/id)arg5 ;
-(id)getDAAccount;
-(double)lastRetryTimeout;
-(void)setLastRetryTimeout:(double)arg1 ;
-(BOOL)isWaitingForPassword;
-(void)setIsWaitingForPassword:(BOOL)arg1 ;
@end

