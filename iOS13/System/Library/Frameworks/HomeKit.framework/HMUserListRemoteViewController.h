/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/HMUserManagementRemoteHost.h>

@protocol HMUserManagementRemoteHost;
@interface HMUserListRemoteViewController : _UIRemoteViewController <HMUserManagementRemoteHost> {

	id<HMUserManagementRemoteHost> _delegate;

}

@property (assign,nonatomic,__weak) id<HMUserManagementRemoteHost> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(id<HMUserManagementRemoteHost>)delegate;
-(void)setDelegate:(id<HMUserManagementRemoteHost>)arg1 ;
-(void)viewDidLoad;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)userManagementDidFinishWithError:(id)arg1 ;
-(void)userManagementDidLoad;
@end

