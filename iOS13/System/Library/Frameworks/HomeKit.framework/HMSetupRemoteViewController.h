/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/HMSetupRemoteHost.h>

@protocol HMSetupRemoteHost;
@interface HMSetupRemoteViewController : _UIRemoteViewController <HMSetupRemoteHost> {

	id<HMSetupRemoteHost> _delegate;

}

@property (assign,nonatomic,__weak) id<HMSetupRemoteHost> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(id<HMSetupRemoteHost>)delegate;
-(void)setDelegate:(id<HMSetupRemoteHost>)arg1 ;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)accessorySetupDidFinishWithError:(id)arg1 ;
-(void)accessorySetupDidLoad;
-(void)accessorySetupDidFinishWithInfo:(id)arg1 error:(id)arg2 ;
-(void)accessorySetupDidBeginPairing;
-(void)accessorySetupDidFinishPairing;
@end

