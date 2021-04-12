/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSDownload.h>

@protocol SSBookDownloadQueue, SSBookDownloadStatus;
@class NSString;

@interface SSBookDownload : SSDownload {

	id<SSBookDownloadQueue> _downloadQueue;
	NSString* _downloadPhaseIdentifierOverride;
	id<SSBookDownloadStatus> _downloadStatus;

}

@property (nonatomic,retain) NSString * downloadPhaseIdentifierOverride;              //@synthesize downloadPhaseIdentifierOverride=_downloadPhaseIdentifierOverride - In the implementation block
@property (nonatomic,readonly) id<SSBookDownloadStatus> downloadStatus;               //@synthesize downloadStatus=_downloadStatus - In the implementation block
@property (nonatomic,readonly) NSString * downloadID; 
-(void)pause;
-(void)resume;
-(id)status;
-(long long)persistentIdentifier;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(void)setStatus:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)assetsForType:(id)arg1 ;
-(id)downloadPhaseIdentifier;
-(long long)bytesTotal;
-(long long)bytesDownloaded;
-(BOOL)addAsset:(id)arg1 forType:(id)arg2 ;
-(void)setDownloadHandler:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(double)percentComplete;
-(BOOL)removeAsset:(id)arg1 ;
-(long long)downloadSizeLimit;
-(void)setDownloadPolicy:(id)arg1 ;
-(id)downloadPolicy;
-(void)prioritizeAboveDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)restart;
-(NSString *)downloadID;
-(void)_becomeManagedOnConnection:(id)arg1 ;
-(BOOL)isEligibleForRestore:(id*)arg1 ;
-(void)setValuesWithStoreDownloadMetadata:(id)arg1 ;
-(id)backgroundNetworkingJobGroupName;
-(double)estimatedSecondsRemaining;
-(BOOL)isCancelable;
-(id)networkConstraints;
-(void)setBackgroundNetworkingJobGroupName:(id)arg1 ;
-(void)setNetworkConstraints:(id)arg1 ;
-(BOOL)isBackgroundNetworkingUserInitiated;
-(void)setBackgroundNetworkingUserInitiated:(BOOL)arg1 ;
-(id)initWithDownloadStatus:(id)arg1 ;
-(void)setDownloadPhaseIdentifierOverride:(NSString *)arg1 ;
-(NSString *)downloadPhaseIdentifierOverride;
-(id<SSBookDownloadStatus>)downloadStatus;
@end

