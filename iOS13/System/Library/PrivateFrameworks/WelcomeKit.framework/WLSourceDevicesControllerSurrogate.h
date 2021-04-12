/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
*/

#import <WelcomeKit/WLSourceDevicesController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface WLSourceDevicesControllerSurrogate : WLSourceDevicesController {

	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _wifiStarted;
	NSString* _deviceDiscoverySession;

}
-(id)initWithDelegate:(id)arg1 ;
-(void)startWiFiAndDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)stopDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)stopWiFiAndDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
@end

