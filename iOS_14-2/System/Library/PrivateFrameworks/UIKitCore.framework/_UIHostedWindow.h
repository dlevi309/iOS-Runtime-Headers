/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindow.h>

@protocol _UIHostedWindowDelegate;
@class UIColor, UITraitCollection, _UIHostedWindowHostingHandle;

@interface _UIHostedWindow : UIWindow {

	BOOL _wantsTraitPropagation;
	BOOL __hostViewUnderlapsStatusBar;
	long long _hostTintAdjustmentMode;
	UIColor* __hostTintColor;
	UITraitCollection* _hostTraitCollection;
	id<_UIHostedWindowDelegate> __hostedWindowDelegate;

}

@property (assign,setter=_setHostTintAdjustmentMode:,nonatomic) long long _hostTintAdjustmentMode;                  //@synthesize hostTintAdjustmentMode=_hostTintAdjustmentMode - In the implementation block
@property (setter=_setHostTraitCollection:,nonatomic,retain) UITraitCollection * _hostTraitCollection;              //@synthesize hostTraitCollection=_hostTraitCollection - In the implementation block
@property (assign,setter=_setWantsTraitPropagation:,nonatomic) BOOL _wantsTraitPropagation;                         //@synthesize wantsTraitPropagation=_wantsTraitPropagation - In the implementation block
@property (setter=_setHostTintColor:,nonatomic,retain) UIColor * _hostTintColor;                                    //@synthesize _hostTintColor=__hostTintColor - In the implementation block
@property (assign,nonatomic,__weak) id<_UIHostedWindowDelegate> _hostedWindowDelegate;                              //@synthesize _hostedWindowDelegate=__hostedWindowDelegate - In the implementation block
@property (nonatomic,readonly) _UIHostedWindowHostingHandle * hostingHandle; 
-(long long)_orientationForSceneTransform;
-(long long)_defaultTintAdjustmentMode;
-(void)_configureContextOptions:(id)arg1 ;
-(_UIHostedWindowHostingHandle *)hostingHandle;
-(long long)_orientationForRootTransform;
-(BOOL)_updatesSafeAreaInsetsOnRead;
-(BOOL)_needsShakesWhenInactive;
-(long long)_orientationForViewTransform;
-(BOOL)_extendsScreenSceneLifetime;
-(void)__setHostViewUnderlapsStatusBar:(BOOL)arg1 ;
-(BOOL)_usesWindowServerHitTesting;
-(id)_traitCollectionForSize:(CGSize)arg1 parentCollection:(id)arg2 ;
-(BOOL)_isWindowServerHostingManaged;
-(BOOL)_shouldPropagateTraitCollectionChanges;
-(long long)_hostTintAdjustmentMode;
-(void)_setHostTintColor:(id)arg1 ;
-(id<_UIHostedWindowDelegate>)_hostedWindowDelegate;
-(UIColor *)_hostTintColor;
-(void)_didCreateRootPresentationController;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_normalInheritedTintColor;
-(BOOL)_preventsRootPresentationController;
-(void)_updateWindowTraitsAndNotify:(BOOL)arg1 ;
-(void)_unregisterScrollToTopView:(id)arg1 ;
-(UITraitCollection *)_hostTraitCollection;
-(void)_setHostTintAdjustmentMode:(long long)arg1 ;
-(BOOL)_allowsLinkPreviewInteractionInViewServices;
-(unsigned)contextID;
-(void)_didMoveFromScreen:(id)arg1 toScreen:(id)arg2 ;
-(BOOL)_canPromoteFromKeyWindowStack;
-(void)_setWantsTraitPropagation:(BOOL)arg1 ;
-(void)_registerScrollToTopView:(id)arg1 ;
-(void)didSetResponderTargetForCalloutBar:(id)arg1 ;
-(void)_setHostTraitCollection:(id)arg1 ;
-(void)set_hostedWindowDelegate:(id<_UIHostedWindowDelegate>)arg1 ;
-(BOOL)__hostViewUnderlapsStatusBar;
-(void)_setFirstResponder:(id)arg1 ;
-(BOOL)_wantsTraitPropagation;
-(void)dealloc;
@end

