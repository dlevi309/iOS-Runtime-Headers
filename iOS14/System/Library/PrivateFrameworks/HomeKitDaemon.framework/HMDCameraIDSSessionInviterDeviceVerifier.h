/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString, HMDDevice;

@interface HMDCameraIDSSessionInviterDeviceVerifier : HMFObject {

	NSString* _sessionID;
	HMDDevice* _expectedInviter;

}

@property (readonly) NSString * sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) HMDDevice * expectedInviter;              //@synthesize expectedInviter=_expectedInviter - In the implementation block
-(NSString *)sessionID;
-(id)initWithSessionID:(id)arg1 expectedInviter:(id)arg2 ;
-(HMDDevice *)expectedInviter;
-(BOOL)canAcceptInvitationFromDeviceWithHandle:(id)arg1 forSessionWithIdentifier:(id)arg2 ;
@end

