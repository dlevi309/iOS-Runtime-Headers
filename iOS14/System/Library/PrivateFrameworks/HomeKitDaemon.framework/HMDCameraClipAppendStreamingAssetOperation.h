/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraClipOperation.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@class NSData, HMDCameraClipSegmentMetadata, HMCameraClipEncryptionManager, HMFTimer, NSString;

@interface HMDCameraClipAppendStreamingAssetOperation : HMDCameraClipOperation <HMFTimerDelegate> {

	NSData* _data;
	HMDCameraClipSegmentMetadata* _metadata;
	HMCameraClipEncryptionManager* _encryptionManager;
	HMFTimer* _retryTimer;

}

@property (retain) HMFTimer * retryTimer;                                            //@synthesize retryTimer=_retryTimer - In the implementation block
@property (readonly) NSData * data;                                                  //@synthesize data=_data - In the implementation block
@property (readonly) HMDCameraClipSegmentMetadata * metadata;                        //@synthesize metadata=_metadata - In the implementation block
@property (readonly) HMCameraClipEncryptionManager * encryptionManager;              //@synthesize encryptionManager=_encryptionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)shouldRetry;
+(id)streamingAssetPropertyName;
+(id)metadataPropertyName;
-(void)timerDidFire:(id)arg1 ;
-(void)finish;
-(void)setRetryTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)retryTimer;
-(void)cancelWithError:(id)arg1 ;
-(void)main;
-(NSData *)data;
-(id)attributeDescriptions;
-(HMDCameraClipSegmentMetadata *)metadata;
-(id)initWithClipModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5 dataSource:(id)arg6 ;
-(HMCameraClipEncryptionManager *)encryptionManager;
-(id)_updateClipModel:(id)arg1 usingStreamingAsset:(id)arg2 ;
-(id)_retryDelayForError:(id)arg1 ;
-(id)initWithClipModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5 ;
@end

