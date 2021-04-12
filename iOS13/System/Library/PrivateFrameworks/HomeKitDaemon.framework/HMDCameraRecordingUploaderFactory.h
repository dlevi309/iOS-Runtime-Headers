/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDCameraRecordingUploaderFactory.h>

@protocol HMDCameraRecordingUploaderFactory <NSObject>
@property (readonly) id<HMDCameraRecordingUploaderDataSource> dataSource; 
@required
-(id<HMDCameraRecordingUploaderDataSource>)dataSource;
-(id)createVideoSegmentUploadOperationForModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 segmentData:(id)arg4 segmentMetadata:(id)arg5 dataSource:(id)arg6;
-(id)createPosterFrameUploadOperationForModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 segmentData:(id)arg4 segmentMetadata:(id)arg5 dataSource:(id)arg6;
-(id)createSignificantEventOperationForModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 dateOfOccurrence:(id)arg4 significantEventReason:(unsigned long long)arg5 confidenceLevel:(unsigned long long)arg6 heroFrameData:(id)arg7 offset:(double)arg8 homePresenceByPairingIdentity:(id)arg9 dataSource:(id)arg10;
-(id)createClipOperationForLocalZone:(id)arg1 targetFragmentDuration:(double)arg2 startDate:(id)arg3 dataSource:(id)arg4;
-(id)createFinalizeOperationForModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 dataSource:(id)arg4;

@end


@protocol HMDCameraRecordingUploaderDataSource;
@class NSString;

@interface HMDCameraRecordingUploaderFactory : NSObject <HMDCameraRecordingUploaderFactory> {

	id<HMDCameraRecordingUploaderDataSource> _dataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<HMDCameraRecordingUploaderDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id)init;
-(id<HMDCameraRecordingUploaderDataSource>)dataSource;
-(id)createVideoSegmentUploadOperationForModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 segmentData:(id)arg4 segmentMetadata:(id)arg5 dataSource:(id)arg6 ;
-(id)createPosterFrameUploadOperationForModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 segmentData:(id)arg4 segmentMetadata:(id)arg5 dataSource:(id)arg6 ;
-(id)createSignificantEventOperationForModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 dateOfOccurrence:(id)arg4 significantEventReason:(unsigned long long)arg5 confidenceLevel:(unsigned long long)arg6 heroFrameData:(id)arg7 offset:(double)arg8 homePresenceByPairingIdentity:(id)arg9 dataSource:(id)arg10 ;
-(id)createClipOperationForLocalZone:(id)arg1 targetFragmentDuration:(double)arg2 startDate:(id)arg3 dataSource:(id)arg4 ;
-(id)createFinalizeOperationForModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 dataSource:(id)arg4 ;
@end

