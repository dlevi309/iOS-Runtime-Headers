/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol HMFLocking;
@interface HMDDeviceSetupManager : HMFObject {

	id<HMFLocking> _lock;
	int _proxSetupNotificationToken;
	BOOL _running;

}

@property (getter=isRunning,readonly) BOOL running;              //@synthesize running=_running - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(BOOL)isRunning;
-(void)stopAdvertising;
-(id)followUpController;
-(void)startAdvertising;
@end

