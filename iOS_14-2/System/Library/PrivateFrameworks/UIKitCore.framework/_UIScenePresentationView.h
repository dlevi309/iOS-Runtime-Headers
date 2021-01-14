/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVisibilityPropagationView.h>
#import <libobjc.A.dylib/FBSceneObserver.h>
#import <UIKitCore/_UISceneLayerHostContainerViewDataSource.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <UIKit/UIScenePresentation.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class _UIScenePresenter, FBScene, FBSSceneSettings, UIScenePresentationContext, _UISceneLayerHostContainerView, FBSSceneSettingsDiffInspector, NSHashTable, NSString;

@interface _UIScenePresentationView : _UIVisibilityPropagationView <FBSceneObserver, _UISceneLayerHostContainerViewDataSource, BSDescriptionProviding, UIScenePresentation, BSInvalidatable> {

	_UIScenePresenter* _presenter;
	FBScene* _scene;
	FBSSceneSettings* _effectiveSettings;
	UIScenePresentationContext* _currentPresentationContext;
	_UISceneLayerHostContainerView* _hostContainerView;
	FBSSceneSettingsDiffInspector* _geometrySettingsDiffInspector;
	NSHashTable* _observers;
	BOOL _invalidated;

}

@property (nonatomic,retain) UIScenePresentationContext * currentPresentationContext;              //@synthesize currentPresentationContext=_currentPresentationContext - In the implementation block
@property (nonatomic,retain) _UISceneLayerHostContainerView * hostContainerView;                   //@synthesize hostContainerView=_hostContainerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<UIScenePresenter> presenter; 
-(void)_updateBackgroundColor;
-(id)succinctDescription;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(void)addObserver:(id)arg1 ;
-(void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_geometryDidUpdateWithTransitionContext:(id)arg1 ;
-(NSString *)debugDescription;
-(void)setHostContainerView:(_UISceneLayerHostContainerView *)arg1 ;
-(UIScenePresentationContext *)currentPresentationContext;
-(id)presentationContextForSceneLayerHostContainerView;
-(id<UIScenePresenter>)presenter;
-(_UISceneLayerHostContainerView *)hostContainerView;
-(NSString *)description;
-(void)didMoveToWindow;
-(void)removeObserver:(id)arg1 ;
-(void)_updateFrameAndTransform;
-(void)invalidate;
-(void)_updatePresentationContextFrom:(id)arg1 toContext:(id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)setCurrentPresentationContext:(UIScenePresentationContext *)arg1 ;
-(id)initWithPresenter:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
@end

