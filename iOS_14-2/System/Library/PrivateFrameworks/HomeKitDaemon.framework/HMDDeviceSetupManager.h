/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)stopAdvertising;
-(id)init;
-(id)followUpController;
-(BOOL)isRunning;
-(void)startAdvertising;
-(void)dealloc;
@end

