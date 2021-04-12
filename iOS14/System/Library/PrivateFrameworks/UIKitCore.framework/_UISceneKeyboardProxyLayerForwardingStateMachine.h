/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIScenePresentationViewObserver.h>
#import <UIKitCore/_UIWindowLevelObserver.h>

@class FBScene, FBSSceneIdentityToken, _UIScenePresenter, FBSScene, UIWindow, NSSet, NSString;

@interface _UISceneKeyboardProxyLayerForwardingStateMachine : NSObject <_UIScenePresentationViewObserver, _UIWindowLevelObserver> {

	FBScene* _scene;
	FBSSceneIdentityToken* _identityToken;
	unsigned long long _state;
	id _windowCanvasChangedNotificationToken;
	_UIScenePresenter* _prioritizedPresenter;
	FBSScene* _hostingScene;
	UIWindow* _hostingWindow;
	NSSet* _keyboardLayersTracked;
	NSSet* _keyboardLayersAddedToHostingScene;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(unsigned long long)_state;
-(void)_setState:(unsigned long long)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(void)_noteHostedInWindow:(id)arg1 ;
-(void)_removeLayers:(id)arg1 fromScene:(id)arg2 ;
-(void)_addLayers:(id)arg1 toScene:(id)arg2 ;
-(void)presentationView:(id)arg1 didMoveToWindow:(id)arg2 ;
-(void)window:(id)arg1 changedFromLevel:(double)arg2 toLevel:(double)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)notePriorizedPresenter:(id)arg1 ;
-(void)noteKeyboardLayersBeingTracked:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(id)_newProxyLayers;
@end

