/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSDownload.h>

@class ASDJob;

@interface SSSoftwareDownload : SSDownload {

	ASDJob* _job;

}

@property (nonatomic,readonly) ASDJob * job;              //@synthesize job=_job - In the implementation block
-(void)pause;
-(void)resume;
-(id)status;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(void)setStatus:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(id)assetsForType:(id)arg1 ;
-(id)failureError;
-(id)downloadPhaseIdentifier;
-(long long)bytesTotal;
-(long long)bytesDownloaded;
-(BOOL)addAsset:(id)arg1 forType:(id)arg2 ;
-(void)setDownloadHandler:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithPersistentIdentifier:(long long)arg1 ;
-(double)percentComplete;
-(BOOL)removeAsset:(id)arg1 ;
-(id)initWithJob:(id)arg1 ;
-(ASDJob *)job;
-(long long)downloadSizeLimit;
-(void)setDownloadPolicy:(id)arg1 ;
-(id)downloadPolicy;
-(void)prioritizeAboveDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)restart;
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
@end

