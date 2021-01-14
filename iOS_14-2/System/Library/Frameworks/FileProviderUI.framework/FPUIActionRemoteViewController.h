/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<FPUIActionRemoteViewControllerDelegate>)arg1 ;
@end

