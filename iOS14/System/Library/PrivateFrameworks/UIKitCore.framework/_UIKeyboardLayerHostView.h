/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneLayerHostView.h>
#import <libobjc.A.dylib/FBSceneObserver.h>

@protocol BSInvalidatable, UIScenePresenter;
@class FBScene, FBSSceneClientSettingsDiffInspector, FBSSceneIdentityToken, NSString;

@interface _UIKeyboardLayerHostView : _UISceneLayerHostView <FBSceneObserver> {

	/*^block*/id _sceneLayerMatchingPredicate;
	FBScene* _owningScene;
	FBScene* _keyboardScene;
	id<BSInvalidatable> _keyboardSceneAvailabilityObserver;
	FBSSceneClientSettingsDiffInspector* _keyboardSceneClientSettingsDiffInspector;
	FBSSceneIdentityToken* _keyboardPreferredHostIdentity;
	BOOL _isPaired;
	id<UIScenePresenter> _presenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(id)initWithKeyboardProxyLayer:(id)arg1 owningScene:(id)arg2 ;
-(void)_setKeyboardScene:(id)arg1 ;
-(id)initWithKeyboardLayer:(id)arg1 owningScene:(id)arg2 ;
-(id)_initWithLayer:(id)arg1 owningScene:(id)arg2 keyboardMatchingPredicate:(/*^block*/id)arg3 ;
-(void)setCurrentPresentationContext:(id)arg1 ;
-(void)_updatePairingState;
-(void)dealloc;
@end

