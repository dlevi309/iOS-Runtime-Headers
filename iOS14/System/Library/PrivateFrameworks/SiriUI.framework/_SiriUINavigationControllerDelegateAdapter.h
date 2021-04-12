/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <UIKit/UINavigationControllerDelegate.h>

@protocol UINavigationControllerDelegate, SiriUINavigationTransitioning;
@class NSString;

@interface _SiriUINavigationControllerDelegateAdapter : NSObject <UINavigationControllerDelegate> {

	id<UINavigationControllerDelegate> _externalDelegate;
	id<SiriUINavigationTransitioning> _transitionController;

}

@property (assign,nonatomic,__weak) id<UINavigationControllerDelegate> externalDelegate;              //@synthesize externalDelegate=_externalDelegate - In the implementation block
@property (nonatomic,retain) id<SiriUINavigationTransitioning> transitionController;                  //@synthesize transitionController=_transitionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1 ;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)setTransitionController:(id<SiriUINavigationTransitioning>)arg1 ;
-(id<SiriUINavigationTransitioning>)transitionController;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id<UINavigationControllerDelegate>)externalDelegate;
-(void)setExternalDelegate:(id<UINavigationControllerDelegate>)arg1 ;
@end

