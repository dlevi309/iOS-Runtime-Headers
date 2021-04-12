/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDCameraStreamTracker, HMDCameraStreamSessionID;

@interface _HMDCameraStreamTrackerAssertion : HMFObject {

	HMDCameraStreamTracker* _streamTracker;
	HMDCameraStreamSessionID* _streamSessionID;

}

@property (nonatomic,__weak,readonly) HMDCameraStreamTracker * streamTracker;              //@synthesize streamTracker=_streamTracker - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamSessionID * streamSessionID;                 //@synthesize streamSessionID=_streamSessionID - In the implementation block
-(void)dealloc;
-(HMDCameraStreamSessionID *)streamSessionID;
-(HMDCameraStreamTracker *)streamTracker;
-(id)initWithStreamTracker:(id)arg1 streamIdentifier:(id)arg2 ;
@end

