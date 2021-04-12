/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIViewController.h>

@protocol SBLockOverlayViewControllerDelegate;
@interface SBLockOverlayViewController : UIViewController {

	id<SBLockOverlayViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldBeHidden; 
-(id<SBLockOverlayViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBLockOverlayViewControllerDelegate>)arg1 ;
-(id)overlayView;
-(BOOL)shouldBeHidden;
@end

