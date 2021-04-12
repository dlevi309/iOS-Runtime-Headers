/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/


@protocol OS_dispatch_queue, OS_os_transaction;
@class NSString, NSObject, SUCoreFSM, SUCorePolicy, SUCoreDescriptor, SUCoreMobileAsset, MAAsset;

@interface SUCoreScan : NSObject {

	BOOL _cancelingOperation;
	BOOL _downloadDocumentation;
	int _operation;
	int _pendingMobileAssetRequests;
	NSString* _scanUUID;
	NSObject*<OS_dispatch_queue> _clientCompletionQueue;
	SUCoreFSM* _scanFSM;
	SUCorePolicy* _scanPolicy;
	SUCoreDescriptor* _activeDescriptor;
	SUCoreMobileAsset* _maDocumentationControl;
	MAAsset* _primaryUpdateAsset;
	MAAsset* _secondaryUpdateAsset;
	/*^block*/id _checkCompletion;
	/*^block*/id _verifyCompletion;
	/*^block*/id _collectCompletion;
	/*^block*/id _locateCompletion;
	/*^block*/id _cancelCompletion;
	NSObject*<OS_os_transaction> _scanCheckTransaction;
	NSObject*<OS_os_transaction> _scanVerifyTransaction;
	NSObject*<OS_os_transaction> _scanCollectTransaction;
	NSObject*<OS_os_transaction> _scanLocateTransaction;
	NSObject*<OS_os_transaction> _scanCancelTransaction;

}

