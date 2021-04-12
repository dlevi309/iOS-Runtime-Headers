/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDCameraRecordingSessionFactory.h>

@protocol HMDCameraRecordingSessionFactory <NSObject>
@property (readonly) double maximumClipDuration; 
@property (readonly) double recordingExtensionDuration; 
@required
-(double)maximumClipDuration;
-(id)createVideoAnalyzerWithConfiguration:(id)arg1 identifier:(id)arg2;
-(id)createSignificantEventManagerWithWorkQueue:(id)arg1 faceClassificationResolver:(id)arg2 logIdentifier:(id)arg3;
-(id)createUploaderWithClipUUID:(id)arg1 startDate:(id)arg2 targetFragmentDuration:(double)arg3 localZone:(id)arg4 workQueue:(id)arg5 logIdentifier:(id)arg6;
-(BOOL)isVideoInitData:(id)arg1 combinableWithVideoInitData:(id)arg2;
-(double)recordingExtensionDuration;

@end


@class NSString;

@interface HMDCameraRecordingSessionFactory : HMFObject <HMDCameraRecordingSessionFactory>

@property (readonly) double maximumClipDuration; 
@property (readonly) double recordingExtensionDuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)maximumClipDuration;
-(id)createVideoAnalyzerWithConfiguration:(id)arg1 identifier:(id)arg2 ;
-(id)createSignificantEventManagerWithWorkQueue:(id)arg1 faceClassificationResolver:(id)arg2 logIdentifier:(id)arg3 ;
-(id)createUploaderWithClipUUID:(id)arg1 startDate:(id)arg2 targetFragmentDuration:(double)arg3 localZone:(id)arg4 workQueue:(id)arg5 logIdentifier:(id)arg6 ;
-(BOOL)isVideoInitData:(id)arg1 combinableWithVideoInitData:(id)arg2 ;
-(double)recordingExtensionDuration;
@end

