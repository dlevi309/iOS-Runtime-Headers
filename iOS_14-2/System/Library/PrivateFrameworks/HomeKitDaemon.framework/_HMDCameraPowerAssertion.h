/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDCameraPowerAssertionHandler, HMDCameraSessionID;

@interface _HMDCameraPowerAssertion : HMFObject {

	HMDCameraPowerAssertionHandler* _assertionHandler;
	HMDCameraSessionID* _remoteRequestHandlerSessionID;

}

@property (nonatomic,__weak,readonly) HMDCameraPowerAssertionHandler * assertionHandler;              //@synthesize assertionHandler=_assertionHandler - In the implementation block
@property (nonatomic,readonly) HMDCameraSessionID * remoteRequestHandlerSessionID;                    //@synthesize remoteRequestHandlerSessionID=_remoteRequestHandlerSessionID - In the implementation block
-(void)dealloc;
-(HMDCameraPowerAssertionHandler *)assertionHandler;
-(HMDCameraSessionID *)remoteRequestHandlerSessionID;
-(id)initWithPowerAssertionHandler:(id)arg1 remoteRequestHandlerSessionID:(id)arg2 ;
@end

