/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
*/

#import <WelcomeKit/WLDaemonConnection.h>

@protocol WLSourceDevicesDelegate;
@interface WLSourceDevicesController : WLDaemonConnection {

	id<WLSourceDevicesDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WLSourceDevicesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<WLSourceDevicesDelegate>)delegate;
-(void)setDelegate:(id<WLSourceDevicesDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)dealloc;
-(void)startWiFiAndDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)stopDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)stopWiFiAndDeviceDiscoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)attemptDirectConnectionToAddress:(id)arg1 ;
@end

