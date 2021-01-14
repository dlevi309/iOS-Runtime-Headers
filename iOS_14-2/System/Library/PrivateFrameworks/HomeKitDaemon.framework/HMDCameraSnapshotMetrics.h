/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)dealloc;
-(id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(BOOL)arg3 snapshotForNotification:(BOOL)arg4 ;
-(HMDCameraMetricsSnapshotLogEvent *)cameraSnapshotMetricsLogEvent;
@end

