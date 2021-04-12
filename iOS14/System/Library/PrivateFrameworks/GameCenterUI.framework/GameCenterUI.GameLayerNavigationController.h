/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@interface GameCenterUI.GameLayerNavigationController : UINavigationController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate> {

	 doneButton;

}

@property (assign,nonatomic) CGSize preferredContentSize; 
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)didTapDone;
-(BOOL)_requiresCustomPresentationController;
-(id)initWithRootViewController:(id)arg1 ;
-(CGSize)preferredContentSize;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

