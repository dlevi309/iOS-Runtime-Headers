/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSDownload.h>

@class ASDJob;

@interface SSSoftwareDownload : SSDownload {

	ASDJob* _job;

}

@property (nonatomic,readonly) ASDJob * job;              //@synthesize job=_job - In the implementation block
-(void)restart;
-(id)initWithPersistentIdentifier:(long long)arg1 ;
-(BOOL)isCancelable;
-(long long)bytesTotal;
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
-(ASDJob *)job;
-(void)setMetadata:(id)arg1 ;
-(long long)downloadSizeLimit;
-(void)setDownloadPolicy:(id)arg1 ;
-(id)downloadPolicy;
-(void)prioritizeAboveDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithJob:(id)arg1 ;
-(double)percentComplete;
-(id)valueForProperty:(id)arg1 ;
-(void)setStatus:(id)arg1 ;
-(id)failureError;
-(id)metadata;
-(void)resume;
-(id)status;
@end

