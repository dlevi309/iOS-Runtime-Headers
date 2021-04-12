/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextEffectsWindow.h>
#import <UIKitCore/_UIContextCustomBinding.h>
#import <UIKitCore/_UIScreenBasedObject.h>

@class NSDictionary, UIScreen, FBSSceneLayer, FBSScene, CAContext, _UIContextBinder, NSString;

@interface UIRemoteKeyboardWindow : UITextEffectsWindow <_UIContextCustomBinding, _UIScreenBasedObject> {

	NSDictionary* _perScreenOptions;
	UIScreen* _intendedScreen;
	BOOL _arePlaceholdersInitialised;
	FBSSceneLayer* _keyboardSceneLayer;
	FBSScene* _activeScene;
	BOOL _resetRequired;

}

@property (assign,setter=_setBoundContext:,nonatomic,__weak) CAContext * _boundContext; 
@property (assign,setter=_setContextBinder:,nonatomic,__weak) _UIContextBinder * _contextBinder; 
@property (nonatomic,readonly) SCD_Struct_UI37 _bindingDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) NSDictionary * _options; 
+(id)remoteKeyboardWindowForScreen:(id)arg1 create:(BOOL)arg2 ;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(double)_adjustedWindowLevelFromLevel:(double)arg1 ;
-(id)_initBasicWithScreen:(id)arg1 options:(id)arg2 ;
-(BOOL)_isFullscreen;
-(long long)_orientationInSceneSpace;
-(void)setWindowLevel:(double)arg1 ;
-(UIScreen *)_intendedScreen;
-(void)detachBindable;
-(void)resetScene;
-(BOOL)_usesWindowServerHitTesting;
-(id)_initWithScreen:(id)arg1 options:(id)arg2 ;
-(void)_resetScene;
-(BOOL)_canIgnoreInteractionEvents;
-(BOOL)_isWindowServerHostingManaged;
-(void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5 isRotating:(BOOL)arg6 ;
-(void)endDisablingInterfaceAutorotation;
-(id)_layerForCoordinateSpaceConversion;
-(void)attachBindable;
-(BOOL)_alwaysGetsContexts;
-(BOOL)_isTextEffectsWindowNotificationOwner;
-(BOOL)shouldDetachBindable;
-(BOOL)_wantsSceneAssociation;
-(BOOL)_matchingOptions:(id)arg1 ;
-(NSDictionary *)_options;
-(long long)_orientationForClassicPresentation;
-(BOOL)_isAlwaysKeyboardWindow;
-(BOOL)shouldAttachBindable;
-(BOOL)_isHostedInAnotherProcess;
-(void)invalidate;
-(void)dealloc;
@end

