/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
*/

#import <UIKitCore/_UIRemoteViewController.h>

@protocol ASORemoteViewControllerDelegate;
@interface ASORemoteViewController : _UIRemoteViewController {

	id<ASORemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ASORemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ASORemoteViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<ASORemoteViewControllerDelegate>)arg1 ;
@end

