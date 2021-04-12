/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDCameraSessionID, HMDDevice;

@interface HMDCameraIDSSessionInviterDeviceVerifier : HMFObject {

	HMDCameraSessionID* _session;
	HMDDevice* _expectedInviter;

}

@property (nonatomic,readonly) HMDCameraSessionID * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) HMDDevice * expectedInviter;               //@synthesize expectedInviter=_expectedInviter - In the implementation block
-(HMDCameraSessionID *)session;
-(id)initWithSession:(id)arg1 expectedInviter:(id)arg2 ;
-(HMDDevice *)expectedInviter;
-(BOOL)canAcceptInvitationFromDeviceWithHandle:(id)arg1 forSessionWithIdentifier:(id)arg2 ;
@end

