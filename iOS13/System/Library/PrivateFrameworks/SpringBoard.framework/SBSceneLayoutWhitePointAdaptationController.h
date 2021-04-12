/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBMainDisplaySceneLayoutViewController;

@interface SBSceneLayoutWhitePointAdaptationController : NSObject {

	SBMainDisplaySceneLayoutViewController* _sceneLayoutViewController;

}
+(id)sharedInstance;
+(double)_defaultAnimationDuration;
+(id)_defaultAnimationSettings;
+(BOOL)_isInteractiveUpdateEnabled;
+(id)_harmonySettings;
-(id)init;
-(void)updateWhitePointAdaptationStrengthWithAnimationSettings:(id)arg1 ;
-(void)updateWhitePointAdaptationStrength;
-(void)_updateWhitePointAdaptationStrengthWithAnimationSettings:(id)arg1 ;
-(id)_deviceSceneHandlesFromEntities:(id)arg1 ;
-(void)_updateWhitePointAdaptationStrengthWithFromApplicationScenes:(id)arg1 toApplicationScenes:(id)arg2 fromPercentage:(double)arg3 toPercentage:(double)arg4 animationSettings:(id)arg5 interactive:(BOOL)arg6 ;
-(void)_updateWhitePointAdaptationStrengthWithWorkspaceTransitionRequest:(id)arg1 fromPercentage:(double)arg2 toPercentage:(double)arg3 animationSettings:(id)arg4 cancelled:(BOOL)arg5 interactive:(BOOL)arg6 ;
-(id)_whitePointAdaptivityStylesForLayoutState;
-(long long)_whitePointAdaptivityStyleForLayoutElement:(id)arg1 ;
-(id)_applicationSceneHandleForLayoutElement:(id)arg1 ;
-(void)updateWhitePointAdaptationStrengthWithFromApplicationSceneEntities:(id)arg1 toApplicationSceneEntities:(id)arg2 fromPercentage:(double)arg3 toPercentage:(double)arg4 animationSettings:(id)arg5 interactive:(BOOL)arg6 ;
-(void)updateWhitePointAdaptationStrengthWithWorkspaceTransitionRequest:(id)arg1 animationTransitionContext:(id)arg2 ;
@end

