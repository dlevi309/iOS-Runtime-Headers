/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)restart;
-(BOOL)isCancelable;
-(long long)bytesTotal;
-(NSString *)downloadID;
-(id)initWithDownloadStatus:(id)arg1 ;
-(void)setDownloadPhaseIdentifierOverride:(NSString *)arg1 ;
-(void)setDownloadHandler:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(long long)bytesDownloaded;
-(void)_becomeManagedOnConnection:(id)arg1 ;
-(BOOL)isEligibleForRestore:(id*)arg1 ;
-(void)setValuesWithStoreDownloadMetadata:(id)arg1 ;
-(id)backgroundNetworkingJobGroupName;
-(BOOL)removeAsset:(id)arg1 ;
-(void)pause;
-(double)estimatedSecondsRemaining;
-(id)networkConstraints;
-(void)setBackgroundNetworkingJobGroupName:(id)arg1 ;
-(void)setNetworkConstraints:(id)arg1 ;
-(id)assetsForType:(id)arg1 ;
-(BOOL)addAsset:(id)arg1 forType:(id)arg2 ;
-(BOOL)isBackgroundNetworkingUserInitiated;
-(void)setBackgroundNetworkingUserInitiated:(BOOL)arg1 ;
-(id)downloadPhaseIdentifier;
-(void)setMetadata:(id)arg1 ;
-(long long)persistentIdentifier;
-(long long)downloadSizeLimit;
-(void)setDownloadPolicy:(id)arg1 ;
-(id)downloadPolicy;
-(void)prioritizeAboveDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(double)percentComplete;
-(id)valueForProperty:(id)arg1 ;
-(id<SSBookDownloadStatus>)downloadStatus;
-(NSString *)downloadPhaseIdentifierOverride;
-(void)setStatus:(id)arg1 ;
-(id)metadata;
-(void)resume;
-(id)status;
@end

