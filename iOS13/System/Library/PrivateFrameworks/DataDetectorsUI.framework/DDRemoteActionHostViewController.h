/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <UIKitCore/_UIRemoteViewController.h>

@protocol DDRemoteActionHostViewControllerDelegate;
@interface DDRemoteActionHostViewController : _UIRemoteViewController {

	id<DDRemoteActionHostViewControllerDelegate> _delegate;

}

@property (__weak) id<DDRemoteActionHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<DDRemoteActionHostViewControllerDelegate>)delegate;
-(void)setDelegate:(id<DDRemoteActionHostViewControllerDelegate>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

