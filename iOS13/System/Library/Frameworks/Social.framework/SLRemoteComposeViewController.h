/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <UIKitCore/_UIRemoteViewController.h>

@protocol SLRemoteComposeViewControllerDelegateProtocol;
@interface SLRemoteComposeViewController : _UIRemoteViewController {

	id<SLRemoteComposeViewControllerDelegateProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<SLRemoteComposeViewControllerDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SLRemoteComposeViewControllerDelegateProtocol>)delegate;
-(void)setDelegate:(id<SLRemoteComposeViewControllerDelegateProtocol>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

