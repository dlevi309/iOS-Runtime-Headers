/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDCameraClipUploaderFactory.h>

@protocol HMDCameraClipUploaderFactory <NSObject>
@required
-(id)createAddSignificantEventOperationForClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4;
-(id)createUploadVideoSegmentOperationForModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5;
-(id)createUploadPosterFrameOperationForModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5;
-(id)createFinalizeClipOperationForModelID:(id)arg1 localZone:(id)arg2;
-(id)createCreateClipOperationForClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 targetFragmentDuration:(double)arg5 clipStartDate:(id)arg6 encryptionManager:(id)arg7;

@end


@class NSString;

@interface HMDCameraClipUploaderFactory : NSObject <HMDCameraClipUploaderFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createAddSignificantEventOperationForClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 ;
-(id)createUploadVideoSegmentOperationForModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5 ;
-(id)createUploadPosterFrameOperationForModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5 ;
-(id)createFinalizeClipOperationForModelID:(id)arg1 localZone:(id)arg2 ;
-(id)createCreateClipOperationForClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 targetFragmentDuration:(double)arg5 clipStartDate:(id)arg6 encryptionManager:(id)arg7 ;
@end

