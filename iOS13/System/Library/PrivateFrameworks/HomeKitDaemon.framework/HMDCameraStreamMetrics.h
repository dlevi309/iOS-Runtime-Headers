/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDCameraMetricsStreamLogEvent, NSError;

@interface HMDCameraStreamMetrics : HMFObject {

	HMDCameraMetricsStreamLogEvent* _cameraStreamMetricsLogEvent;
	NSError* _error;

}

@property (nonatomic,readonly) HMDCameraMetricsStreamLogEvent * cameraStreamMetricsLogEvent;              //@synthesize cameraStreamMetricsLogEvent=_cameraStreamMetricsLogEvent - In the implementation block
@property (nonatomic,retain) NSError * error;                                                             //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(BOOL)arg3 ;
-(HMDCameraMetricsStreamLogEvent *)cameraStreamMetricsLogEvent;
@end

