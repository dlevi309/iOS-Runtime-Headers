/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIScenePresentationBinder.h>

@class FBSDisplayConfiguration, UIRootSceneWindow, NSMutableSet, UIMutableTransformer;

@interface UIRootWindowScenePresentationBinder : UIScenePresentationBinder {

	FBSDisplayConfiguration* _displayConfiguration;
	UIRootSceneWindow* _rootSceneWindow;
	BOOL _shouldManageWindowLifecycle;
	NSMutableSet* _presentedScenes;

}

@property (nonatomic,readonly) UIMutableTransformer * sceneTransformer; 
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_rootView;
-(UIMutableTransformer *)sceneTransformer;
-(void)invalidate;
-(id)_initWithIdentifier:(id)arg1 priority:(long long)arg2 appearanceStyle:(unsigned long long)arg3 rootWindow:(id)arg4 ;
-(id)initWithIdentifier:(id)arg1 priority:(long long)arg2 appearanceStyle:(unsigned long long)arg3 rootWindow:(id)arg4 ;
-(id)initWithPriority:(long long)arg1 displayConfiguration:(id)arg2 ;
-(void)_noteWillStartPresentingScene:(id)arg1 ;
-(void)_noteDidStopPresentingScene:(id)arg1 ;
@end

