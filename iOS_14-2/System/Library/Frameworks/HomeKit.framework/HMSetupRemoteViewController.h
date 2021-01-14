/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<HMSetupRemoteHost>)arg1 ;
-(void)viewDidLoad;
-(void)accessorySetupDidLoad;
-(void)accessorySetupDidFinishWithError:(id)arg1 ;
-(void)accessorySetupDidFinishWithInfo:(id)arg1 error:(id)arg2 ;
-(void)accessorySetupDidBeginPairing;
-(void)accessorySetupDidFinishPairing;
@end

