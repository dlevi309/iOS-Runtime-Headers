/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAutoRotatingWindow.h>
#import <UIKitCore/_UICanvasBasedObject.h>

@class NSDictionary, UIWindowScene, UIEditingOverlayViewController, NSLayoutConstraint, NSString;

@interface UITextEffectsWindow : UIAutoRotatingWindow <_UICanvasBasedObject> {

	BOOL _inDealloc;
	unsigned long long _activeEffectsCount;
	BOOL _isFullscreen;
	double _defaultWindowLevel;
	CGPoint _hostedWindowOffset;
	NSDictionary* _perCanvasOptions;
	UIWindowScene* __intendedWindowScene;
	unsigned long long _activeRemoteViewCount;
	unsigned long long _windowLevelCount;
	double _windowLevelStack[5];
	CGSize _hostedSceneSize;
	BOOL _manualHostingOverride;
	UIEditingOverlayViewController* _editingOverlayViewController;
	NSLayoutConstraint* _bottomConstraint;
	UIEdgeInsets _hostedSafeInsets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) UIWindowScene * _intendedCanvas; 
@property (readonly) NSDictionary * _options; 
@property (nonatomic,readonly) UIEditingOverlayViewController * editingOverlayViewController;              //@synthesize editingOverlayViewController=_editingOverlayViewController - In the implementation block
@property (readonly) unsigned contextID; 
@property (nonatomic,readonly) BOOL isFullscreen;                                                          //@synthesize isFullscreen=_isFullscreen - In the implementation block
@property (assign,nonatomic) double defaultWindowLevel;                                                    //@synthesize defaultWindowLevel=_defaultWindowLevel - In the implementation block
@property (assign,nonatomic) CGPoint hostedWindowOffset;                                                   //@synthesize hostedWindowOffset=_hostedWindowOffset - In the implementation block
@property (nonatomic,readonly) CGRect hostedFrame; 
@property (assign,nonatomic) CGSize hostedSceneSize;                                                       //@synthesize hostedSceneSize=_hostedSceneSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hostedSafeInsets;                                                //@synthesize hostedSafeInsets=_hostedSafeInsets - In the implementation block
+(id)sharedTextEffectsWindowForWindowScene:(id)arg1 ;
+(id)activeTextEffectsWindowForWindowScene:(id)arg1 ;
+(BOOL)_isSecure;
+(BOOL)_shouldSoftAssertOnSetScreen;
+(id)_sharedTextEffectsWindowforWindowScene:(id)arg1 allowHosted:(BOOL)arg2 matchesStatusBarOrientationOnAccess:(BOOL)arg3 shouldCreateIfNecessary:(BOOL)arg4 ;
+(id)sharedTextEffectsWindowForScreen:(id)arg1 ;
+(id)_canvasForScreen:(id)arg1 ;
+(id)sharedTextEffectsWindow;
+(id)sharedTextEffectsWindowForCanvas:(id)arg1 ;
+(id)activeTextEffectsWindowForCanvas:(id)arg1 ;
+(id)activeTextEffectsWindowForScreen:(id)arg1 ;
+(id)sharedTextEffectsWindowAboveStatusBar;
+(void)releaseSharedInstances;
+(void)raiseTextEffectsWindowsForShowNotificationCenter;
+(void)lowerTextEffectsWindowsForHideNotificationCenter;
-(void)dealloc;
-(NSDictionary *)_options;
-(unsigned)contextID;
-(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)interfaceOrientation;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toWindow:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromWindow:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromWindow:(id)arg2 ;
-(BOOL)_isTextEffectsWindow;
-(void)sendSubviewToBack:(id)arg1 ;
-(void)_sceneBoundsDidChange;
-(BOOL)_isFullscreen;
-(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
-(void)bringSubviewToFront:(id)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)_didRemoveSubview:(id)arg1 ;
-(void)_updateTransformLayer;
-(BOOL)_extendsScreenSceneLifetime;
-(void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2 ;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg1 ;
-(BOOL)_canAffectStatusBarAppearance;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)isInternalWindow;
-(void)_setWindowLevel:(double)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toWindow:(id)arg2 ;
-(id)_initWithFrame:(CGRect)arg1 attached:(BOOL)arg2 ;
-(void)_createSystemGestureGateGestureRecognizerIfNeeded;
-(CGRect)_sceneReferenceBounds;
-(CGRect)actualSceneBounds;
-(BOOL)_matchingOptions:(id)arg1 ;
-(CGRect)actualSceneFrame;
-(id)_inputWindowController;
-(void)_sortSubviewsOfView:(id)arg1 ;
-(void)updateForOrientation:(long long)arg1 ;
-(UIEdgeInsets)hostedSafeInsets;
-(CGRect)actualSceneBoundsForLandscape:(BOOL)arg1 ;
-(BOOL)_shouldTextEffectsWindowBeHostedForView:(id)arg1 ;
-(id)aboveStatusBarWindow;
-(CGRect)hostedFrame;
-(id)_initWithCanvas:(id)arg1 options:(id)arg2 ;
-(UIWindowScene *)_intendedCanvas;
-(void)_matchDeviceOrientation;
-(id)_initWithFrame:(CGRect)arg1 debugName:(id)arg2 windowScene:(id)arg3 ;
-(void)_commonInitWithOptions:(id)arg1 ;
-(void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
-(CGRect)_sceneBounds;
-(void)_willSnapshot;
-(void)_didSnapshot;
-(void)_configureContextOptions:(id)arg1 ;
-(BOOL)_shouldInstallRootPresentationController;
-(CGRect)_usableSceneBounds;
-(BOOL)_shouldResizeWithScene;
-(CGPoint)hostedWindowOffset;
-(void)updateEditingOverlayContainer;
-(CGSize)hostedSceneSize;
-(void)addBottomPadding:(double)arg1 ;
-(id)_initBasicWithCanvas:(id)arg1 options:(id)arg2 ;
-(double)defaultWindowLevel;
-(BOOL)isFullscreen;
-(void)setDefaultWindowLevel:(double)arg1 ;
-(void)_commonTextEffectsInit;
-(BOOL)enableRemoteHosting;
-(CGPoint)_forHostedProcessConvertPoint:(CGPoint)arg1 forWindow:(id)arg2 wasFromWindow:(BOOL)arg3 ;
-(CGRect)_forHostedProcessConvertRect:(CGRect)arg1 forWindow:(id)arg2 wasFromWindow:(BOOL)arg3 ;
-(CGRect)actualSceneFrameForOrientation:(long long)arg1 ;
-(void)delayHideWindow;
-(void)sortSubviews;
-(void)updateForOrientation:(long long)arg1 forceResetTransform:(BOOL)arg2 ;
-(void)setHostedSafeInsets:(UIEdgeInsets)arg1 ;
-(void)setEnableRemoteHosting:(BOOL)arg1 ;
-(void)_restoreWindowLevel;
-(void)resetTransform;
-(void)updateSubviewOrdering;
-(void)setHostedWindowOffset:(CGPoint)arg1 ;
-(void)setHostedSceneSize:(CGSize)arg1 ;
-(UIEditingOverlayViewController *)editingOverlayViewController;
@end

