/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/

#import <UIKitCore/_UIRemoteViewController.h>

@protocol FPUIActionRemoteViewControllerDelegate;
@interface FPUIActionRemoteViewController : _UIRemoteViewController {

	id<FPUIActionRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FPUIActionRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<FPUIActionRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<FPUIActionRemoteViewControllerDelegate>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

