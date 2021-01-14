/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)scheduleSurrogateDeviceDiscovery;
-(void)stopDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)stopWiFiAndDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
@end

