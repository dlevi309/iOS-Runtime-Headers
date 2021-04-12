/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _pausedSoundRecognition;

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
@property (nonatomic,readonly) BOOL shouldPerformClickInteraction; 
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillLayoutSubviews;
-(BOOL)canDismissPresentedContent;
-(id)init;
-(void)setContentModuleContext:(id)arg1 ;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(double)preferredExpandedContentHeight;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)firstResponder;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)shortcutDidChangeSize:(id)arg1 ;
-(id)shortcutViewController;
-(void)pauseSoundRecognitionIfNecessary;
-(void)restartSoundRecognitionIfNecessary;
-(void)haccIconButtonTapped;
@end

