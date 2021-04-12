/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIViewController.h>

@protocol SBLockOverlayViewControllerDelegate;
@interface SBLockOverlayViewController : UIViewController {

	id<SBLockOverlayViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldBeHidden; 
-(id)overlayView;
-(id<SBLockOverlayViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBLockOverlayViewControllerDelegate>)arg1 ;
-(BOOL)shouldBeHidden;
@end

