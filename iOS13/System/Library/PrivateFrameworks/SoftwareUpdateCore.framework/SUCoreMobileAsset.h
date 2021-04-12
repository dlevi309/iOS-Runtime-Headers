/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/


@protocol OS_dispatch_queue, OS_os_transaction;
@class NSString, MAAsset, MADownloadOptions, NSObject;

@interface SUCoreMobileAsset : NSObject {

	BOOL _downloadingAsset;
	BOOL _assetDownloaded;
	BOOL _removingAsset;
	BOOL _assetRemoved;
	id _maDelegate;
	NSString* _updateUUID;
	MAAsset* _asset;
	MADownloadOptions* _downloadOptions;
	NSObject*<OS_dispatch_queue> _clientDelegateCallbackQueue;
	NSObject*<OS_dispatch_queue> _clientCompletionQueue;
	NSObject*<OS_dispatch_queue> _maControlQueue;
	NSString* _operationName;
	/*^block*/id _downloadCompletion;
	/*^block*/id _removeCompletion;
	NSObject*<OS_os_transaction> _downloadAssetTransaction;
	NSObject*<OS_os_transaction> _removeAssetTransaction;

}

@property (nonatomic,__weak,readonly) id maDelegate;                                                  //@synthesize maDelegate=_maDelegate - In the implementation block
@property (nonatomic,retain) NSString * updateUUID;                                                   //@synthesize updateUUID=_updateUUID - In the implementation block
@property (nonatomic,retain) MAAsset * asset;                                                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) MADownloadOptions * downloadOptions;                                     //@synthesize downloadOptions=_downloadOptions - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientDelegateCallbackQueue;              //@synthesize clientDelegateCallbackQueue=_clientDelegateCallbackQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientCompletionQueue;                    //@synthesize clientCompletionQueue=_clientCompletionQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> maControlQueue;                           //@synthesize maControlQueue=_maControlQueue - In the implementation block
@property (assign,nonatomic) BOOL downloadingAsset;                                                   //@synthesize downloadingAsset=_downloadingAsset - In the implementation block
@property (assign,nonatomic) BOOL assetDownloaded;                                                    //@synthesize assetDownloaded=_assetDownloaded - In the implementation block
@property (assign,nonatomic) BOOL removingAsset;                                                      //@synthesize removingAsset=_removingAsset - In the implementation block
@property (assign,nonatomic) BOOL assetRemoved;                                                       //@synthesize assetRemoved=_assetRemoved - In the implementation block
@property (nonatomic,retain) NSString * operationName;                                                //@synthesize operationName=_operationName - In the implementation block
@property (nonatomic,copy) id downloadCompletion;                                                     //@synthesize downloadCompletion=_downloadCompletion - In the implementation block
@property (nonatomic,copy) id removeCompletion;                                                       //@synthesize removeCompletion=_removeCompletion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> downloadAssetTransaction;                   //@synthesize downloadAssetTransaction=_downloadAssetTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> removeAssetTransaction;                     //@synthesize removeAssetTransaction=_removeAssetTransaction - In the implementation block
-(id)description;
-(MAAsset *)asset;
-(void)setAsset:(MAAsset *)arg1 ;
-(id)downloadCompletion;
-(void)setDownloadCompletion:(id)arg1 ;
-(void)setDownloadOptions:(MADownloadOptions *)arg1 ;
-(MADownloadOptions *)downloadOptions;
-(NSString *)operationName;
-(void)setOperationName:(NSString *)arg1 ;
-(void)removeAsset:(/*^block*/id)arg1 ;
-(BOOL)downloadingAsset;
-(void)setDownloadingAsset:(BOOL)arg1 ;
-(BOOL)assetDownloaded;
-(id)initWithDelegate:(id)arg1 forAsset:(id)arg2 updateUUID:(id)arg3 ;
-(void)downloadDocumentationAssetWithPolicy:(id)arg1 withUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)clientCompletionQueue;
-(NSString *)updateUUID;
-(void)downloadSoftwareUpdateAssetWithPolicy:(id)arg1 withUUID:(id)arg2 ;
-(void)removeAsset;
-(NSObject*<OS_dispatch_queue>)clientDelegateCallbackQueue;
-(id)initWithDelegate:(id)arg1 forAsset:(id)arg2 updateUUID:(id)arg3 withCallbackQueue:(id)arg4 withCompletionQueue:(id)arg5 ;
-(id)maDelegate;
-(void)downloadSoftwareUpdateAssetWithPolicy:(id)arg1 withUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_downloadAssetWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)alterDownloadOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)maControlQueue;
-(void)_trackMobileAssetBegin:(id)arg1 withIdentifier:(id)arg2 ;
-(void)_trackMobileAssetEnd:(id)arg1 withIdentifier:(id)arg2 withResult:(long long)arg3 withError:(id)arg4 ;
-(BOOL)removingAsset;
-(void)_reportAnomaly:(id)arg1 issuingCompletion:(/*^block*/id)arg2 ;
-(void)setRemoveAssetTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setRemoveCompletion:(id)arg1 ;
-(void)setRemovingAsset:(BOOL)arg1 ;
-(void)setAssetDownloaded:(BOOL)arg1 ;
-(void)setAssetRemoved:(BOOL)arg1 ;
-(id)_updateAssetTypeName;
-(void)_cancelDownloadAndPurge;
-(void)setDownloadAssetTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)_registerProgressAndStartDownload;
-(BOOL)assetRemoved;
-(void)_trackMAAnomaly:(id)arg1 result:(long long)arg2 description:(id)arg3 ;
-(void)_reportDownloadProgress:(id)arg1 ;
-(void)_reportDownloadFailed:(id)arg1 ;
-(void)_trackMobileAssetBegin:(id)arg1 ;
-(void)_trackMobileAssetEnd:(id)arg1 withResult:(long long)arg2 withError:(id)arg3 ;
-(void)_reportDownloaded:(id)arg1 ;
-(void)_reportAssetRemoved;
-(void)_reportAssetRemoveFailed:(id)arg1 ;
-(NSObject*<OS_os_transaction>)downloadAssetTransaction;
-(id)removeCompletion;
-(NSObject*<OS_os_transaction>)removeAssetTransaction;
-(void)_reportAnomaly:(id)arg1 ;
-(void)downloadDocumentationAssetWithPolicy:(id)arg1 withUUID:(id)arg2 ;
-(void)alterDownloadOptions:(id)arg1 ;
-(void)setUpdateUUID:(NSString *)arg1 ;
@end

