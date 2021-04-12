/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraClipModelOperation.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@class NSString, NSData, HMDCameraClipSegmentMetadata, HMFTimer;

@interface HMDCameraClipAppendAssetOperation : HMDCameraClipModelOperation <HMFTimerDelegate> {

	unsigned long long _retryPolicy;
	NSString* _streamingAssetPropertyName;
	NSString* _metadataPropertyName;
	NSData* _segmentData;
	HMDCameraClipSegmentMetadata* _segmentMetadata;
	unsigned long long _state;
	HMFTimer* _retryTimer;

}

@property (assign) unsigned long long state;                                      //@synthesize state=_state - In the implementation block
@property (retain) HMFTimer * retryTimer;                                         //@synthesize retryTimer=_retryTimer - In the implementation block
@property (assign) unsigned long long retryPolicy;                                //@synthesize retryPolicy=_retryPolicy - In the implementation block
@property (copy,readonly) NSString * streamingAssetPropertyName;                  //@synthesize streamingAssetPropertyName=_streamingAssetPropertyName - In the implementation block
@property (copy,readonly) NSString * metadataPropertyName;                        //@synthesize metadataPropertyName=_metadataPropertyName - In the implementation block
@property (copy,readonly) NSData * segmentData;                                   //@synthesize segmentData=_segmentData - In the implementation block
@property (readonly) HMDCameraClipSegmentMetadata * segmentMetadata;              //@synthesize segmentMetadata=_segmentMetadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)main;
-(unsigned long long)state;
-(void)finish;
-(void)setState:(unsigned long long)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(id)attributeDescriptions;
-(HMFTimer *)retryTimer;
-(void)setRetryTimer:(HMFTimer *)arg1 ;
-(id)initWithClipModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 streamingAssetPropertyName:(id)arg4 metadataPropertyName:(id)arg5 segmentData:(id)arg6 segmentMetadata:(id)arg7 dataSource:(id)arg8 ;
-(void)setRetryPolicy:(unsigned long long)arg1 ;
-(void)_appendToAsset;
-(NSString *)streamingAssetPropertyName;
-(HMDCameraClipSegmentMetadata *)segmentMetadata;
-(NSString *)metadataPropertyName;
-(NSData *)segmentData;
-(id)_updateModelMetadata:(id)arg1 streamingAsset:(id)arg2 ;
-(id)_retryDelayForError:(id)arg1 ;
-(unsigned long long)retryPolicy;
@end

