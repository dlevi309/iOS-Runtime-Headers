/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic,__weak) id<PKAddPassesViewControllerDelegate> delegate; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)canAddPasses;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)viewWillLayoutSubviews;
-(BOOL)succeeded;
-(long long)modalTransitionStyle;
-(id<PKAddPassesViewControllerDelegate>)delegate;
-(void)_requestRemoteViewController;
-(long long)modalPresentationStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)setDelegate:(id<PKAddPassesViewControllerDelegate>)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(BOOL)shouldAutorotate;
-(long long)preferredStatusBarStyle;
-(id)initWithPasses:(id)arg1 ;
-(void)_applyRemoteViewController:(id)arg1 ;
-(void)_ingestionDidFinishWithResult:(unsigned long long)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(id)initWithPass:(id)arg1 ;
-(id)initWithPasses:(id)arg1 presentationSource:(unsigned long long)arg2 ;
-(void)dealloc;
@end

