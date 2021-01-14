/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBMainDisplaySceneLayoutViewController;

@interface SBSceneLayoutWhitePointAdaptationController : NSObject {

	SBMainDisplaySceneLayoutViewController* _sceneLayoutViewController;

}
+(id)sharedInstance;
+(BOOL)_isInteractiveUpdateEnabled;
+(id)_defaultAnimationSettings;
+(id)_harmonySettings;
+(double)_defaultAnimationDuration;
-(void)updateWhitePointAdaptationStrengthWithAnimationSettings:(id)arg1 ;
-(void)updateWhitePointAdaptationStrength;
-(id)init;
-(void)updateWhitePointAdaptationStrengthWithFromApplicationSceneEntities:(id)arg1 toApplicationSceneEntities:(id)arg2 fromPercentage:(double)arg3 toPercentage:(double)arg4 animationSettings:(id)arg5 interactive:(BOOL)arg6 ;
-(id)_whitePointAdaptivityStylesForLayoutState;
-(void)_updateWhitePointAdaptationStrengthWithAnimationSettings:(id)arg1 ;
-(long long)_whitePointAdaptivityStyleForLayoutElement:(id)arg1 ;
-(void)updateWhitePointAdaptationStrengthWithWorkspaceTransitionRequest:(id)arg1 animationTransitionContext:(id)arg2 ;
-(id)_applicationSceneHandleForLayoutElement:(id)arg1 ;
-(void)_updateWhitePointAdaptationStrengthWithFromApplicationScenes:(id)arg1 toApplicationScenes:(id)arg2 fromPercentage:(double)arg3 toPercentage:(double)arg4 animationSettings:(id)arg5 interactive:(BOOL)arg6 ;
-(id)_deviceSceneHandlesFromEntities:(id)arg1 ;
-(void)_updateWhitePointAdaptationStrengthWithWorkspaceTransitionRequest:(id)arg1 fromPercentage:(double)arg2 toPercentage:(double)arg3 animationSettings:(id)arg4 cancelled:(BOOL)arg5 interactive:(BOOL)arg6 ;
@end

