/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <libobjc.A.dylib/BDSCloudKitSupportSignOutDeleteWithoutInstance.h>

@protocol BCContainerConfiguration, OS_dispatch_queue;
@class BCCloudKitTransactionManager, BCCloudKitDatabaseController, CKContainer, NSObject, BUCoalescingCallBlock;

@interface BCCloudKitController : NSObject <BDSCloudKitSupportSignOutDeleteWithoutInstance> {

	BOOL _didChangeContainer;
	BOOL _gettingAccountInfo;
	BOOL _enableCloudSync;
	BOOL _serviceMode;
	BCCloudKitTransactionManager* _transactionManager;
	BCCloudKitDatabaseController* _privateCloudDatabaseController;
	id<BCContainerConfiguration> _configuration;
	CKContainer* _container;
	NSObject*<OS_dispatch_queue> _accessQueue;
	BUCoalescingCallBlock* _coalescedAttachment;

}

@property (nonatomic,retain) BCCloudKitTransactionManager * transactionManager;                //@synthesize transactionManager=_transactionManager - In the implementation block
@property (nonatomic,retain) CKContainer * container;                                          //@synthesize container=_container - In the implementation block
@property (retain) BCCloudKitDatabaseController * privateCloudDatabaseController;              //@synthesize privateCloudDatabaseController=_privateCloudDatabaseController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                         //@synthesize accessQueue=_accessQueue - In the implementation block
@property (assign,nonatomic) BOOL gettingAccountInfo;                                          //@synthesize gettingAccountInfo=_gettingAccountInfo - In the implementation block
@property (assign,nonatomic) BOOL enableCloudSync;                                             //@synthesize enableCloudSync=_enableCloudSync - In the implementation block
@property (assign,nonatomic) BOOL serviceMode;                                                 //@synthesize serviceMode=_serviceMode - In the implementation block
@property (assign,nonatomic) BOOL didChangeContainer;                                          //@synthesize didChangeContainer=_didChangeContainer - In the implementation block
@property (nonatomic,retain) id<BCContainerConfiguration> configuration;                       //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) BUCoalescingCallBlock * coalescedAttachment;                      //@synthesize coalescedAttachment=_coalescedAttachment - In the implementation block
+(id)sharedInstance;
+(void)deleteCloudDataWithCompletion:(/*^block*/id)arg1 ;
+(id)secureSharedInstance;
+(id)p_privateDatabaseArchiveURLForConfiguration:(id)arg1 ;
+(void)registerForSecureNotifications;
+(id)databaseFolderURLForConfiguration:(id)arg1 ;
+(id)p_createDatabaseArchiveDirectoryForConfiguration:(id)arg1 ;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setConfiguration:(id<BCContainerConfiguration>)arg1 ;
-(id<BCContainerConfiguration>)configuration;
-(void)applicationDidBecomeActive;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BCCloudKitTransactionManager *)transactionManager;
-(void)setTransactionManager:(BCCloudKitTransactionManager *)arg1 ;
-(BCCloudKitDatabaseController *)privateCloudDatabaseController;
-(BOOL)enableCloudSync;
-(void)setEnableCloudSync:(BOOL)arg1 ;
-(BOOL)didChangeContainer;
-(void)p_accountChanged:(id)arg1 ;
-(void)p_identityChanged:(id)arg1 ;
-(BOOL)serviceMode;
-(void)p_updateAttachment;
-(BUCoalescingCallBlock *)coalescedAttachment;
-(BOOL)gettingAccountInfo;
-(void)p_getAccountInfo;
-(void)setGettingAccountInfo:(BOOL)arg1 ;
-(void)p_getNecessaryAccountInfoFromContainer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setEnableCloudSync:(BOOL)arg1 serviceMode:(BOOL)arg2 ;
-(void)handleRemoteNotification:(id)arg1 ;
-(void)setPrivateCloudDatabaseController:(BCCloudKitDatabaseController *)arg1 ;
-(void)setDidChangeContainer:(BOOL)arg1 ;
-(void)setServiceMode:(BOOL)arg1 ;
-(void)setCoalescedAttachment:(BUCoalescingCallBlock *)arg1 ;
@end
