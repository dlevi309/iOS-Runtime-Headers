/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>

@class UIViewController, UINavigationController;

@interface UISnapshotModalViewController : UIViewController {

	long long _interfaceOrientation;
	UIViewController* _disappearingViewController;
	UINavigationController* _parentController;

}

@property (nonatomic,retain) UIViewController * disappearingViewController;              //@synthesize disappearingViewController=_disappearingViewController - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIViewController *)disappearingViewController;
-(id)initWithInterfaceOrientation:(long long)arg1 ;
-(void)setDisappearingViewController:(UIViewController *)arg1 ;
@end

