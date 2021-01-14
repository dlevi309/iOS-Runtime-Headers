/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BSAnimationSettings *)animationSettings;
-(void)setAnimationSettings:(BSAnimationSettings *)arg1 ;
-(void)_startAnimation;
-(void)_setHidden:(BOOL)arg1 ;
-(void)_prepareAnimation;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(BOOL)_shouldDismissBanner;
-(void)_cleanupAnimation;
-(id)_getTransitionWindow;
-(BOOL)_waitsForActivatingSceneContentAvailableIfNecessary;
-(BOOL)waitsForAppActivation;
-(void)setWaitsForAppActivation:(BOOL)arg1 ;
-(void)_showBlackView;
@end

