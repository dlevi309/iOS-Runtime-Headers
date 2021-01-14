/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (readonly) UIWindowScene * _intendedCanvas; 
@property (readonly) NSDictionary * _options; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIEditingOverlayViewController * editingOverlayViewController;              //@synthesize editingOverlayViewController=_editingOverlayViewController - In the implementation block
@property (readonly) unsigned contextID; 
@property (nonatomic,readonly) BOOL isFullscreen;                                                          //@synthesize isFullscreen=_isFullscreen - In the implementation block
@property (assign,nonatomic) double defaultWindowLevel;                                                    //@synthesize defaultWindowLevel=_defaultWindowLevel - In the implementation block
@property (nonatomic,readonly) CGSize keyboardScreenReferenceSize; 
@property (nonatomic,readonly) double keyboardWidthForCurrentDevice; 
@property (assign,nonatomic) CGPoint hostedWindowOffset;                                                   //@synthesize hostedWindowOffset=_hostedWindowOffset - In the implementation block
@property (nonatomic,readonly) CGRect hostedFrame; 
@property (assign,nonatomic) CGSize hostedSceneSize;                                                       //@synthesize hostedSceneSize=_hostedSceneSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hostedSafeInsets;                                                //@synthesize hostedSafeInsets=_hostedSafeInsets - In the implementation block
+(id)activeTextEffectsWindowForCanvas:(id)arg1 ;
+(id)_canvasForScreen:(id)arg1 ;
+(id)sharedTextEffectsWindowForWindowScene:(id)arg1 ;
+(void)releaseSharedInstances;
+(id)sharedTextEffectsWindowAboveStatusBar;
+(id)activeTextEffectsWindowForScreen:(id)arg1 ;
+(id)sharedTextEffectsWindowForScreen:(id)arg1 ;
+(id)_sharedTextEffectsWindowforWindowScene:(id)arg1 allowHosted:(BOOL)arg2 matchesStatusBarOrientationOnAccess:(BOOL)arg3 shouldCreateIfNecessary:(BOOL)arg4 ;
+(void)lowerTextEffectsWindowsForHideNotificationCenter;
+(id)activeTextEffectsWindowForWindowScene:(id)arg1 ;
+(BOOL)_shouldSoftAssertOnSetScreen;
+(void)raiseTextEffectsWindowsForShowNotificationCenter;
+(BOOL)_isSecure;
+(id)sharedTextEffectsWindowForCanvas:(id)arg1 ;
+(id)sharedTextEffectsWindow;
-(CGPoint)convertPoint:(CGPoint)arg1 toWindow:(id)arg2 ;
-(void)_sceneBoundsDidChange;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(CGSize)hostedSceneSize;
-(void)_commonTextEffectsInit;
-(void)sendSubviewToBack:(id)arg1 ;
-(void)setHostedWindowOffset:(CGPoint)arg1 ;
-(void)updateEditingOverlayContainer;
-(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
-(BOOL)_shouldResizeWithScene;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(double)defaultWindowLevel;
-(CGRect)_usableSceneBounds;
-(void)sortSubviews;
-(CGSize)keyboardScreenReferenceSize;
-(void)setHostedSceneSize:(CGSize)arg1 ;
-(UIEditingOverlayViewController *)editingOverlayViewController;
-(CGRect)_forHostedProcessConvertRect:(CGRect)arg1 forWindow:(id)arg2 wasFromWindow:(BOOL)arg3 ;
-(CGRect)actualSceneBoundsForLandscape:(BOOL)arg1 ;
-(void)_matchDeviceOrientation;
-(CGRect)actualSceneFrame;
-(void)_configureContextOptions:(id)arg1 ;
-(void)addBottomPadding:(double)arg1 ;
-(double)keyboardWidthForCurrentDevice;
-(id)_inputWindowController;
-(void)_willSnapshot;
-(BOOL)_shouldInstallRootPresentationController;
-(CGPoint)_forHostedProcessConvertPoint:(CGPoint)arg1 forWindow:(id)arg2 wasFromWindow:(BOOL)arg3 ;
-(void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2 ;
-(void)_createSystemGestureGateGestureRecognizerIfNeeded;
-(void)_setWindowLevel:(double)arg1 ;
-(BOOL)_isFullscreen;
-(BOOL)_isTextEffectsWindow;
-(BOOL)_shouldTextEffectsWindowBeHostedForView:(id)arg1 ;
-(void)setHostedSafeInsets:(UIEdgeInsets)arg1 ;
-(void)_sortSubviewsOfView:(id)arg1 ;
-(void)updateSubviewOrdering;
-(double)slideOverWindowVerticalOffset;
-(void)_restoreWindowLevel;
-(CGRect)convertRect:(CGRect)arg1 fromWindow:(id)arg2 ;
-(void)becomeKeyWindow;
-(void)bringSubviewToFront:(id)arg1 ;
-(void)_updateTransformLayer;
-(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
-(BOOL)enableRemoteHosting;
-(BOOL)_extendsScreenSceneLifetime;
-(void)_commonInitWithOptions:(id)arg1 ;
-(void)_didSnapshot;
-(void)setDefaultWindowLevel:(double)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toWindow:(id)arg2 ;
-(CGRect)_sceneReferenceBounds;
-(BOOL)isInternalWindow;
-(CGPoint)hostedWindowOffset;
-(void)updateForOrientation:(long long)arg1 forceResetTransform:(BOOL)arg2 ;
-(id)_initBasicWithCanvas:(id)arg1 options:(id)arg2 ;
-(UIEdgeInsets)hostedSafeInsets;
-(CGRect)actualSceneBounds;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(UIWindowScene *)_intendedCanvas;
-(id)aboveStatusBarWindow;
-(long long)actualSceneOrientation;
-(CGRect)hostedFrame;
-(CGRect)actualSceneFrameForOrientation:(long long)arg1 ;
-(void)resetTransform;
-(CGRect)_sceneBounds;
-(void)delayHideWindow;
-(void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
-(void)setEnableRemoteHosting:(BOOL)arg1 ;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromWindow:(id)arg2 ;
-(id)_initWithCanvas:(id)arg1 options:(id)arg2 ;
-(BOOL)_matchingOptions:(id)arg1 ;
-(BOOL)isFullscreen;
-(id)_initWithFrame:(CGRect)arg1 debugName:(id)arg2 windowScene:(id)arg3 ;
-(void)_didRemoveSubview:(id)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 attached:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSDictionary *)_options;
-(void)updateForOrientation:(long long)arg1 ;
-(BOOL)_canAffectStatusBarAppearance;
-(long long)interfaceOrientation;
-(unsigned)contextID;
-(void)didAddSubview:(id)arg1 ;
-(void)dealloc;
@end

