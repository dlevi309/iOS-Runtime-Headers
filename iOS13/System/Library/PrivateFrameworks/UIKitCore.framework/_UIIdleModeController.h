/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIWindow, UIImageView, NSMapTable, UIScreen;

@interface _UIIdleModeController : NSObject {

	BOOL _didApplyVisualEffects;
	UIWindow* _backgroundWindow;
	UIImageView* _vignetteView;
	BOOL _keyWindowAllowedGroupBlending;
	UIWindow* _keyWindow;
	NSMapTable* _viewsToCAFilters;
	NSMapTable* _viewsToAttributes;
	NSMapTable* _viewsToOriginalAttributes;
	BOOL _idleModeEnabled;
	UIScreen* _screen;

}

@property (nonatomic,readonly) UIScreen * screen;                                        //@synthesize screen=_screen - In the implementation block
@property (assign,getter=isIdleModeEnabled,nonatomic) BOOL idleModeEnabled;              //@synthesize idleModeEnabled=_idleModeEnabled - In the implementation block
-(void)dealloc;
-(UIScreen *)screen;
-(void)_applyLayoutAttributes:(id)arg1 toView:(id)arg2 ;
-(double)_presentationAnimationDuration;
-(double)_dismissalAnimationDuration;
-(id)initWithScreen:(id)arg1 ;
-(void)setIdleModeEnabled:(BOOL)arg1 ;
-(void)_completeDismissal;
-(void)_enterIdleMode;
-(void)_exitIdleMode;
-(BOOL)_recordLayoutAttributesStartingAtView:(id)arg1 ;
-(void)_prepareForPresentationWithKeyWindow:(id)arg1 focusedView:(id)arg2 ;
-(void)_animatePresentation;
-(void)_animateDismissal;
-(id)_imageForTraitCollection:(id)arg1 ;
-(id)_originalAttributesForView:(id)arg1 comparedToIdleModeAttributes:(id)arg2 ;
-(id)_vignetteImageAroundFocusedFrame:(CGRect)arg1 ;
-(void)_applyPresentationLayoutAttributesToViews;
-(double)_vignetteAlphaForUserInterfaceStyle:(long long)arg1 ;
-(double)_dimmingOverlayWhiteValueForUserInterfaceStyle:(long long)arg1 ;
-(void)_applyDismissalLayoutAttributesToViews;
-(BOOL)isIdleModeEnabled;
@end

