/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/HearingAidsModule.bundle/HearingAidsModule
*/

#import <HearingAidsModule/HearingAidsModule-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HACCIconViewControllerDelegate.h>
#import <libobjc.A.dylib/AXHAShortcutUpdateProtocol.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@class UIViewPropertyAnimator, HACCShortcutViewController, HACCIconViewController, NSString;

@interface HACCModuleViewController : UIViewController <HACCIconViewControllerDelegate, AXHAShortcutUpdateProtocol, CCUIContentModuleContentViewController> {

	HACCShortcutViewController* _shortcutController;
	HACCIconViewController* _iconController;
	BOOL _expanded;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
-(id)init;
-(id)firstResponder;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(double)preferredExpandedContentHeight;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(BOOL)canDismissPresentedContent;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setContentModuleContext:(id)arg1 ;
-(id)shortcutViewController;
-(void)haccIconButtonTapped;
-(void)shortcutDidChangeSize:(id)arg1 ;
@end

