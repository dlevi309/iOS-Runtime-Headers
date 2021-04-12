/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneLayerHostView.h>
#import <UIKit/UIExternalScenePairingObserverDelegate.h>

@protocol UIScenePresenter;
@class FBScene, NSString, UIExternalScenePairingObserver, UIScenePresentationManager;

@interface _UIExternalSceneLayerHostView : _UISceneLayerHostView <UIExternalScenePairingObserverDelegate> {

	FBScene* _parentScene;
	FBScene* _targetScene;
	NSString* _targetSceneID;
	UIExternalScenePairingObserver* _pairingObserver;
	UIScenePresentationManager* _presentationManager;
	id<UIScenePresenter> _presenter;

}

@property (nonatomic,readonly) FBScene * targetScene;               //@synthesize targetScene=_targetScene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateHostingState;
-(void)externalScenePairingObserver:(id)arg1 pairingsDidChange:(id)arg2 ;
-(id)initWithSceneLayer:(id)arg1 parentScene:(id)arg2 ;
-(FBScene *)targetScene;
-(void)setCurrentPresentationContext:(id)arg1 ;
-(void)dealloc;
-(void)_updateTargetScene;
@end

