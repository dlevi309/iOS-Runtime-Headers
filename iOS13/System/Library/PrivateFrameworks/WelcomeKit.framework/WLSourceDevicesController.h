/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
*/

#import <WelcomeKit/WLDaemonConnection.h>

@protocol WLSourceDevicesDelegate;
@interface WLSourceDevicesController : WLDaemonConnection {

	id<WLSourceDevicesDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WLSourceDevicesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<WLSourceDevicesDelegate>)delegate;
-(void)setDelegate:(id<WLSourceDevicesDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)startWiFiAndDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)stopDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)stopWiFiAndDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)attemptDirectConnectionToAddress:(id)arg1 ;
@end

