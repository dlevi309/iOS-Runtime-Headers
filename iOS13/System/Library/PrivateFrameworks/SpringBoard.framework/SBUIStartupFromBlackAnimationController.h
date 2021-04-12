/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class BSAnimationSettings, UIView, SBSceneLayoutAnimationWrapperView;

@interface SBUIStartupFromBlackAnimationController : SBUIMainScreenAnimationController {

	BSAnimationSettings* _animationSettings;
	BOOL _waitsForAppActivation;
	UIView* _internalContainerView;
	UIView* _blackView;
	SBSceneLayoutAnimationWrapperView* _layoutWrapperView;

}

@property (nonatomic,retain) BSAnimationSettings * animationSettings;              //@synthesize animationSettings=_animationSettings - In the implementation block
@property (assign,nonatomic) BOOL waitsForAppActivation;                           //@synthesize waitsForAppActivation=_waitsForAppActivation - In the implementation block
-(void)_setHidden:(BOOL)arg1 ;
-(BSAnimationSettings *)animationSettings;
-(void)setAnimationSettings:(BSAnimationSettings *)arg1 ;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(id)_getTransitionWindow;
-(BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
-(BOOL)_shouldDismissBanner;
-(BOOL)waitsForAppActivation;
-(void)setWaitsForAppActivation:(BOOL)arg1 ;
-(void)_showBlackView;
@end