@property (nonatomic,readonly) NSString * scanUUID;                                             //@synthesize scanUUID=_scanUUID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientCompletionQueue;              //@synthesize clientCompletionQueue=_clientCompletionQueue - In the implementation block
@property (assign,nonatomic) int operation;                                                     //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) BOOL cancelingOperation;                                           //@synthesize cancelingOperation=_cancelingOperation - In the implementation block
@property (nonatomic,retain) SUCorePolicy * scanPolicy;                                         //@synthesize scanPolicy=_scanPolicy - In the implementation block
@property (nonatomic,retain) SUCoreDescriptor * activeDescriptor;                               //@synthesize activeDescriptor=_activeDescriptor - In the implementation block
@property (assign,nonatomic) BOOL downloadDocumentation;                                        //@synthesize downloadDocumentation=_downloadDocumentation - In the implementation block
@property (assign,nonatomic) int pendingMobileAssetRequests;                                    //@synthesize pendingMobileAssetRequests=_pendingMobileAssetRequests - In the implementation block
@property (nonatomic,retain) SUCoreMobileAsset * maDocumentationControl;                        //@synthesize maDocumentationControl=_maDocumentationControl - In the implementation block
@property (nonatomic,retain) MAAsset * primaryUpdateAsset;                                      //@synthesize primaryUpdateAsset=_primaryUpdateAsset - In the implementation block
@property (nonatomic,retain) MAAsset * secondaryUpdateAsset;                                    //@synthesize secondaryUpdateAsset=_secondaryUpdateAsset - In the implementation block
@property (nonatomic,copy) id checkCompletion;                                                  //@synthesize checkCompletion=_checkCompletion - In the implementation block
@property (nonatomic,copy) id verifyCompletion;                                                 //@synthesize verifyCompletion=_verifyCompletion - In the implementation block
@property (nonatomic,copy) id collectCompletion;                                                //@synthesize collectCompletion=_collectCompletion - In the implementation block
@property (nonatomic,copy) id locateCompletion;                                                 //@synthesize locateCompletion=_locateCompletion - In the implementation block
@property (nonatomic,copy) id cancelCompletion;                                                 //@synthesize cancelCompletion=_cancelCompletion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> scanCheckTransaction;                 //@synthesize scanCheckTransaction=_scanCheckTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> scanVerifyTransaction;                //@synthesize scanVerifyTransaction=_scanVerifyTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> scanCollectTransaction;               //@synthesize scanCollectTransaction=_scanCollectTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> scanLocateTransaction;                //@synthesize scanLocateTransaction=_scanLocateTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> scanCancelTransaction;                //@synthesize scanCancelTransaction=_scanCancelTransaction - In the implementation block
@property (nonatomic,readonly) SUCoreFSM * scanFSM;                                             //@synthesize scanFSM=_scanFSM - In the implementation block
+(id)_generateStateTable;
-(id)description;
-(int)operation;
-(void)setOperation:(int)arg1 ;
-(id)_operationName;
-(id)initWithUUID:(id)arg1 ;
-(long long)performAction:(id)arg1 onEvent:(id)arg2 inState:(id)arg3 withInfo:(id)arg4 nextState:(id)arg5 error:(id*)arg6 ;
-(SUCoreFSM *)scanFSM;
-(long long)actionDownloadSUCatalog:(id*)arg1 ;
-(long long)actionQuerySUMetadata:(id*)arg1 ;
-(long long)actionDownloadDocCatalog:(id*)arg1 ;
-(long long)actionQueryDocMetadata:(id*)arg1 ;
-(long long)actionDownloadDocAsset:(id*)arg1 ;
-(long long)actionRemoveDocAsset:(id*)arg1 ;
-(long long)actionScanCompleteNoUpdate:(id*)arg1 ;
-(long long)actionScanSuccess:(id)arg1 error:(id*)arg2 ;
-(long long)actionScanFailed:(id)arg1 error:(id*)arg2 ;
-(long long)actionCancelSuccess:(id*)arg1 ;
-(long long)actionAfterAvailCancelSuccess:(id)arg1 error:(id*)arg2 ;
-(long long)actionAfterFailCancelSuccess:(id)arg1 error:(id*)arg2 ;
-(long long)actionCancelRemoveFailed:(id)arg1 error:(id*)arg2 ;
-(long long)actionCheckCancelDone:(id*)arg1 ;
-(long long)actionAfterFailCheckCancelDone:(id)arg1 error:(id*)arg2 ;
-(long long)actionCancelDone:(id*)arg1 ;
-(long long)a_SimCatalogDownloadSuccess:(id*)arg1 ;
-(long long)a_SimQueryMetadataUpdateAvailable:(id*)arg1 ;
-(long long)actionUnknownAction:(id)arg1 error:(id*)arg2 ;
-(SUCorePolicy *)scanPolicy;
-(long long)_downloadCatalog:(id)arg1 withIdentifier:(id)arg2 ;
-(long long)_decrementMobileAssetPending;
-(int)pendingMobileAssetRequests;
-(void)setPendingMobileAssetRequests:(int)arg1 ;
-(void)_trackScanBegin:(id)arg1 withIdentifier:(id)arg2 ;
-(void)_trackScanEnd:(id)arg1 withIdentifier:(id)arg2 withResult:(long long)arg3 withError:(id)arg4 ;
-(void)_filterSUQueryResults:(id)arg1 ;
-(SUCoreDescriptor *)activeDescriptor;
-(void)_filterDocQueryResults:(id)arg1 ;
-(NSString *)scanUUID;
-(void)setMaDocumentationControl:(SUCoreMobileAsset *)arg1 ;
-(SUCoreMobileAsset *)maDocumentationControl;
-(void)_scanCompleteFoundPrimary:(id)arg1 foundSecondary:(id)arg2 clearingOperation:(BOOL)arg3 error:(id)arg4 ;
-(MAAsset *)secondaryUpdateAsset;
-(MAAsset *)primaryUpdateAsset;
-(void)_invalidOperation:(id)arg1 ;
-(BOOL)cancelingOperation;
-(void)_cancelCompleteWithError:(id)arg1 ;
-(id)_simDescriptorAttributes;
-(id)initWithUUID:(id)arg1 withCompletionQueue:(id)arg2 ;
-(void)_trackScanBegin:(id)arg1 ;
-(void)_checkEndComplete:(/*^block*/id)arg1 scanPolicy:(id)arg2 primary:(id)arg3 secondary:(id)arg4 error:(id)arg5 clearingTransaction:(BOOL)arg6 ;
-(NSObject*<OS_os_transaction>)scanCheckTransaction;
-(void)setScanCheckTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setScanPolicy:(SUCorePolicy *)arg1 ;
-(void)setCheckCompletion:(id)arg1 ;
-(void)_verifyEndComplete:(/*^block*/id)arg1 scanPolicy:(id)arg2 active:(id)arg3 primary:(id)arg4 secondary:(id)arg5 error:(id)arg6 clearingTransaction:(BOOL)arg7 ;
-(NSObject*<OS_os_transaction>)scanVerifyTransaction;
-(void)setScanVerifyTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setActiveDescriptor:(SUCoreDescriptor *)arg1 ;
-(void)setVerifyCompletion:(id)arg1 ;
-(void)_collectEndComplete:(/*^block*/id)arg1 scanPolicy:(id)arg2 active:(id)arg3 error:(id)arg4 clearingTransaction:(BOOL)arg5 ;
-(NSObject*<OS_os_transaction>)scanCollectTransaction;
-(void)setScanCollectTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setDownloadDocumentation:(BOOL)arg1 ;
-(void)setCollectCompletion:(id)arg1 ;
-(void)_locateEndComplete:(/*^block*/id)arg1 scanPolicy:(id)arg2 primary:(id)arg3 secondary:(id)arg4 error:(id)arg5 clearingTransaction:(BOOL)arg6 ;
-(NSObject*<OS_os_transaction>)scanLocateTransaction;
-(void)setScanLocateTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setLocateCompletion:(id)arg1 ;
-(void)_cancelEndComplete:(/*^block*/id)arg1 error:(id)arg2 clearingTransaction:(BOOL)arg3 ;
-(NSObject*<OS_os_transaction>)scanCancelTransaction;
-(void)setScanCancelTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setCancelingOperation:(BOOL)arg1 ;
-(void)setCancelCompletion:(id)arg1 ;
-(id)checkCompletion;
-(id)verifyCompletion;
-(id)collectCompletion;
-(void)setPrimaryUpdateAsset:(MAAsset *)arg1 ;
-(void)setSecondaryUpdateAsset:(MAAsset *)arg1 ;
-(id)locateCompletion;
-(void)_clearCurrentOperation;
-(id)cancelCompletion;
-(void)_operationCompleting:(id)arg1 error:(id)arg2 clearingTransaction:(BOOL)arg3 ;
-(NSObject*<OS_dispatch_queue>)clientCompletionQueue;
-(void)_trackScanEnd:(id)arg1 withResult:(long long)arg2 withError:(id)arg3 ;
-(BOOL)downloadDocumentation;
-(void)checkForAvailableUpdateWithPolicy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)verifyLatestAvailableWithPolicy:(id)arg1 descriptor:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)collectDocumentationMetadataWithPolicy:(id)arg1 descriptor:(id)arg2 downloadDocumentation:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)locateAvailableUpdateWithPolicy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelCurrentScan:(/*^block*/id)arg1 ;
@end

