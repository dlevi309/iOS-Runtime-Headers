/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HMDCameraStreamSessionID *)streamSessionID;
-(void)dealloc;
-(HMDCameraStreamTracker *)streamTracker;
-(id)initWithStreamTracker:(id)arg1 streamIdentifier:(id)arg2 ;
@end

