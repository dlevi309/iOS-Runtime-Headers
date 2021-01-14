/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilityTextSizeModule.bundle/AccessibilityTextSizeModule
*/

#import <AccessibilityTextSizeModule/AccessibilityTextSizeModule-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AXCCIconViewControllerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>
#import <libobjc.A.dylib/CCUITouchContinuationProviding.h>

@protocol AXCCTextSizeModuleViewControllerDelegate;
@class UIViewPropertyAnimator, AXCCTextSizeDetailViewController, AXCCIconViewController, NSString;

@interface AXCCTextSizeModuleViewController : UIViewController <AXCCIconViewControllerDelegate, CCUIContentModuleContentViewController, CCUITouchContinuationProviding> {

	AXCCTextSizeDetailViewController* _detailController;
	AXCCIconViewController* _iconController;
	BOOL _expanded;
	id<AXCCTextSizeModuleViewControllerDelegate> _textSizeDelegate;

}

@property (assign,nonatomic,__weak) id<AXCCTextSizeModuleViewControllerDelegate> textSizeDelegate;              //@synthesize textSizeDelegate=_textSizeDelegate - In the implementation block
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
@property (nonatomic,readonly) BOOL shouldPerformClickInteraction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(id)viewForTouchContinuation;
-(double)preferredExpandedContentHeight;
-(double)preferredExpandedContinuousCornerRadius;
-(double)preferredExpandedContentWidth;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setTextSizeDelegate:(id<AXCCTextSizeModuleViewControllerDelegate>)arg1 ;
-(id<AXCCTextSizeModuleViewControllerDelegate>)textSizeDelegate;
-(void)iconViewWasTapped:(id)arg1 ;
@end

