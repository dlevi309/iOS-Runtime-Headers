/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSEntity.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSMutableDictionary, SSDownloadMetadata, NSNumber, SSDownloadStatus, NSDictionary, SSXPCConnection, NSArray, SSDownloadPolicy, NSString;

@interface SSDownload : SSEntity <SSXPCCoding> {

	NSMutableDictionary* _localAssets;
	SSDownloadMetadata* _metadata;
	NSNumber* _prioritizeAboveDownload;
	SSDownloadStatus* _status;

}

@property (readonly) NSDictionary * _localAssets; 
@property (getter=_XPCConnection,readonly) SSXPCConnection * _XPCConnection; 
@property (getter=isExternal,nonatomic,readonly) BOOL external; 
@property (nonatomic,readonly) id downloadIdentifier; 
@property (nonatomic,retain) NSArray * assets; 
@property (nonatomic,copy) SSDownloadMetadata * metadata; 
@property (nonatomic,retain) SSDownloadStatus * status; 
@property (readonly) long long persistentIdentifier; 
@property (getter=isCancelable,readonly) BOOL cancelable; 
@property (copy) SSDownloadPolicy * downloadPolicy; 
@property (readonly) long long downloadSizeLimit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_existsMessage;
+(long long)_getExternalValuesMessage;
+(long long)_getValueMessage;
+(long long)_setExternalValuesMessage;
+(long long)_setValuesMessage;
-(void)dealloc;
-(void)pause;
-(void)resume;
-(SSDownloadStatus *)status;
-(long long)persistentIdentifier;
-(SSXPCConnection *)_XPCConnection;
-(void)setMetadata:(SSDownloadMetadata *)arg1 ;
-(SSDownloadMetadata *)metadata;
-(void)setStatus:(SSDownloadStatus *)arg1 ;
-(id)downloadIdentifier;
-(id)assetsForType:(id)arg1 ;
-(id)failureError;
-(id)downloadPhaseIdentifier;
-(long long)bytesTotal;
-(long long)bytesDownloaded;
-(BOOL)addAsset:(id)arg1 forType:(id)arg2 ;
-(void)setDownloadHandler:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithPersistentIdentifier:(long long)arg1 ;
-(double)percentComplete;
-(BOOL)isExternal;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
-(BOOL)removeAsset:(id)arg1 ;
-(long long)downloadSizeLimit;
-(void)setDownloadPolicy:(SSDownloadPolicy *)arg1 ;
-(SSDownloadPolicy *)downloadPolicy;
-(id)initWithDownloadMetadata:(id)arg1 ;
-(void)prioritizeAboveDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)restart;
-(id)copyXPCEncoding;
-(id)_errorWithData:(id)arg1 ;
-(BOOL)isEligibleForRestore:(id*)arg1 ;
-(id)_errorWithXPCReply:(id)arg1 ;
-(void)_applyPhase:(id)arg1 toStatus:(id)arg2 ;
-(void)_resetLocalIVars;
-(void)setValuesWithStoreDownloadMetadata:(id)arg1 ;
-(id)_newAssetWithURL:(id)arg1 assetType:(id)arg2 ;
-(id)_initWithLocalPropertyValues:(id)arg1 ;
-(id)backgroundNetworkingJobGroupName;
-(double)estimatedSecondsRemaining;
-(BOOL)isCancelable;
-(id)networkConstraints;
-(void)setBackgroundNetworkingJobGroupName:(id)arg1 ;
-(void)setNetworkConstraints:(id)arg1 ;
-(void)_addCachedExternalValues:(id)arg1 ;
-(void)_addCachedPropertyValues:(id)arg1 ;
-(void)handleWithDownloadHandler:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)isBackgroundNetworkingUserInitiated;
-(void)setBackgroundNetworkingUserInitiated:(BOOL)arg1 ;
-(NSDictionary *)_localAssets;
-(void)_resetStatus;
@end

