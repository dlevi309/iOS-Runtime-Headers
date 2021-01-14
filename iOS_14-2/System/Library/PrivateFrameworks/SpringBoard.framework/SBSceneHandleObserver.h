/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBSceneHandleObserver <NSObject>
@optional
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
-(void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
-(void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;
-(void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
-(void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
-(void)sceneHandle:(id)arg1 didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg2;

@end

