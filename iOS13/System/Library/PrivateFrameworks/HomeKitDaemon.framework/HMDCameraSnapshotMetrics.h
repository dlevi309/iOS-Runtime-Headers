/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDCameraMetricsSnapshotLogEvent, NSError;

@interface HMDCameraSnapshotMetrics : HMFObject {

	HMDCameraMetricsSnapshotLogEvent* _cameraSnapshotMetricsLogEvent;
	NSError* _error;

}

@property (nonatomic,readonly) HMDCameraMetricsSnapshotLogEvent * cameraSnapshotMetricsLogEvent;              //@synthesize cameraSnapshotMetricsLogEvent=_cameraSnapshotMetricsLogEvent - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                 //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(BOOL)arg3 snapshotForNotification:(BOOL)arg4 ;
-(HMDCameraMetricsSnapshotLogEvent *)cameraSnapshotMetricsLogEvent;
@end

