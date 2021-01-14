/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <UIKitCore/_UIRemoteViewController.h>

@protocol DDRemoteActionHostViewControllerDelegate;
@interface DDRemoteActionHostViewController : _UIRemoteViewController {

	id<DDRemoteActionHostViewControllerDelegate> _delegate;

}

@property (__weak) id<DDRemoteActionHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<DDRemoteActionHostViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<DDRemoteActionHostViewControllerDelegate>)arg1 ;
@end

