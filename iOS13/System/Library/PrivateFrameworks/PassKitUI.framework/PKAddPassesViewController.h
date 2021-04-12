/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PKAddPassesViewControllerDelegate;
@class NSArray, _UIAsyncInvocation, PKRemoteAddPassesViewController, PKAssertion;

@interface PKAddPassesViewController : UIViewController {

	BOOL _viewHasAppeared;
	BOOL _succeeded;
	unsigned long long _presentationSource;
	NSArray* _passDataArray;
	_UIAsyncInvocation* _viewServiceCancelRequest;
	PKRemoteAddPassesViewController* _remoteViewController;
	PKAssertion* _contactlessInterfaceAssertion;
	id<PKAddPassesViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<PKAddPassesViewControllerDelegate> delegate; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)canAddPasses;
-(void)dealloc;
-(id<PKAddPassesViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAddPassesViewControllerDelegate>)arg1 ;
-(void)viewWillLayoutSubviews;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(long long)preferredStatusBarStyle;
-(long long)modalPresentationStyle;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(long long)modalTransitionStyle;
-(BOOL)prefersStatusBarHidden;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(BOOL)succeeded;
-(void)_requestRemoteViewController;
-(id)initWithPass:(id)arg1 ;
-(id)initWithPasses:(id)arg1 presentationSource:(unsigned long long)arg2 ;
-(id)initWithPasses:(id)arg1 ;
-(void)_applyRemoteViewController:(id)arg1 ;
-(void)_ingestionDidFinishWithResult:(unsigned long long)arg1 ;
@end

