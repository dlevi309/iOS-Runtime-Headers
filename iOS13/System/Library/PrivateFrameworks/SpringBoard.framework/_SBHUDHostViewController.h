/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>
#import <libobjc.A.dylib/SBViewControllerTransitionContextDelegate.h>

@protocol _SBHUDHostViewControllerDelegate;
@class NSMutableArray, NSMutableSet, SBHUDController, NSSet, NSString;

@interface _SBHUDHostViewController : SBFTouchPassThroughViewController <SBViewControllerTransitionContextDelegate> {

	NSMutableArray* _activeTransitionContexts;
	NSMutableSet* _presentedHUDs;
	NSMutableSet* _presentingHUDs;
	NSMutableSet* _presentingHUDsTransitionContexts;
	NSMutableSet* _dismissingHUDsTransitionContexts;
	SBHUDController* _HUDController;
	id<_SBHUDHostViewControllerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) SBHUDController * HUDController;                          //@synthesize HUDController=_HUDController - In the implementation block
@property (assign,nonatomic,__weak) id<_SBHUDHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * presentedHUDs;                                           //@synthesize presentedHUDs=_presentedHUDs - In the implementation block
@property (nonatomic,readonly) NSSet * presentingHUDs;                                          //@synthesize presentingHUDs=_presentingHUDs - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfActiveTransitions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<_SBHUDHostViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_SBHUDHostViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)transitionDidFinish:(id)arg1 ;
-(SBHUDController *)HUDController;
-(void)dismissHUDs:(BOOL)arg1 ;
-(NSSet *)presentedHUDs;
-(NSSet *)presentingHUDs;
-(BOOL)isHUDBeingDismissed:(id)arg1 ;
-(void)reverseHUDDismissal:(id)arg1 ;
-(unsigned long long)numberOfActiveTransitions;
-(void)presentHUD:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isHUDBeingPresented:(id)arg1 ;
-(void)reverseHUDPresentation:(id)arg1 ;
-(void)dismissHUD:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithHUDController:(id)arg1 ;
-(id)_transitionContextMatchingHUD:(id)arg1 withinContainer:(id)arg2 ;
-(void)_executePresentNewHUD:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_executeDismissHUD:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_buildTransitionContextToPresentHUD:(id)arg1 dismissHUD:(id)arg2 animated:(BOOL)arg3 delegate:(id)arg4 containerView:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_executeViewControllerTransitionContext:(id)arg1 ;
-(id)knownHUDForIdentifier:(id)arg1 ;
@end

