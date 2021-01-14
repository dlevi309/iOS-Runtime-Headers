/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@protocol OS_dispatch_queue, BLPurchaseDAAPServerDelegate;
@class NSDate, NSMutableSet, BKPurchaseDAAPBackoff, BUBag, NSObject, NSNumber;

@interface BLPurchaseDAAPServer : NSObject {

	NSDate* _lastPolledAt;
	NSDate* _DAAPReconnectAt;
	BOOL _clientExpired;
	long long _requestReasonCode;
	NSMutableSet* _setupCompletionHandlers;
	BKPurchaseDAAPBackoff* _backoff;
	BUBag* _bag;
	NSObject*<OS_dispatch_queue> _updateItemsQueue;
	NSObject*<OS_dispatch_queue> _backoffQueue;
	BOOL _isServerSetup;
	BOOL _isServerSetupPending;
	BOOL _primaryAccount;
	NSNumber* _sessionID;
	NSNumber* _dsid;
	NSNumber* _bagDatabaseID;
	id<BLPurchaseDAAPServerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL isServerSetup;                                            //@synthesize isServerSetup=_isServerSetup - In the implementation block
@property (assign,nonatomic) BOOL isServerSetupPending;                                     //@synthesize isServerSetupPending=_isServerSetupPending - In the implementation block
@property (getter=isPrimaryAccount,nonatomic,readonly) BOOL primaryAccount;                 //@synthesize primaryAccount=_primaryAccount - In the implementation block
@property (nonatomic,retain) NSNumber * bagDatabaseID;                                      //@synthesize bagDatabaseID=_bagDatabaseID - In the implementation block
@property (setter=_setSessionID:,nonatomic,retain) NSNumber * sessionID;                    //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic,__weak) id<BLPurchaseDAAPServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSNumber * dsid;                                               //@synthesize dsid=_dsid - In the implementation block
+(id)sharedSession;
-(NSNumber *)dsid;
-(void)setDsid:(NSNumber *)arg1 ;
-(NSNumber *)sessionID;
-(id<BLPurchaseDAAPServerDelegate>)delegate;
-(void)setDelegate:(id<BLPurchaseDAAPServerDelegate>)arg1 ;
-(void)contextDidSave:(id)arg1 ;
-(void)_setSessionID:(id)arg1 ;
-(void)setBagDatabaseID:(NSNumber *)arg1 ;
-(NSNumber *)bagDatabaseID;
-(id)initWithDSID:(id)arg1 delegate:(id)arg2 ;
-(void)updateItemImageURLsIgnoringCache:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetWithQueue:(id)arg1 ;
-(void)hideItemsWithStoreIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setupWithReason:(long long)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAllItemsPolitely:(BOOL)arg1 reason:(long long)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setIsServerSetup:(BOOL)arg1 ;
-(void)serverParametersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)valueForDAAPBagKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)timeIntervalFromDAAPBagKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setIsServerSetupPending:(BOOL)arg1 ;
-(BOOL)isServerSetup;
-(id)_dataForArtRequest:(BOOL)arg1 ;
-(id)_processResponse:(id)arg1 ;
-(BOOL)_saveInMoc:(id)arg1 error:(id*)arg2 ;
-(void)_preProcessResponse:(id)arg1 error:(id)arg2 responseBlock:(/*^block*/id)arg3 ;
-(void)_shouldMakeRequest:(/*^block*/id)arg1 ;
-(id)_localServerDatabaseRevisionInMoc:(id)arg1 ;
-(id)_updatePersistentServerRevision:(id)arg1 moc:(id)arg2 error:(id*)arg3 ;
-(id)_dataForHideItemsRequestWithStoreIDs:(id)arg1 ;
-(void)_updateVersionAfterHideRequest:(id)arg1 ;
-(BOOL)isServerSetupPending;
-(void)_sendSetupConfigurationHandlersWithSuccess:(BOOL)arg1 ;
-(void)_loginWithReason:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_configureWithReason:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)appRefreshesOnLaunchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)forcedRefreshFrequencyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)pollingFrequencyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)databaseIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isPrimaryAccount;
-(BOOL)_updatePersistentServerRevision:(id)arg1 database:(id)arg2 items:(id)arg3 error:(id*)arg4 ;
-(void)_fetchItemsWithLocalVersion:(id)arg1 serverVersion:(id)arg2 reason:(long long)arg3 tokenPairs:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_fetchDatabaseWithReason:(long long)arg1 localServerRevision:(id)arg2 latestVersion:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_pollLatestRevisionWithReason:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)_updatePersistentDatabase:(id)arg1 server:(id)arg2 moc:(id)arg3 error:(id*)arg4 ;
-(id)_updatePersistentItems:(id)arg1 moc:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
-(id)additionalAudiobookInfoKeys;
-(void)_sendHandlers:(id)arg1 success:(BOOL)arg2 ;
-(BOOL)_canMakeDAAPRequest;
-(void)handleClientExpired;
-(void)setDAAPReconnectToTimeIntervalSinceNow:(double)arg1 ;
-(id)daapMetaDataFilterString;
-(id)daapQueryFilterString;
-(id)_dataForItemsRequestWithLocalVersion:(id)arg1 serverVersion:(id)arg2 tokenPairs:(id)arg3 ;
-(void)dealloc;
@end

