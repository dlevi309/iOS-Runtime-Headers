/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <UIKitCore/_UIRemoteViewController.h>

@protocol SLRemoteComposeViewControllerDelegateProtocol;
@interface SLRemoteComposeViewController : _UIRemoteViewController {

	id<SLRemoteComposeViewControllerDelegateProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<SLRemoteComposeViewControllerDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SLRemoteComposeViewControllerDelegateProtocol>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<SLRemoteComposeViewControllerDelegateProtocol>)arg1 ;
-(BOOL)_canShowWhileLocked;
@end

